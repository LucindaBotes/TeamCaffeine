#ifndef DATABASES_H
#define DATABASES_H

template <class T>
class Databases {
  private:
    T memento;

  public:
    Databases();
    ~Databases();
    T getMemento();
    void setMemento(T);
};

#endif
