 Levels readme
=============

The game is broken into sections called levels. Each level is united around a single theme. A level is divided into smaller segments called rooms. The player exists in only one room at a given time. A room can also include NPCs, items, and doors. Typically a room will focus on a single encounter. The encounter can take any form—fighting an enemy, talking with an NPC companion, purchasing items from a shopkeeper—but usually a room will contain one and only one encounter. As encounter is a kind of nebulous term, it is left up to the game designer to ensure there is not too much going on in a room.

This document gives the basics for how to create your own rooms and levels. Each level is a folder, named whatever the internal name of the level is (e.g. "dungeon1"). Within a level folder are room files, with a .rtr extension (for Rogue Terminal Room). A room file contains all of the information for a given room, structured as follows:

```
room_name

DESC:
A block of text describing the room. Can be as long as desired, and should accurately reflect the contents listed below. Cannot include newlines.

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
On loading, the loader will build the room, looking in the NPCs folder for the named NPCs (in this case, it would look for npc1.rtn, npc2.rtn, and npc3.rtn), the Items folder for named items (item1.rti, item2.rti, item3.rti), and its own Level folder for the named exits. If any content cannot be found in these folders, the loader will return a load error, and substitute in a default NPC or Item, or a gateway to Hell for an unfound exit. This can lead to unintended consequences within the game. Watch for this.

Since a big design goal for the engine is the player's freedom to tackle encounters however they want, no encounter type is specified for the room. Instead, the player's available options are determined by the player's stats, and the stats and friendliness of any NPCs in the room.

In future iterations,
