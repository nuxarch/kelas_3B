#include <Arduino.h>

#define PIN_SENSOR_VBATERAI  A0
#define R1 4500.0
#define R2 500.0



uint16_t data_adc_10bit=0;
float tegangan_baterai=0;
uint16_t datake=1;

void setup() {
  Serial.begin(115200);
  Serial.println("Program membaca tegangan baterai");
}

void loop() {
  // baca sensor A0(vbat), simpan pada var data_adc_10bit
  data_adc_10bit = analogRead(PIN_SENSOR_VBATERAI);

  // hitung tegangan baterai
  tegangan_baterai = (data_adc_10bit * 5.0 / 1023.0) * ((R1 + R2) / R2);

  // Serial.println(String(datake++) +". data_adc_10bit = ["+String(data_adc_10bit)+"]");

  // monitoring via serial pio
  // Serial.println(String(datake++) +". tegangan_baterai = ["+String(tegangan_baterai,2)+"] Volt");

  // monitoring via serial ploter
  Serial.println(">teg:"+String(tegangan_baterai,2));

  delay(50);
}
