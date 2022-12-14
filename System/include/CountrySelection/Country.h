#ifndef COUNTRY_H
#define COUNTRY_H
#include "Statistics.h"

#include <string>
#include <vector>

#include "ActionListener.h"
#include "Statistics.h"
#include "InventoryShop.h"

class Country {
  private:
    std::string _name;
    std::vector<Country*>* _allies;
    Statistics *_stats;
    InventoryShop *_inventoryShop;

  public:
    Country();
    Country(std::string);
    Country(std::string, std::vector<Country*>*, Statistics*, InventoryShop*);
    ~Country();

    /*Added by Erik*/
    Country* copy(Country*);
    Country* copy( std::string, std::vector<Country*>, Statistics*, InventoryShop*);
    void setAllies(std::vector<Country*>);
    void setStats(Statistics*);
    void setInventoryShop(InventoryShop*);
    /*Added by Erik*/

    void setName(std::string name);
    std::vector<Country*> getAllies();
    std::string getName();
    Statistics* getStats();
    InventoryShop* getInventoryShop();
    void addAlly(Country*);
    void removeAlly(Country*);
    void printStats();
};

#endif
