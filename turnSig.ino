int relay_1 = 1;
int sec = 1000;
const int buttonPin = 2; 
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(relay_1, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {

    if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(relay_1, HIGH);
    Serial.println("relays ON");
    delay(sec * 5);
    digitalWrite(relay_1, LOW);
    Serial.println("All relays off");
  } else {
    // turn LED off:
    digitalWrite(relay_1, LOW);
  }
}
