#ifndef INVENTORYFACADE_H
#define INVENTORYFACADE_H

class InventoryFacade {
  private:
    int member;

  public:
    InventoryFacade();
    ~InventoryFacade();
    int getMember();
    void setMember(int);
};

#endif
