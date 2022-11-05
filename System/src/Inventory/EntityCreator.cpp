#include <Inventory/EntityCreator.h>
using namespace std;

/** 
*  @brief EntityCreator class implementation,
*  @li Design Pattern: Abstract Factory
*  @li Participant: AbstractFactory
*
*  @details EntityCreator is responsible for creating the entities and the itterator for each entity.
*  @authors: Lucinda Botes ; u19048263
*/

/**
* @brief EntityCreator Constructor
* @params: none
* @return: none
*/
EntityCreator::EntityCreator() {

}

/**
 * @brief Destroy the Entity Creator:: Entity Creator object
 * @params: none
 * @return: none
 */
EntityCreator::~EntityCreator() {
}

/**
 * @brief 
 * @param none
 * @return Entity *
 */
Entity* EntityCreator::createEntity() {
}

