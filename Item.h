/*
  Owen Monsma
  darkfire613@icloud.com
  Item.h
  October 24, 2014

  Generic object class
 */

 #ifndef ITEM_H
 #define ITEM_H

 #include <string>

 class Item
 {
 private:
  std::string name;
  std::string description;
 public:
  Item();
  ~Item();

  void set_name (std::string nameIn);
  void set_description (std::string descriptionIn);

  std::string get_name();
  std::string get_description();

  void printItem();

 };

 #endif
