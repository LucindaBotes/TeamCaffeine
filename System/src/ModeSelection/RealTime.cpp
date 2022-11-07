#include "RealTime.h"
#include "Weapons.h"
#include "Soldiers.h"
#include "Medics.h"
#include "Supplies.h"
#include "Armour.h"
#include <limits>
#include <iostream>

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

static std::string bombArt = R"(                             ____
                     __,-~~/~    `---.
                   _/_,---(      ,    )
               __ /        <    /   )  \___
- ------===;;;'====------------------===;;;===----- -  -
                  \/  ~"~"~"~"~"~\~"~)~"/
                  (_ (   \  (     >    \)
                   \_( _ <         >_>'
                      ~ `-i' ::>|--"
                          I;|.|.|
                         <|i::|i|`.
                        (` ^'"`-' ")    
)";

/// @brief Shows the user that they selected the Real time mode
void RealTime::startSimulation()
{
  std::cout << "\tYou've choosen the Real-Time Mode." << endl;
  cout << "-You will not have the ability to undo in Real-Time mode.-" << endl;

  cout<<"**************************************************\n"<<endl;

  cout<<"What would you like to name your war?"<<endl;
  string warName;
  std::cin.ignore();
  getline(cin, warName);
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

    Armour* a_1 = new Armour(1); //Basic Armour
    a_1->setName("Bulletproof Vest.");
    a_1->setPrice(2);
    Armour* a_2 = new Armour(2); //Intermediate Armour
    a_2->setName("Kevlar vest");
    a_2->setPrice(4);
    Armour* a_3 = new Armour(3); //Advanced Armour
    a_3->setName("Armour Plates.");
    a_3->setPrice(6);

    Weapons* w_1 = new Weapons(1); //Basic Weapon
    w_1->setName("Pistol"); 
    w_1->setPrice(11);
    w_1->setDamage(1);
    Weapons* w_2 = new Weapons(2); //Intermediate Weapon
    w_2->setName("Rifle");
    w_2->setPrice(13);
    w_2->setDamage(2);
    Weapons* w_3 = new Weapons(3); //Advanced Weapon
    w_3->setName("Machine Gun.");
    w_3->setPrice(15);
    w_3->setDamage(3);

    Soldiers* s_1 = new Soldiers();
    s_1->setCount(25);
    s_1->setDamage(1);
    s_1->setArmour(1);
    s_1->setPrice(250);
    s_1->setName("Platoon of Marines.");

    Soldiers* s_2 = new Soldiers();
    s_2->setCount(25);
    s_2->setDamage(5);
    s_2->setArmour(3);
    s_2->setPrice(500);
    s_2->setName("Platoon of Rangers.");

    Soldiers* s_3 = new Soldiers();
    s_3->setCount(25);
    s_3->setDamage(12);
    s_3->setArmour(5);
    s_3->setPrice(750);
    s_3->setName("Platoon of NAVY Seals.");

    Soldiers* nuke_1 = new Soldiers();
    nuke_1->setDamage(1200);
    nuke_1->setPrice(2000);
    nuke_1->setCount(0);
    nuke_1->setArmour(0);
    nuke_1->setName("'Little boy' nuke package.");

    Soldiers* nuke_2 = new Soldiers();
    nuke_2->setDamage(2400);
    nuke_2->setPrice(3000);
    nuke_2->setCount(0);
    nuke_2->setArmour(0);
    nuke_2->setName("'Fat man' nuke package.");

    Soldiers* hydro = new Soldiers();
    hydro->setDamage(std::numeric_limits<double>::infinity());
    hydro->setPrice(10000);
    hydro->setArmour(0);
    hydro->setCount(0);
    hydro->setName("Hydrogen Bomb.");

    Medics* m_1 = new Medics();
    m_1->setHeal(100);
    m_1->setPrice(750);

    vector<Entity*> shop = vector<Entity*>();
    shop.push_back(s_1);
    shop.push_back(s_2);
    shop.push_back(s_3);
    shop.push_back(w_1);
    shop.push_back(w_2);
    shop.push_back(w_3);
    shop.push_back(nuke_1);
    shop.push_back(nuke_2);
    shop.push_back(hydro);
    shop.push_back(a_1);
    shop.push_back(a_2);
    shop.push_back(a_3);
    shop.push_back(m_1);

    for(Entity* e : shop)
    {
      this->war->getPlayer1_Country()->getInventoryShop()->addPurchasable(e);
      this->war->getPlayer2_Country()->getInventoryShop()->addPurchasable(e);
    }
    
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

    battle->setPlayerAllies(this->war->getPlayer1_Country(), this->war->getPlayer2_Country());

    /*
      SHOP NEEDS TO OPEN HERE!!
    */
   cout<<"**************************************************"<<endl;
   cout << "Player 1, here are your statistics:" << endl;
   cout<<"**************************************************"<<endl;
   this->war->getPlayer1_Country()->printStats();
    cout<<"**************************************************"<<endl;

    std::cout << "Player 1, would you like to access the Shop?(Y/N)";
    char r1;
    std::cin.ignore();
    cin >> r1;
    while (r1 == 'Y' || r1 == 'y')
    {
        std::cout << "Player 1, choose the item you wish to purchase: " << std::endl;
        this->war->getPlayer1_Country()->getInventoryShop()->printShop();
        int choice = -1;
        std::cin >> choice;
        while(choice < 1 && choice > 13)
          std::cout << "Invalid choice, please try again." << std::endl;

        int soldierCount = 0;
        for(Entity* e : this->war->getPlayer2_Country()->getInventoryShop()->getSoldiers())
        {
          if(e->getType() == EntityType::SOLDIER)
          {
            soldierCount += ((Soldiers*)e)->getCount();
          }
        }

        Entity* purchasable = this->war->getPlayer1_Country()->getInventoryShop()->getPurchasable().at(choice - 1);
        if(
          (
              purchasable->getType() == EntityType::SOLDIER || 
              purchasable->getType() == EntityType::MEDIC
            ) 
            &&
            (
              this->war->getPlayer1_Country()->getStats()->getGDP()->getValue() >= purchasable->getPrice() 
            )
            ||
            (
              purchasable->getType() == EntityType::WEAPON || 
              purchasable->getType() == EntityType::ARMOUR
            )
            &&
            (
              this->war->getPlayer1_Country()->getStats()->getGDP()->getValue() >= (purchasable->getPrice() * soldierCount)
            )
          )
        {
          double tempGDP = this->war->getPlayer1_Country()->getStats()->getGDP()->getValue();
          if(purchasable->getType() == EntityType::SOLDIER)
          {
            this->war->getPlayer1_Country()->getStats()->getGDP()->setValue(tempGDP - purchasable->getPrice());
            this->war->getPlayer1_Country()->getInventoryShop()->addSoldier(purchasable);
            cout << "Soldiers added to your inventory." << endl;

            Soldiers* s = (Soldiers*)purchasable;
            double currDamage = this->war->getPlayer1_Country()->getStats()->getDamage();
            double currDefence = this->war->getPlayer1_Country()->getStats()->getDefence();

            this->war->getPlayer1_Country()->getStats()->setDamage(currDamage + s->getDamage());
            this->war->getPlayer1_Country()->getStats()->setDefence(currDefence + s->getArmour());
          }
          else if(purchasable->getType() == EntityType::MEDIC)
          {
            this->war->getPlayer1_Country()->getStats()->getGDP()->setValue(tempGDP - purchasable->getPrice());
            this->war->getPlayer1_Country()->getInventoryShop()->addMedicine(purchasable);
            cout << "Health added to your inventory." << endl;

            Medics* m = (Medics*)purchasable;
            double currHealth = this->war->getPlayer1_Country()->getStats()->getHealth();

            this->war->getPlayer1_Country()->getStats()->setHealth(currHealth + m->getHeal());
          }
          else
          {
            for(Entity* e : this->war->getPlayer1_Country()->getInventoryShop()->getSoldiers())
            {
              e->addEntity(purchasable);

              this->war->getPlayer1_Country()->getStats()->getGDP()->setValue(this->war->getPlayer1_Country()->getStats()->getGDP()->getValue() - (purchasable->getPrice() * soldierCount));

              if(purchasable->getType() == EntityType::WEAPON)
              {

                Weapons* w = (Weapons*)purchasable;
                double currDamage = this->war->getPlayer1_Country()->getStats()->getDamage();
                this->war->getPlayer1_Country()->getStats()->setDamage(currDamage + (w->getDamage() * soldierCount));

                cout << "Weapons upgraded!!" << endl;
              }
              else
              {
                this->war->getPlayer1_Country()->getStats()->getGDP()->setValue(this->war->getPlayer1_Country()->getStats()->getGDP()->getValue() - (e->getPrice() * soldierCount));

                Armour* a = (Armour*)purchasable;
                double currDefence = this->war->getPlayer1_Country()->getStats()->getDefence();
                this->war->getPlayer1_Country()->getStats()->setDefence(currDefence + (a->getArmour() * soldierCount));
              
                cout << "Armour upgraded!!" << endl;
              }
            }
          }
        }
        else
          std::cout << "You do not have enough GDP to purchase this item." << std::endl;

           cout<<"**************************************************"<<endl;
          cout << "Player 1, here are your statistics before battle:" << endl;
          cout<<"**************************************************"<<endl;
          this->war->getPlayer1_Country()->printStats();
            cout<<"**************************************************"<<endl;

        std::cout << "Player 1, would you like to access the Shop?(Y/N)";
        std::cin.ignore();
        cin >> r1;
    }


    cout<<"**************************************************"<<endl;
    cout << "Player 2, here are your statistics:" << endl;
    cout<<"**************************************************"<<endl;
    this->war->getPlayer2_Country()->printStats();
    cout<<"**************************************************"<<endl;

    std::cout << "Player 2, would you like to access the Shop?(Y/N)";
    char r2;
    std::cin.ignore();
    cin >> r2;
    while (r2 == 'Y' || r2 == 'y')
    {
        std::cout << "Player 2, choose the item you wish to purchase: " << std::endl;
        this->war->getPlayer2_Country()->getInventoryShop()->printShop();
        int choice = -1;
        std::cin >> choice;
        while(choice < 1 && choice > 13)
          std::cout << "Invalid choice, please try again." << std::endl;

        int soldierCount = 0;
        for(Entity* e : this->war->getPlayer2_Country()->getInventoryShop()->getSoldiers())
        {
          if(e->getType() == EntityType::SOLDIER)
          {
            soldierCount += ((Soldiers*)e)->getCount();
          }
        }

        Entity* purchasable = this->war->getPlayer2_Country()->getInventoryShop()->getPurchasable().at(choice - 1);
        if(
            (
              purchasable->getType() == EntityType::SOLDIER || 
              purchasable->getType() == EntityType::MEDIC
            ) 
            &&
            (
              this->war->getPlayer2_Country()->getStats()->getGDP()->getValue() >= purchasable->getPrice() 
            )
            ||
            (
              purchasable->getType() == EntityType::WEAPON || 
              purchasable->getType() == EntityType::ARMOUR
            )
            &&
            (
              this->war->getPlayer2_Country()->getStats()->getGDP()->getValue() >= (purchasable->getPrice() * soldierCount)
            )
          )
        {
          if(purchasable->getType() == EntityType::SOLDIER)
          {
            this->war->getPlayer2_Country()->getStats()->getGDP()->setValue(this->war->getPlayer2_Country()->getStats()->getGDP()->getValue() - purchasable->getPrice());
            this->war->getPlayer2_Country()->getInventoryShop()->addSoldier(purchasable);

            Soldiers* s = (Soldiers*)purchasable;
            double currDamage = this->war->getPlayer2_Country()->getStats()->getDamage();
            double currDefence = this->war->getPlayer2_Country()->getStats()->getDefence();

            this->war->getPlayer2_Country()->getStats()->setDamage(currDamage + s->getDamage());
            this->war->getPlayer2_Country()->getStats()->setDefence(currDefence + s->getArmour());
          }
          else if(purchasable->getType() == EntityType::MEDIC)
          {
            this->war->getPlayer2_Country()->getStats()->getGDP()->setValue(this->war->getPlayer2_Country()->getStats()->getGDP()->getValue() - purchasable->getPrice());
            this->war->getPlayer2_Country()->getInventoryShop()->addMedicine(purchasable);

            Medics* m = (Medics*)purchasable;
            double currHealth = this->war->getPlayer2_Country()->getStats()->getHealth();

            this->war->getPlayer2_Country()->getStats()->setHealth(currHealth + m->getHeal());
          }
          else
          {
            for(Entity* e : this->war->getPlayer2_Country()->getInventoryShop()->getSoldiers())
            {
              e->addEntity(purchasable);

              this->war->getPlayer2_Country()->getStats()->getGDP()->setValue(this->war->getPlayer2_Country()->getStats()->getGDP()->getValue() - (purchasable->getPrice() * soldierCount));

              if(purchasable->getType() == EntityType::WEAPON)
              {
                Weapons* w = (Weapons*)purchasable;
                double currDamage = this->war->getPlayer2_Country()->getStats()->getDamage();
                this->war->getPlayer2_Country()->getStats()->setDamage(currDamage + (w->getDamage() * soldierCount));
              }
              else
              {
                Armour* a = (Armour*)purchasable;
                double currDefence = this->war->getPlayer2_Country()->getStats()->getDefence();
                this->war->getPlayer2_Country()->getStats()->setDefence(currDefence + (a->getArmour() * soldierCount));
              }
            }
          }
        }
        else
          std::cout << "You do not have enough GDP to purchase this item." << std::endl;

        cout<<"**************************************************"<<endl;
        cout << "Player 2, here are your statistics before battle:" << endl;
        cout<<"**************************************************"<<endl;
        this->war->getPlayer2_Country()->printStats();
        cout<<"**************************************************"<<endl;

        std::cout << "Player 2, would you like to access the Shop?(Y/N)";
        std::cin.ignore();
        cin >> r2;
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

    this->war->getPlayer1_Country()->getStats()->getGDP()->setValue(this->war->getPlayer1_Country()->getStats()->getGDP()->getValue() + 100);
    this->war->getPlayer2_Country()->getStats()->getGDP()->setValue(this->war->getPlayer2_Country()->getStats()->getGDP()->getValue() + 100);

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
      break;
    }

    if (this->war->getPlayer1_Country()->getStats()->getHealth() <= 0)
    {
      WarTrue = false;
      if (this->war->getPlayer2_Country()->getInventoryShop()->hasHydrogen())
      {
        std::cout << bombArt << std::endl;
      }
      cout<<this->war->getPlayer1_Country()->getName()<<" has been defeated!!"<<endl;
      cout<<this->war->getPlayer2_Country()->getName()<<" has won the war!"<<endl;
      cout<<"*****************************************"<<endl;
      cout<<"Congratulations! Player 2 WINS."<<endl;
      break;
    }

    if (this->war->getPlayer2_Country()->getStats()->getHealth() <= 0)
    {
      WarTrue = false;
        if (this->war->getPlayer1_Country()->getInventoryShop()->hasHydrogen())
        {
            std::cout << bombArt << std::endl;
        }

      cout<<this->war->getPlayer2_Country()->getName()<<" has been defeated!!"<<endl;
      cout<<this->war->getPlayer1_Country()->getName()<<" has won the war!"<<endl;
      cout<<"*****************************************"<<endl;
      cout<<"Congratulations! Player 1 WINS."<<endl;
      break;
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
