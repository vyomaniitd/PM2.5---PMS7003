
#include "PMS.h"

#include <SoftwareSerial.h>
SoftwareSerial pmsSerial(2, 3);

PMS pms(pmsSerial);
PMS::DATA data;

void setup()
{
  Serial.begin(9600);  
  pmsSerial.begin(9600);  
}

void loop()
{
if (pms.read(data))
{
Serial.print("PM 1.0 (ug/m3): ");
Serial.println(data.PM_AE_UG_1_0);

Serial.print("PM 2.5 (ug/m3): ");
Serial.println(data.PM_AE_UG_2_5);

Serial.print("PM 10.0 (ug/m3): ");
Serial.println(data.PM_AE_UG_10_0);

Serial.println();

}
}
