Levels readme
=============

The game is broken into sections called levels. Each level is united around a single theme. A level is divided into smaller segments called rooms. The player exists in only one room at a given time. A room can also include NPCs, items, and doors. Typically a room will focus on a single encounter. The encounter can take any form—fighting an enemy, talking with an NPC companion, purchasing items from a shopkeeper—but usually a room will contain one and only one encounter. As encounter is a kind of nebulous term, it is left up to the game designer to ensure there is not too much going on in a room.

This document gives the basics for how to create your own rooms and levels. Each level is a folder, named whatever the internal name of the level is (e.g. "dungeon1"). Within a level folder are room files, with a .rtr extension (for Rogue Terminal Room). A room file contains all of the information for a given room, structured as follows:

```
room_name

NPCS:
npc1
npc2
npc3

ITEMS:
item1
item2
item3

EXITS:
exit1
exit2
exit3
```
