#ifndef ARMOUR_H
#define ARMOUR_H

  #include <Inventory/ArmourNode.h>
#include <Inventory/ArmourIterator.h>

class Armour {
  friend class ArmourIterator;
  private:

ArmourNode *head;
  void enqueue (ArmourNode);
  bool isEmpty();
  ArmourNode dequeue();
  ArmourIterator<ArmourNode> begin();
  ArmourIterator<ArmourNode> end();
};

#endif
