#include <iostream>
#include "Item.h"
#include "Inventory.h"

int main()
{
  Item test1;
  test1.set_name("item 1");
  test1.set_description("description 1");

  Item test2;
  test2.set_name("item 2");
  test2.set_description("description 2");

  Item test3;
  test3.set_name("item 3");
  test3.set_description("description 3");

  Inventory testInv;

  testInv.AddItem(test1);
  testInv.AddItem(test2);
  testInv.AddItem(test3);

  testInv.PrintItems();

  testInv.DelItem("item 2");

  testInv.PrintItems();
  
  return 0;
}
