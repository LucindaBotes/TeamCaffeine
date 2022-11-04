#include "GDP.h"

using namespace std;

GDP::GDP()
{
  _value = 0.0;
}

GDP::GDP(double gdpValue)
{
  this->_value = gdpValue;
}

GDP::~GDP()
{
}

double GDP::getValue() const
{
  return _value;
}

void GDP::setValue(double gdpValue)
{
  _value = gdpValue;
}
