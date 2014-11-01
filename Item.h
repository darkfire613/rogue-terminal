/*
  Owen Monsma
  darkfire613@icloud.com
  Item.h
  October 24, 2014

  Generic object class
 */

 #ifndef ITEM_H
 #define ITEM_H

 class Item
 {
 private:
  char* name;
  char* description;
 public:
  Item();
  ~Item();

  void set_name (char* nameIn);
  void set_description (char* descriptionIn);

  char* get_name();
  char* get_description();

  void printItem();

 };

 #endif
