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
    Country(std::string, std::vector<Country>*,* Statistics*, InventoryShop*);
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
    void printStats();
};

#endif
