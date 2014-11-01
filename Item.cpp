/*
  Owen Monsma
  darkfire613@me.com
  Item.cpp
  October 24, 2014

  Item implementation
 */

#include "Item.h"
#include <iostream>

Item::Item()
{
  set_name("purple dildo");
  set_description("30 inches long, belongs to your mom");
}

Item::~Item()
{

}

void Item::set_name (char* nameIn)
{
  name = nameIn;
}

void Item::set_description (char* descriptionIn)
{
  description = descriptionIn;
}

char* Item::get_name()
{
  return name;
}

char* Item::get_description()
{
  return description;
}

void Item::printItem()
{
  std::cout << "NAME: " << name << std::endl;
  std::cout << "DESC: " << description << std::endl;
}
