#include <UserInterface/War.h>

using namespace std;

War::War() {
}

War::~War() {
  delete this->Player_1;
  delete this->Player_2;
  for (int i =0; i < this->battles.size(); i++)
  {
    delete this->battles[i];
  }
  this->battles.clear();
}

int War::getMember() {
  return this->member;
}

void War::setMember(int member) {
  this->member = member;
}

void War::setPlayer1()
{
  this->Player_1 = new Invoker(1);
  this->Player_1->setBattleActions(this->battles[this->battles.size()]);
}

void War::setPlayer2()
{
  this->Player_2 = new Invoker(2);
  this->Player_2->setBattleActions(this->battles[this->battles.size()]);
}

Invoker * War::getPlayer1()
{
  return this->Player_1;
}

Invoker * War::getPlayer1()
{
  return this->Player_2;
}

void War::addBattle(Battle * battle)
{
  this->battles.push_back(battle);
}

void War::setPlayer1_Country(std::string countryname1)
{
  for (int i=0; i < this->Countries_Eligible_for_War.size(); i++)
  {
    if (this->Countries_Eligible_for_War[i]->getName() == countryname1)
    {
      this->country_1 = this->Countries_Eligible_for_War[i];
      this->Countries_Eligible_for_War.erase(this->Countries_Eligible_for_War.begin() + i);
      break;
    }
  }
}

void War::setPlayer2_Country(std::string countryname2)
{
  for (int i=0; i < this->Countries_Eligible_for_War.size(); i++)
  {
    if (this->Countries_Eligible_for_War[i]->getName() == countryname2)
    {
      this->country_2 = this->Countries_Eligible_for_War[i];
      this->Countries_Eligible_for_War.erase(this->Countries_Eligible_for_War.begin() + i);
      break;
    }
  }
}

Country * War::getPlayer1_Country()
{
  return this->country_1;
}
Country * War::getPlayer2_Country()
{
  return this->country_2;
}

void War::initializeCountries()
{
  std::string country_names[10] = {"France", "USA", "Turkey", "Canada", "England", "Russia", "Poland", "South Africa", "Egypt", "Germany"};
  for (int i =0; i < 10; i ++)
  {
    this->Countries_Eligible_for_War.push_back(new Country(country_names[i]));
  }
}

