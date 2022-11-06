#ifndef COUNTRY_H
#define COUNTRY_H
#include <CountrySelection/Statistics.h>

#include <string>
#include <vector>

#include <ObserverPattern/ActionListener.h>
#include <CountrySelection/Statistics.h>
#include <Inventory/InventoryShop.h>

class Country {
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
