# COMP140 Hardware Hacking
Base repository for the COMP140 Hardware Hacking assignment

## Design (incomplete)
I am designing a controller for my Kivy game, Hotrod the Beetle. The player will interact with the game by rotating a part of the controller that looks like Hotrod. This way, the direction that Hotrod turns in the game matches the direction that the player makes him face in real life.


### Reasoning behind design
Since the only controls that Hotrod the Beetle uses are left/right/up/down, there is a limited number of options when it comes to designing a controller that is creative yet still intuitive to use. It is important that the controller is designed with these affordances in mind.

I tried to think of ways to give the player this control that are more creative than simple buttons, yet still possible to develop given the scope of the assignment and the resources available. A controller that you turn or turn a part of was a possibility. On its own, this is not particularly interesting or engaging, so I began to think of other ways to engage the player or increase immersion.

I decided that making the component that the player rotates represent Hotrod would help make the controller more engaging. This way, changes in the physical controller are represented on screen.
I also decided that it could include LEDs to reflect states in the game. For example, LEDs situated on the compenent representing Hotrod could start flashing when he is powered up. Perhaps LEDs could also be used signify the walls, showing the player which directions Hotrod is moving in or allowed to move in.

TODO finish explanation and describing design process  
TODO add diagram



## Market Research (incomplete)

###Controllers for similar games
My Kivy game, Hotrod the Beetle, is based on Pac-Man, one of the most successful arcade games. The player controls Pac-Man in the original Pac-Man arcade using a joystick. The use of a joystick provides the player great control, as they can move it in any of the four directions from its central position without taking their hand from the controls. This can also lend insight into how the design of a controller can affect the difficulty of a game. One of the reasons that Pac-Man was so successful is probably because of its simple gameplay and simple controls.
For example, if the player had to physically turn a part of the controller in order to change directions, turning about face would be significantly more difficult, as the player must turn further than if they were rotating 90 degrees. I will incorporate this into the design of my controller with the intent of adding additional challenge and dynamics through 'punishing' the player for 'chickening out' and turning back. I have to ensure that the design ensures that the playerr still feels in control, however, instead of causing frustration.

###Controllers that represent in-game objects/characters

###Controllers that react to in-game events

###Controllers that are used in a similar way
