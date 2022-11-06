#ifndef WARDATABASE_H
#define WARDATABASE_H
#include <MementoDatabase/Databases.h>
#include <../src/MementoDatabase/Databases.cpp>

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
