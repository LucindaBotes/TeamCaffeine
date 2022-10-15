#ifndef INVENTORYMEMENTO_H
#define INVENTORYMEMENTO_H

class InventoryMemento {
  private:
    int member;

  public:
    InventoryMemento();
    ~InventoryMemento();
    int getMember();
    void setMember(int);
};

#endif
