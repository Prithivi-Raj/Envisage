# Envisage
In this project we have tried to display some patterns various letters. First the
project starts by choosing the word to display. The alphabets are declared
initially in binary representations. The input from IR pin controls the order of
alphabets to display. The Arduino Nano controls the whole LED strip
according to the code setup. The Arduino is powered using a 9V battery. We 
have used DC motor to rotate the LED strips. So when the strips are rotated
faster, in a specific way of lighting ON and OFF of LEDs, a 2D surface is created
due to “Persistence of Vision”. In this way, we get our desired display.
Electrical Part: -
Arduino:
We have used Arduino Nano due to size restrictions and stability issues.
It has 22 I/O Pins in total, out of which 14 are digital and 8 are analog.
IR Sensor:
An IR sensor is used to calibrate the code with the rotation of the strip.
This accounts for the drag which is faced by the strip during rotation, the
weight of the strip. The IR sensor has 3 pins, OUT, GND and Vcc.
LEDs:
We have used 2 LED strips each containing 30 LEDs.
Battery:
We have used a 9V battery to power Arduino nano. It is connected
between Vin and GND.
DC Motor:
We used a DC motor, which can produce 0-2400 RPM.
Mechanical Part: -
It is a four-finned module on which the LED strip is fixed. The IR sensor is
attached to one of the fins. The DC motor is fixed on the center piece. 

Explanation of code: -
The initial declarations are the binary representation of all the alphabets on
the POV display. The next few declarations are initializing the Arduino pins.
The IR pin is also declared 2. Next is the setup function. In this IR pin is
declared as an input. Next is the print Letter function. This takes the binary
code of alphabets and assigns it to the 8 LEDs. Next, the ‘loop function’ gives
the order of display of alphabets. The input from the IR pin controls the order
of alphabets to display.
Issues faced: -
1. Setting the delay time was totally trial and error method.
2. The RPM couldn’t be maintained as expected.
3. The 9V battery used wasn’t a reliable option in long term applications.
4. The RPM was low because of the heavy body weight and it was not
aerodynamic.
5. This model was made out of wood. So moment of Inertia was high as
the fan rotated, thus making it difficult to get a proper image display.
