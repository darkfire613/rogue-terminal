/*
  Owen Monsma
  darkfire613@me.com
  Item.cpp
  October 24, 2014

  Item implementation
 */

#include "Item.h"

Item::Item()
{
  set_name("purple dildo");
  set_description("30 inches long, belongs to your mom");
}

Item::~Item()
{

}

void Item::set_name (char* name)
{
  name_ = name;
}

void Item::set_description (char* description)
{
  description_ = description;
}
