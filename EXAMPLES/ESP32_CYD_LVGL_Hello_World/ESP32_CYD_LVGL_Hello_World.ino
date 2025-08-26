#define LED_R 4
#define LED_G 16
#define LED_B 17

void setup() {
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);

  // Start with all off
  digitalWrite(LED_R, HIGH);
  digitalWrite(LED_G, HIGH);
  digitalWrite(LED_B, HIGH);
  delay(3000);
}

void loop() {
  // Blink Red
  blinkColor(LED_R);
  // Blink Green
  blinkColor(LED_G);
  // Blink Blue
  blinkColor(LED_B);
}

void blinkColor(int pin) {
  digitalWrite(pin, LOW);  // Turn LED ON
  delay(500);
  digitalWrite(pin, HIGH);   // Turn LED OFF
  delay(500);
}
