#include <Inventory/Medics.h>

using namespace std;

Medics::Medics()
{
  // this->head = 0;
  this->_type = EntityType::MEDICS;
}

Medics::Medics(const Medics &m)
{
  this->_type = m._type;

  this->_heal = m._heal;
}

Medics::~Medics()
{
  
}

Entity* Medics::clone()
{
  
}
