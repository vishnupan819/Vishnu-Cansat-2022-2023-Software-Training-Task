TMU Cansat 2022-2023 Software Training Task: 
Vishnu Panganamamula

Note: The programming, debugging and simulation of the circuit was done on TinkerCAD.

**Programming:**
The objective of this task is to write a program where an RGB-LED and a servo motor change based on the temperature sensed by the temperature sensor, which was the TMP36. 
The range of the temperature sensor and the range of the angles the servo motor can reach were supposed to correspond to one another. The minimum temperature corresponds to the minimum angle of the servo motor and the same applies for the maximum temperature and the maximum angle respectively. 

The way the program works is that the temperature sensor gives a reading of the temperature as an input. The input is then converted to a voltage value and then the voltage value is converted to a temperature value in degrees. The TMP36 temperature sensor is correspondent with the 3-pin servo motor using the map() function in Arduino.

Once the temperature and servo motor angles are mapped together, the next step was to write the conditional statements for each temperature range and its respective colour. The colour was set based on the RGB values of each colour. A method named setColour() was created to determine the colours of the LED for each temperature range. For example, if the temperature was 70 degrees celsius, then the colour would be purple and its RGB colour code is (140,85,180) in the order of red, green and blue respectively. Each condition for temperature range was created in that fashion.

**Testing and Debugging:**
When testing the circuit, the simulation showed a flashing yellow LED instead of any other colours. I realized that other colours can only be seen if the room temperature changes and the temperature sensor would pick up on that change. However, since the circuit was designed and tested as a TinkerCAD simulation, the default temperature setting would be room temperature (which is why the LED was yellow) and no changes could be made to the room temperature in order to change the colour of the LED.
