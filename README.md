# IKA

##########
Bomberman projet
##########

This first submission contains the UE4 project and core mechanic gameplay, actually everything is made with C++

here's the differents classes created and used for the game

class BombermanCharacter : Containt all the information related to the player (input, inventory etc)

class BombermanBombsManager : It's a factory that manage the bombs spawned during a game, it's a Singleton

class BombermanBaseBomb : Contain the basic behaviour related to the bomb (OnUse, OnExplodeStart etc)

class BombermanBaseWall : It's the base class for walls and contain an enum for each type of wall (Destructable and normal)

class BombermanBasePickupItem : Suppose to contain the basic behaviour for upgrades (OnPickup etc) (Still empty)

class BombermanGameInstance : Instance related to the game, we initialize our Manager in it

this first part took me about 10 hours to complete

What is done 

- Core layer of the game
- Bomb management to avoid spawning and destroying allowing us to save performance and avoind GC problems
- Players have their own inventory and can place bombs depending on the actual capacity 
- Bomb behaviour, they have timers when spawned, and when they explode their blast is controlled by duration
- Bomb explode in a linear way 2 axis (x,-x, y, -y) and also can kill character and destroy walls 
- Playable with two player on same screen with different keys on the keyboard

Here's a quick view about the tasks i'm doing 

https://trello.com/b/lDKUka7T/ika-test

####################

Second submission

class BombermanViewportClass : created to handle two input on the same keyboard

class BombermanBaseWall : updating behaviour to spawn bomb upon destruction

class BombermanBaseBomb : updating behaviour for the blast and destroying elements

class BombermanPlayerCharacter : a player character class to avoid modiying the player character in the engine

What is done

-Adding the blast bomb
-Add Upgrading blast bomb
-Add Upgrading player speed
-Add upgrading bomb number
-Adding random spawn 1/3 for pickable items when wall destroyed
-Different players skin
-Updating character behaviour when spawning bomb and picking items
-Fixing static camera no more disapearing when player dies
-Fixing the raycast of the bomb by using the LineTraceMultiByObjectType

this second part took me about 6 hours to complete

 