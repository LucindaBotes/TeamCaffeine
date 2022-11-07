#ifndef WARDATABASE_H
#define WARDATABASE_H
#include "Databases.h"

template <class T>
class WarDatabase: public Databases {
  private:
    T memento;

  public:
    WarDatabase();
    ~WarDatabase();
    T getMemento();
    void setMemento(T);
};

#endif
