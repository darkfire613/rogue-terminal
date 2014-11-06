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
  set_name("name");
  set_description("description");
}

Item::~Item()
{

}

void Item::set_name (std::string nameIn)
{
  name = nameIn;
}

void Item::set_description (std::string descriptionIn)
{
  description = descriptionIn;
}

std::string Item::get_name()
{
  return name;
}

std::string Item::get_description()
{
  return description;
}

void Item::printItem()
{
  std::cout << "NAME: " << name << std::endl;
  std::cout << "DESC: " << description << std::endl;
}
