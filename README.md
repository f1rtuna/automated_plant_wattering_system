# automated_plant_wattering_system
A simple embedded program for arduino that utilizes a soil moisture sensor and a water pump to determine when to pump water to your plants.

Ive defined my pins with constants with the relay pin (component connecting pump to the arduino) set to 5 and the moisture sensor pin set to A0. 
Feel free to change these values if you choose to utilze differet pins.

There is also a constant for the moisture value which the user can adjust depending on how much water the user wishes to be supplied. Feel free to 
experiment and find a suitable threshold value I've found that 259 fit well for me personally.

Water is set to be pumped at 1 second increments as there is ~1sec delay from reading the sensor values of the soil moisture sensor and of course to avoid overflodding.
