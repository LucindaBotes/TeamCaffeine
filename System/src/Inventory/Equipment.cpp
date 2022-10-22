#include <Inventory/Equipment.h>

using namespace std;

/** 
*  @file Equipment.h
*  @brief Equipment class implementation,
*  Design Patterns:
*  @li Template Method: Concrete class participant
*  @li Prototype: Concrete Prototype participant
*  @li Decorator: Concrete Component participant
*  @li Factory: Concrete participant
*
*  @details Equipment implements the Entity interface, and is it's concrete class
*  
*  @author Marthinus Ettienne van Zyl ; u19012366,
*TODO:  @todo Override base class decorator extra method
*/

Equipment::Equipment() {
}

Equipment::Equipment(const Equipment& e) {
    this->_type = EntityType::EQUIPMENT;

    for(Entity* weapon : e._weapons) {
        _weapons.push_back(weapon->clone());
    }
   
   for(Entity* medicine : e._medicine) {
        _medicine.push_back(medicine->clone());
    }

    for(Entity* vehicle : e.vehicles) {
        vehicles.push_back(vehicle->clone());
    }
}

Equipment::~Equipment() {
}

Entity* Equipment::clone() {
    return new Equipment(*this);
}

std::vector<Entity*> Equipment::getWeapons() const {
    return this->_weapons;
}

std::vector<Entity*> Equipment::getMedicine() const {
    return this->_medicine;
}   

std::vector<Entity*> Equipment::getVehicles() const {
    return this->vehicles;
}