/*
  Owen Monsma
  darkfire613@icloud.com
  Inventory.cpp
  October 24, 2014

  Stores an inventory of Item objects in a linked list
 */

#include <iostream>
#include "Inventory.h"

Inventory::Inventory()
{
  head = NULL;
  size = 0;
}

Inventory::~Inventory()
{
  invItemPtr next = head;
  while (next != NULL)
  {
    invItemPtr curr = next;
    next = curr->next;
    delete curr;
  }
}

void Inventory::AddItem(Item newItem)
{
  invItemPtr adding = new invItem;
  adding -> item = newItem;
  adding -> next = head;
  head = adding;
  size++;
}

void Inventory::DelItem(char* targetName)
{
  if (head == NULL)
  {

  }
  else
  {
    invItemPtr curr = head;
    invItemPtr prev = curr;
    while (curr != NULL && targetName != curr->item.get_name())
    {
      prev = curr;
      curr = curr->next;
    }
    if (targetName == curr->item.get_name())
    {
      delete curr;
      size--;
    }
    else
    {
      std::cout << "nothing to delete" << std::endl;
    }
  }
}

void Inventory::PrintItems()
{
  invItemPtr curr = head;
  if (curr == NULL)
  {
    std::cout << "EMPTY" << std::endl;
  }
  while (curr != NULL)
  {
    std::cout << curr->item.get_name() << std::endl;
    curr = curr->next;
  }
}

Item* Inventory::getItem(char* targetName)
{
  Item* getItem = NULL;
  invItemPtr returnNode;
  invItemPtr curr = head;

  while (curr != NULL)
  {
    if (curr->item.get_name() == targetName)
    {
      returnNode = curr;
      break;
    }

    else
    {
      curr = curr->next;
    }
  }

  *getItem = returnNode->item;
  return getItem;
}
