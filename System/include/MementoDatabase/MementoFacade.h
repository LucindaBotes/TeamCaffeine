#ifndef MEMENTOFACADE_H
#define MEMENTOFACADE_H

template <class T>
class MementoFacade {
  private:
    T memento;

  public:
    MementoFacade();
    ~MementoFacade();
    T getMemento();
    void setMemento(T);
};

#endif
