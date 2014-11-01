#include <iostream>
#include "Item.h"

int main()
{
  Item test;
  test.set_name("test item");
  test.set_description("this is the description");

  test.printItem();
  return 0;
}
