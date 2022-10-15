#ifndef INVENTORYOBSERVER_H
#define INVENTORYOBSERVER_H

class InventoryObserver {
  private:
    int member;

  public:
    InventoryObserver();
    ~InventoryObserver();
    int getMember();
    void setMember(int);
};

#endif
