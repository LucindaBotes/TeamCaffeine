#include <UserInterface/Interface.h>

using namespace std;

Interface::Interface() 
{

    cout << "--------------------------" << endl;
    cout << "Welcome To War Simulator" << endl;
    cout << "--------------------------" << endl;

    warObject = new War();
    string Wname;
    string cName;
    int cSoldiers; 
    int cEquipment;
    int cAllies;

    cout << "Please input the name of this War: ";
    cin >> Wname;

    warObject->setName(Wname);

    cout << "Please Enter The Details Of Both Countries Involved In This War: " << endl;
    for(int i = 0; i < 2; i++)
    {
        //changes highly possible
        cout << "Details For Country " << i << " : " << endl;
        cout << "The Country's Name: ";
        cin >> cName;
        cout << "The Country's Soldiers: ";
        cin >> cSoldiers;
        cout << "The Country's Allies: ";
        cin >> cAllies;
        cout << "The Country's Equipment: ";
        cin >> cEquipment;

        //warObject->setCountriesAtWar(Country(cName, cSoldiers, cEquipment));
    }

    warObject->setActive(true);
    
}

Interface::~Interface() 
{
  if(warObject != NULL)
  {
    delete warObject;
    warObject = NULL;
  }
    
}