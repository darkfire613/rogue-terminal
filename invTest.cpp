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

  test1.printItem();
  test2.printItem();
  test3.printItem();

  Inventory testInv;

  testInv.AddItem(test1);
  testInv.AddItem(test2);
  testInv.AddItem(test3);

  testInv.PrintItems();

  std::cout << "deleting item 2" << std::endl;

  testInv.DelItem("item 2");

  std::cout << "printing again" << std::endl;

  testInv.PrintItems();

  return 0;
}
