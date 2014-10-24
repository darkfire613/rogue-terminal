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
public:
  void AddItem(Item newItem);
  void DelItem(char* targetName);
  void PrintItems();
  Item getItem(char* targetName);

};
