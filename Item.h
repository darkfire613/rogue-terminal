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
  char* name_;
  char* description_;
 public:
  Item();
  ~Item();

  void set_name (char* name);
  void set_description (char* description);

  char* name();
  char* description();

 };

 #endif
