/*
  Owen Monsma
  darkfire613@icloud.com
  NPC.h
  October 24, 2014

  Basic template for all creatures in the game
 */


#ifndef NPC_H
#define NPC_H

#include "Inventory.h"

class NPC
{
private:
// The core stats
  int str_;
  int dex_;
  int con_;
  int intl_;
  int wis_;
  int cha_;

  int health;

  Inventory inv;

  bool friendly;

public:
//constructor and destructor
  NPC();
  ~NPC();

// accessors
  int str();
  int dex();
  int con();
  int intl();
  int wis();
  int cha();
// mutators
  void set_str(int str);
  void set_dex(int dex);
  void set_con(int con);
  void set_intl(int intl);
  void set_wis(int wis);
  void set_cha(int cha);
};

#endif
