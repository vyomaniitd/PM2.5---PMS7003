# PM2.5 PMS7003

The PMS7003 is a particle matter counter capable of detecting particulates in the range of 0.3 to 10 microns. This device uses a serial connection to send measurements to a connected device roughly once a second. Concentration measurements are provided for PM1.0 (0.3-1.0um), PM2.5 (1.0-2.5um), and PM10 (2.5-10.0um).

**Wiring:**

![PMS7003](https://user-images.githubusercontent.com/96729158/147498673-238b31cd-9713-4684-9d6d-33fd92b32af4.png)

All of the data pins require a 3.3v TTL level, but power must be supplied to VCC at 5v, which is a requirement for proper operation of the built-in fan. It's best advised to use Softwareserial for the serial communication when used with arduino.

Code:
Download and install the PMS library from the repository [PMS_Library-1.1.0].
Copy the code from PMS7003_Basic and upload it in your UNO, and that's it. You can see the data flowing in your serial monitor. 

![Screenshot 2021-12-28 001538](https://user-images.githubusercontent.com/96729158/147499103-8ad24c82-09d1-4e0d-9b58-d2c25bf03a13.png)
