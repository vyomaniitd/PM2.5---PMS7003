# PM2.5---PMS7003
Measure the Particulate matter level with a PMS7003 sensor and an Arduino

The PMS7003 is a particle matter counter capable of detecting particulates in the range of 0.3 to 10 microns.

This device uses a serial connection to send measurements to a connected device roughly once a second. Concentration measurements are provided for PM1.0 (0.3-1.0um), PM2.5 (1.0-2.5um), and PM10 (2.5-10.0um).

**Wiring:**

![PMS7003](https://user-images.githubusercontent.com/96729158/147498673-238b31cd-9713-4684-9d6d-33fd92b32af4.png)

All of the data pins require a 3.3v TTL level, but power must be supplied to VCC at 5v, which is a requirement for proper operation of the built-in fan.
