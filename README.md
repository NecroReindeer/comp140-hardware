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
My Kivy game, Hotrod the Beetle, is based on Pac-Man, one of the most successful arcade games. The player controls Pac-Man in the original Pac-Man arcade using a joystick. The use of a joystick provides the player great control, as they can move it in any of the four directions from its central position without taking their hand from the controls. One of the reasons that Pac-Man was so successful is probably because of its simple gameplay and simple controls.

#####Considerations for my design
The design of a controller can have an impact on the difficulty of a game. Pac-Man would be a lot more difficult if the method of control was more inefficient. For example, if the player had to physically turn a part of the controller in order to change directions, reversing direction would be more difficult as the player must turn further than if they were rotating 90 degrees. I will incorporate this into the design of my controller with the intent of adding additional challenge and dynamics through 'punishing' the player for 'chickening out' and turning back. I have to ensure that the design ensures that the player still feels in control, however, instead of causing frustration.

###Controllers that represent in-game objects/characters
There are not many controllers on the market that are designed to represent in-game objects or characters. The most notable ones are designed for music games - including the Guitar Hero guitar, SingStar microphone and Rock Band instruments. These games increase immersion by using a controller that represents in-game elements and requires the player to perform similar actions to how these objects would be used.

I was unable to find any examples of controllers that represent an in-game character. This is likely because under normal circumstances it is not commercially viable to design a controller for one specific game. On the other hand, the lack of such controllers could indicate a gap in the market. For this assignment, we are required to design a controller for one specific game, making this a viable option.

#####Considerations for my design
I intend to make the component that the player must rotate visually represent Hotrod. This will result in the ingame movements reflecting the representation of him in real life, which could perhaps have the effect of increasing immersion and making the player feel more in control. 


###Controllers that react to in-game events

###Controllers that are used in a similar way
