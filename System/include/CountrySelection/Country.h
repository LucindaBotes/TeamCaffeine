#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>
#include <vector>

#include <ObserverPattern/ActionListener.h>
#include <CountrySelection/Statistics.h>
#include <Inventory/InventoryShop.h>

class Country : ActionListener{
  private:
    std::string _name;
    std::vector<Country>* _allies;
    Statistics* _stats;
    InventoryShop* _inventoryShop;

  public:
    Country();
    Country(std::string, std::vector<Country>*, Statistics*, InventoryShop*);
    ~Country();
    
    std::string getName() const;
    std::vector<Country> getAllies() const;
    Statistics getStats() const;
    InventoryShop getInventoryShop() const;

    void addAllies(std::vector<Country>);
    void addAlly(Country);

    void removeAlly(Country);
    void removeAllies(std::vector<Country>);
};

#endif
