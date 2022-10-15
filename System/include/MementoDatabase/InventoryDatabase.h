#ifndef INVENTORYDATABASE_H
#define INVENTORYDATABASE_H

class InventoryDatabase {
  private:
    int member;

  public:
    InventoryDatabase();
    ~InventoryDatabase();
    int getMember();
    void setMember(int);
};

#endif
