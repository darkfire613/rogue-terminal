/*
  Owen Monsma
  darkfire613@icloud.com
  NPC.cpp
  October 24, 2014

  Basic template for all creatures in the game
 */

 #include "NPC.h"
 #include <iostream>

//constructor and destructor
NPC::NPC()
{
  setStr(10);
  setDex(10);
  setCon(10);
  setIntl(10);
  setWis(10);
  setCha(10);
}

NPC::~NPC()
{

}

// accessors
int NPC::str()
{
  return str_;
}
int NPC::dex()
{
  return dex_;
}
int NPC::con()
{
  return con_;
}
int NPC::intl()
{
  return intl_;
}
int NPC::wis()
{
  return wis_;
}
int NPC::cha()
{
  return cha_;
}

// mutators
void NPC::set_str(int str)
{
  str_ = str;
}
void NPC::set_dex(int dex)
{
  dex_ = dex;
}
void NPC::set_con(int con)
{
  con_ = con;
}
void NPC::set_intl(int intl)
{
  intl_ = intl;
}
void NPC::set_wis(int wis)
{
  wis_ = wis;
}
void NPC::set_cha(int cha)
{
  cha_ = cha;
}
