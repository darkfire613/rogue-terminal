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
  invItemPtr adding;
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
    while (curr != NULL)
    {
      // One-item case
      if (curr == head)
      {
        head = NULL;
        delete curr;
        size--;
        break;
      }

      else if (curr->item.get_name() == targetName)
      {
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        size--;
        break;
      }

      else
      {
        prev = curr;
        curr = curr->next;
      }
    }
  }
}

void Inventory::PrintItems()
{
  invItemPtr curr = head;
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
