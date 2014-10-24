/*
  Owen Monsma
  darkfire613@icloud.com
  main.cpp
  October 24, 2014

  A simple command-line roguelike text-based dungeon-crawling adventure
 */

#include <iostream>
#include "NPC.h"

int main()
{
  NPC testDude;
  testDude.set_str(8);
  testDude.set_dex(9);
  testDude.set_con(10);
  testDude.set_intl(11);
  testDude.set_wis(12);
  testDude.set_cha(13);

  std::cout << "str: " << testDude.str() << std::endl;
  std::cout << "dex: " << testDude.dex() << std::endl;
  std::cout << "con: " << testDude.con() << std::endl;
  std::cout << "int: " << testDude.intl() << std::endl;
  std::cout << "wis: " << testDude.wis() << std::endl;
  std::cout << "cha: " << testDude.cha() << std::endl;

  return 0;
}
