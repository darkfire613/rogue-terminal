/*
  Owen Monsma
  darkfire613@icloud.com
  Inventory.h
  October 24, 2014

  Stores an inventory of Item objects in a linked list
 */

#include "Item.h"

class Inventory
{
private:
  struct invItem
  {
    Item item;
    invItem *next;
  }

  typedef invItem *invItemPtr;

  invItemPtr head;
  invItemPtr tail;
public:


};
