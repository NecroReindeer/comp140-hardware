# COMP140 Hardware Hacking

## The controller
### How to use
The version of Hotrod the Beetle that works with the controller is found [here](https://github.com/NecroReindeer/comp130-mobile-game-app/tree/hardware-hacking-version).

Use the finger indentation to rotate the disc to change Hotrod's direction. The red arrow corresponds to 'up'/'north'. The LEDs on the controller show you where walls are relative to Hotrod's current position.



## Design and Market Research

### Design
I am designing a controller for my Kivy game, Hotrod the Beetle. The player will interact with the game by rotating a part of the controller that looks like Hotrod. This way, the direction that Hotrod turns in the game matches the direction that the player makes him face in real life.
Perhaps a finger sized 'indentation' can be included on the top of the piece that the player must rotate, to make it easier to use without moving the entire hand.
There could also be LEDs that react to the game, such as LEDs representing where walls are, or LEDs to signify that you are powered up.

#### Reasoning behind design
Since the only controls that Hotrod the Beetle uses are left/right/up/down, there is a limited number of options when it comes to designing a controller that is creative yet still intuitive and not frustrating to use.

I tried to think of ways to give the player this control that are more creative than simple buttons, yet still possible to develop given the scope of the assignment and the resources available. A controller that you turn or turn a part of was a possibility. On its own, this is not particularly interesting, so I began to think of other ways to engage the player or increase immersion.

Making the component that the player rotates represent Hotrod could help make the controller more engaging. This way, changes in the physical controller are represented by the character on screen.
It could also include LEDs to reflect states in the game. For example, LEDs situated on the compenent representing Hotrod could start flashing when he is powered up. Perhaps LEDs could also be used signify the walls, showing the player which directions Hotrod is moving in or allowed to move in.


####Diagrams
##### Original design of mechanism
A rough diagram of a top-down x-ray view of how the basic concept would work. The player rotates Hotrod, on the top. Underneath, out of view from the player, some kind of conductive bar makes contact with bits that complete the circuit for the relative key press. 
![topdown diagram](https://github.com/NecroReindeer/comp140-hardware/blob/master/pictures/design/topdown-xray.png)

##### New design of mechanism
After attempting to construct the controller and being unable to get it to work effectively, I have altered how it is constructed. Now, there are wires for each direction located underneath the disc with Hotrod on, and a wire on the bottom of the disc with Hotrod on. The direction is activated when the two wires come in contact. The other problem with the original idea was that the place that the buttons actually activated was very small, so you had to turn the disc to exactly the right angle. This way, there is no need to be precise.

### Market Research
Since my chosen game only uses the four directions, researching modern popular controller designs for multi-buttoned games is not particularly relevant to my project.  
So I decided to focus my market research on four relevant areas: controllers for similar games, controllers that represent in-game objects, controllers that react to in-game events, and controllers that are used by turning.

###Controllers for similar games
My Kivy game, Hotrod the Beetle, is based on Pac-Man, one of the most successful arcade games. The player controls Pac-Man in the original Pac-Man arcade using a joystick. The use of a joystick provides the player great control, as they can move it in any of the four directions from its central position without taking their hand from the controls. One of the reasons that Pac-Man was so successful is probably because of the combination of its simple gameplay and simple controls that anybody can pick up.

#####Considerations for my design
The design of a controller can have an impact on the difficulty of a game. Pac-Man would be a lot more difficult if the method of control was more inefficient. For example, if the player had to physically turn a part of the controller in order to change directions, reversing direction would be more difficult as the player must turn further than if they were rotating 90 degrees. I will incorporate this into the design of my controller with the intent of adding additional challenge and dynamics through 'punishing' the player for 'chickening out' and turning back. I have to ensure that the design ensures that the player still feels in control, however, instead of causing frustration.

![Original Pac-Man controls](http://www.rotheblog.com/images/arcade/project/pacman/pacman_mame05.jpg)

###Controllers that represent in-game objects/characters
There are not many controllers on the market that are designed to represent in-game objects or characters. The most notable ones are designed for music games - including the Guitar Hero guitar, SingStar microphone and Rock Band instruments. These games increase immersion by using a controller that represents in-game elements and requires the player to perform similar actions to how these objects would be used. Likewise, other games that use unconventional controllers tend to be designed specifically with that controller in mind. There are many games like this on the Wii that use motion controls.

I was unable to find any examples of controllers that represent an in-game character. This is likely because under normal circumstances it is not commercially viable to design a controller for one specific game. On the other hand, the lack of such controllers could indicate a gap in the market. For this assignment, we are required to design a controller for one specific game, making this a more viable option.

#####Considerations for my design
I intend to make the component that the player must rotate visually represent Hotrod. This will result in the ingame movements reflecting the representation of him in real life, which could perhaps have the effect of increasing immersion and making the player feel more in control. 

![Guitar Hero Controllers](https://upload.wikimedia.org/wikipedia/commons/8/80/Guitar_Hero_series_controllers.jpg)
![Wii attachments](http://071bc3d04e2671665c74-5a267f839fbe60d0845a37698418bb02.r26.cf5.rackcdn.com/wp-content/uploads/2007/01/wii-sports-attachments.jpg)

###Controllers that react to in-game events
There are also many successful controllers on the market that react to in-game events. The most common of which is haptic feedback, which is present in the majority of modern controllers. There are other successful controllers, such as the Dualshock 4, that respond visually to in-game events. The Dualshock 4 has a light bar that can be programmed to change colour. For example, in Grand Theft Auto 5, it flashes red and blue when you are being chased by the police. The positioning of the light bar (on the back of the PS4 controller) is not very effective, however, as the player is unable to see it changing colour easily unless the room is dark.  

#####Considerations for my design
If I opt to use an Arduino instead of the Makey-Makey, I intend to incorporate LEDs in my design to further give the player visual feedback. Designing a controller so that it reacts to the game is another way of attempting to increase immersion and engagement as well as giving the player additional feedback on their actions and in-game events. Making the LEDs flash when the player is powered up is easy to pick up on in peripheral vision, and gives further signals than simple the graphics changing on-screen. 

![PS4 Lightbar](http://images.pushsquare.com/news/2014/05/does_dimming_the_ps4_controllers_light_bar_increase_its_battery_life/large.jpg)

###Controllers that are used in a similar way
Many early controllers were used by rotating a component. For example, the popular paddle controller used with Pong. This type of controller was also used for many other popular games and consoles, such as the Atari 2600. This controller was not usually used for changing direction, but rather moving in a straight line on a particular axis. Tt still required the same hand movement from the player, however. Similarly, the driving controller for the popular Atari 2600, as well as modern racing wheels, are also used by twisting. These controllers were designed with the twisting motion dictating the direction of in-game travel. Racing wheel controllers, that are gripped with two hands, are still popular today with driving games. This indicates that rotating an object in order to dictate in-game travel direction is an instinctive and natural movement.

#####Considerations for my design
A rotating or twisting motion appears to be acceptable for intuitive control of movement direction. However, since Hotrod can only move in four directions, it is necessary to design the controller to that it provides some sort of tactile feedback when it is facing these four directions. It is also important the the range of angles that it responds to corresponds to what the player would expect.

![Paddle Controller](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b3/Atari_Paddle.JPG/800px-Atari_Paddle.JPG)
