// CODTECH IoT Internship - Task 1: Smart Plant Waterer (Software Simulation)
const int SOIL_SENSOR_PIN = 34; // Simulation via Potentiometer
const int PUMP_INDICATOR = 23;  // Simulation via LED
const int THRESHOLD = 2500;    // Dry soil limit

void setup() {
  Serial.begin(115200);
  pinMode(PUMP_INDICATOR, OUTPUT);
  Serial.println("--- System Online: Monitoring Moisture Levels ---");
}

void loop() {
  int moisture = analogRead(SOIL_SENSOR_PIN);
  Serial.print("Current Moisture Level: ");
  Serial.println(moisture);

  if (moisture > THRESHOLD) {
    Serial.println("STATUS: [DRY] - Activating Water Pump...");
    digitalWrite(PUMP_INDICATOR, HIGH);
  } else {
    Serial.println("STATUS: [WET] - Pump Deactivated.");
    digitalWrite(PUMP_INDICATOR, LOW);
  }
  delay(1000);
}
