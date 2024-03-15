void setup() {
  // Initialize serial communication at 115200 baud rate
  Serial.begin(115200);
}

void loop() {
  // Print the message "Successful OTA Update" to the serial monitor
  Serial.println("Successful OTA Update");
  
  // Wait for one second before repeating the loop
  delay(1000);
}
