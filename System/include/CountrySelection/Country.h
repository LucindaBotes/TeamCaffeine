#ifndef COUNTRY_H
#define COUNTRY_H
#include "CountrySelection/Statistics.h"

#include <string>
#include <vector>

#include "ObserverPattern/ActionListener.h"
#include "CountrySelection/Statistics.h"
#include "Inventory/InventoryShop.h"

class Country : ActionListener{
  private:
    int member;    
    std::string _name;
    std::vector<Country*> _allies;
    Statistics* _stats;
    InventoryShop* _inventoryShop;

  public:
    Country();
    Country(std::string);
    Country(std::string, std::vector<Country*>, Statistics*, InventoryShop*);
    ~Country();

    /*Added by Erik*/
    Country* copy(Country*);
    Country* copy(int, std::string, std::vector<Country*>, Statistics*, InventoryShop*);
    void setAllies(std::vector<Country*>);
    void setStats(Statistics*);
    void setInventoryShop(InventoryShop*);
    /*Added by Erik*/

    int getMember();
    void setMember(int);
    void setName(std::string name);
    std::vector<Country*> getAllies();
    std::string getName() const;
    Statistics getStats() const;
    InventoryShop getInventoryShop() const;
    void addAlly(Country*);
    void removeAlly(Country*);
};

#endif
