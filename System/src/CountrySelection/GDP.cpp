#include "GDP.h"

using namespace std;

/** 
*  @file GDP.h
*  @brief GDP class implementation,
*
*  @details GDP implements the base @file Country.h class.
*  
*  @author Marthinus Ettienne van Zyl ; u19012366
*/

/**
 * @brief Create GDP:: Create GDP object and initializes members.
 * @details Create GDP object and initializes @code _value @endcode member to a uniform random number between 1000 and 3000.
 * @return GDP
 */
GDP::GDP()
{
  _value = Randomizer::getInstance()->getUniformRandomNumber(1000, 3000);
}

/**
 * @brief Create GDP:: Create GDP object.
 * @details Create GDP object and initializes @code _value @endcode member to passed in parameter @code gdpValue @endcode.
 * @param gdpValue double
 * @return GDP
 */
GDP::GDP(double gdpValue)
{
  this->_value = gdpValue;
}

/**
 * @brief Destroy the GDP:: GDP object
 */
GDP::~GDP()
{
}

/**
 * @brief Get GDP:: Get the value of the GDP object
 * @details Get GDP:: Gets the @code _value @endcode member of the GDP object.
 * @return double const
 */
double GDP::getValue() const
{
  return _value;
}

/**
 * @brief Set GDP:: Set the value of the GDP object
 * @details Set GDP:: Sets the @code _value @endcode member of the GDP object to passed in parameter @code gdpValue @endcode.
 * @param gdpValue double
 */
void GDP::setValue(double gdpValue)
{
  _value = gdpValue;
}
