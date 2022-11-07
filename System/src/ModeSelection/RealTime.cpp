#include "RealTime.h"
#include "Weapons.h"
#include "Soldiers.h"
#include "Medics.h"
#include "Supplies.h"
#include "Armour.h"

using namespace std;

/**
 * @file RealTime.cpp
 * @brief RealTime class implementation,
 * @li Design Pattern: Strategy
 * @li Participant: ConcreteStrategy
 * 
 * @details RealTime is responsible for not allowing the user to interrupt the war
 * @author Netshifhefhe Unarine Leo : u20505656
 * 
*/

struct EntityWrapper {
    Entity* entity;
    std::string name;
};

RealTime::RealTime() {
  this->war = new War();
}

RealTime::~RealTime() {
}

/// @brief Shows the user that they selected the Real time mode
void RealTime::startSimulation()
{
  cout << "\tYou've choosen the Real-Time Mode." << endl;
  cout << "-You will not have the ability to undo in Real-Time mode.-" << endl;

  cout<<"**************************************************\n"<<endl;

  cout<<"What would you like to name your war?"<<endl;
  string warName;
  getline(std::cin, warName);
  this->war->setName(warName);
  cout<<"You have named your war: "<<this->war->getName()<<"."<<endl;
  
  cout<<"**************************************************\n"<<endl;
  this->war->initializeCountries();
  cout<<"Please choose your Commanding Country from the list below(Select the country number): "<<endl;
  this->war->printCountries();

  cout<<"Player 1: "<<endl;

  int player1Country;
  cin>>player1Country;
  this->war->setPlayer1_Country(this->war->Countries_Eligible_for_War[player1Country-1]->getName());
  
  cout<<"**************************************************\n"<<endl;

  cout<<"Please choose your Commanding Country from the list below(Select the country number): "<<endl;
  this->war->printCountries();

  cout<<"Player 2: "<<endl;

  int player2Country;
  cin>>player2Country;
  this->war->setPlayer2_Country(this->war->Countries_Eligible_for_War[player2Country-1]->getName());

  cout<<"**************************************************"<<endl;
  cout<<"Player 1 you have chosen: "<<this->war->getPlayer1_Country()->getName()<<" as your commanding country."<<endl;
  cout<<"Player 2 you have chosen: "<<this->war->getPlayer2_Country()->getName()<<" as your commanding country."<<endl;
  cout<<"**************************************************"<<endl;
  cout<<"**************************************************"<<endl;
  cout<<"**************************************************"<<endl;
  cout<<"Prepare for War!! "<<this->war->getPlayer1_Country()->getName()<<" vs "<<this->war->getPlayer2_Country()->getName()<<"!!"<<endl;
  cout<<"**************************************************"<<endl;
  cout<<"**************************************************"<<endl;
  cout<<"**************************************************"<<endl;

  bool WarTrue = true;
  int battleint = 1;



  while (WarTrue == true)
  {
    Battle * battle = new Battle();
    battle->setMember(battleint);//Needs loop
    cout<<"**************************************************"<<endl;
    battle->setWar(this->war);
    battle->addListener(this->war);

    this->war->addBattle(battle);
    this->war->setActive(true);

    this->war->setPlayer1();
    this->war->setPlayer2();

    battle->setPlayerAllies(this->war->getPlayer1_Country(), this->war->getPlayer1_Country());

    /*
      SHOP NEEDS TO OPEN HERE!!
    */

    std::cout << "Player 1, would you like to access the Shop?(Y/N)";
    std::string r1;
    cin >> r1;
    if (r1 == "Y" || r1 == "y")
    {
        this->war->getPlayer1_Country()->getInventoryShop().printShop();
    }
    std::cout << "Player 2, would you like to access the Shop?(Y/N)";
    std::string r2;
    cin >> r2;
    if (r2 == "Y" || r2 == "y")
    {
        this->war->getPlayer2_Country()->getInventoryShop().printShop();
    }

    cout<<"Choose your action for the battle from the list below(Select the action number): "<<endl;

    cout<<"1. Defend"<<endl;
    cout<<"2. Hold"<<endl;
    cout<<"3. Surrender"<<endl;
    cout<<"4. Request Ally"<<endl;
    cout<<"5. Attack"<<endl;
    cout<<"**************************************************"<<endl;
    int player1Action, player2Action;
    cout<<"Player 1: ";
    cin>>player1Action;
    cout<<"Player 2: ";
    cin>>player2Action;
    cout<<"**************************************************"<<endl;
    this->war->getPlayer1()->nextAction(player1Action-1);
    this->war->getPlayer2()->nextAction(player2Action-1);

    cout<<"Begin "<<battle->getName()<<"!!"<<endl;
    cout<<"**************************************************"<<endl;

    battle->start(this->war->getPlayer1(), this->war->getPlayer2());

    cout<<"**************************************************"<<endl;
    cout<<this->war->getPlayer1_Country()->getName()<<" stats after "<<battle->getName()<<": "<<endl;
    this->war->getPlayer1_Country()->printStats();
    cout<<"--------------------------------------------------"<<endl;
    cout<<this->war->getPlayer2_Country()->getName()<<" stats after "<<battle->getName()<<": "<<endl;
    this->war->getPlayer2_Country()->printStats();
    cout<<"**************************************************"<<endl;

    if (this->war->getPlayer1()->getNextAction() == 2 || this->war->getPlayer2()->getNextAction() == 2)
    {
      WarTrue = false;
    }

    if (this->war->getPlayer1_Country()->getStats().getHealth() <= 0)
    {
      WarTrue = false;
      cout<<this->war->getPlayer1_Country()->getName()<<" has been defeated!!"<<endl;
      cout<<this->war->getPlayer2_Country()->getName()<<" has won the war!"<<endl;
      cout<<"*****************************************"<<endl;
      cout<<"Congratulations! Player 2 WINS."<<endl;
    }

    if (this->war->getPlayer2_Country()->getStats().getHealth() <= 0)
    {
      WarTrue = false;
      cout<<this->war->getPlayer2_Country()->getName()<<" has been defeated!!"<<endl;
      cout<<this->war->getPlayer1_Country()->getName()<<" has won the war!"<<endl;
      cout<<"*****************************************"<<endl;
      cout<<"Congratulations! Player 1 WINS."<<endl;
    }
    battleint++;
  }
  



























}

/// @brief Real-Time Mode doesn't undo an activity so it's not implemented
/// @return null
Battle * RealTime::undo()
{
    return nullptr;
}
