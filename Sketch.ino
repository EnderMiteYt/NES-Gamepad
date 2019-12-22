// UP 2
// LEFT 3
// DOWN 4
// RIGHT 5
// A 6
// B 7
#define UP 2
#define LEFT 3
#define DOWN 4
#define RIGHT 5
#define A 6
#define B 7
void setup() {
  Serial.begin(9600);
  Serial.println("        Welcome to EController Tester      ");
}
void loop() {
  if (digitalRead(UP) == true) {
    Serial.println("UP");
    delay(50);
  }
  if (digitalRead(LEFT) == true) {
    Serial.println("LEFT");
    delay(50);
  }
  if (digitalRead(DOWN) == true) {
    Serial.println("DOWN");
    delay(50);
  }
  if (digitalRead(RIGHT) == true) {
    Serial.println("RIGHT");
    delay(50);
  }
  if (digitalRead(A) == true) {
    Serial.println("A");
    delay(50);
  }
  if (digitalRead(B) == true) {
    Serial.println("B");
    delay(50);
  }
}
