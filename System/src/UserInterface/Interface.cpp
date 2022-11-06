#include "Interface.h"

using namespace std;

Interface::Interface() 
{

    cout << "--------------------------" << endl;
    cout << "Welcome To War Simulator" << endl;
    cout << "--------------------------" << endl;

    warObject = new War();
    string Wname;
    string cName;
    
    cout << "Please input the name of this War: ";
    cin >> Wname;

    warObject->setName(Wname);

    cout << "Please Enter The Details Of Both Countries Involved In This War: " << endl;
    for(int i = 0; i < 2; i++)
    { 
      cout << "Please select the country's name: ";
      cin >> cName;
    }
    warObject->setActive(true);
    
}

/// @brief deallocate the dynamically allocated War pointer
Interface::~Interface() 
{
  if(warObject != NULL)
  {
    delete warObject;
    warObject = NULL;
  }
    
}