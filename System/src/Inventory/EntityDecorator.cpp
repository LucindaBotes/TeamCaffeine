#include "EntityDecorator.h"

using namespace std;

/** 
*  @file EntityDecorator.h
*  @brief EntityDecorator class interface implementation,
*  Design Patterns:
*  @li Decorator: Decorator participant
*
*  @details EntityDecorator defines interface for Entity decorator objects.
*  
*  @author Marthinus Ettienne van Zyl ; u19012366,
*/

/**
 * @brief Create EntityDecorator:: Create EntityDecorator object
 * @details Create EntityDecorator object with passed in EntityType enum value to initialize @code _type member
 * @returns EntityDecorator
 */
EntityDecorator::EntityDecorator(EntityType t) : Entity(t){
}

/**
 * @brief Destroy EntityDecorator:: Destroy EntityDecorator object
 */
EntityDecorator::~EntityDecorator() {
}
