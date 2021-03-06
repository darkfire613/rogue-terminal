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
  name = "Name";
  set_str(10);
  set_dex(10);
  set_con(10);
  set_intl(10);
  set_wis(10);
  set_cha(10);

  set_friendly(true);
}

NPC::~NPC()
{

}

// accessors
std::string NPC::name()
{
  return name;
}

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
void NPC::set_name(std::string s)
{
  name_ = s;
}

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

void NPC::set_friendly(bool b)
{
  friendly = b;
}
