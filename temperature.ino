int analogvalue = 0;
double tempC = 0;

void setup() {
  pinMode(A0, INPUT);
  Spark.variable("temperature", &tempC, DOUBLE);
  Spark.variable("analogvalue", &analogvalue, INT);
}

void loop() {
  // Read the analog value of the sensor (LM35)
  analogvalue = analogRead(A0); // 10mV per degree
  //Convert the reading into degree celcius
  tempC = (analogvalue * 3.3 / 1024) * 100;
  Delay(200);
}