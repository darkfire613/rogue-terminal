Rogue Terminal
==============

A simple command-line roguelike text-based dungeon-crawling adventure!

Completed
=========

* Item
* Inventory

Todo
====

* NPC
* Player
* Room
* Random

Room class
==========

The Room class needs to store, and have methods for accessing, the following information:

* NPCs
* Items
* Exits

The room does not handle any of the randomization of loading. Those are handled by a Utility function that takes in all the data and runs the required constructors. Pointers to these constructed objects are then handed off to the room.

The room stores 
