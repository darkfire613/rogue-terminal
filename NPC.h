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
  std::string name_;

// The core stats
  int str_;
  int dex_;
  int con_;
  int intl_;
  int wis_;
  int cha_;

  int health_;

  Inventory inv;

  bool friendly_;

public:
//constructor and destructor
  NPC();
  ~NPC();

// accessors
  std::string name();

  int str();
  int dex();
  int con();
  int intl();
  int wis();
  int cha();

  int health();

  bool friendly();

// mutators
  void set_name(std::string s);

  void set_str(int str);
  void set_dex(int dex);
  void set_con(int con);
  void set_intl(int intl);
  void set_wis(int wis);
  void set_cha(int cha);

  void set_health(int health);

  void addToInv(Item item);
  void removeFromInv(std::string item);

  void set_friendly(bool b);
};

#endif
