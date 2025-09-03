// Laser Security System Using LDR & Arduino (IoT Ready)

int ldrPin = A0;      // LDR connected to Analog pin A0
int buzzerPin = 8;    // Buzzer connected to digital pin 8
int ledPin = 9;       // LED connected to digital pin 9

int threshold = 500;  // Adjust this based on your LDR readings

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // For debugging LDR values
}

void loop() {
  int ldrValue = analogRead(ldrPin); // Read LDR value
  Serial.println(ldrValue);

  if (ldrValue < threshold) {
    // Laser beam is blocked
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
    Serial.println("⚠️ Intruder Detected!");
  } else {
    // Laser beam is fine
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
  }

  delay(200); // Small delay for stability
}
