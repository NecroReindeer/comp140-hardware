Below is a snippet of the additional code I wrote to make the Hotrod the Beetle game send information about walls to the Arduino using [pyserial](https://pypi.python.org/pypi/pyserial)

```
    def light_leds(self):
        blocked_directions = self.__get_blocked_directions()
        string = ""

        for dir in direction.Direction:
            if dir in blocked_directions:
                # Number I used in Arduino code to signify LED on
                string += '1'
            else:
                # Number I used in arduino code to signify LED off
                string += '0'
        # Number I used in Arduino code to terminate string
        string += '9'

        self.game.serial.write(string)

    def __get_blocked_directions(self):
        # List in this order to match up with Arduino code (which also matches enemy move priority for consistency)
        directions = [direction.Direction.right,
                      direction.Direction.down,
                      direction.Direction.left,
                      direction.Direction.up]
        blocked_directions = [dir for dir in directions if not self.__direction_is_allowed(dir)]
        return blocked_directions
```        
