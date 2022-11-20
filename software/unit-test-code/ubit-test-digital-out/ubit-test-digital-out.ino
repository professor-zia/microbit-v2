// see variant.cpp for arduino pin numbers for microbit v2
const int COL =   3; // col 3 control
const int ROW =  23; // row 3 control
const int LED = ROW; // row 3 led

void setup() {
  Serial.begin(9600);

  Serial.println("microbit is ready!");

  // ground LED cathode
  pinMode(COL, OUTPUT);
  digitalWrite(COL, LOW);

  pinMode(ROW, OUTPUT);
}

void loop() {
  Serial.println("blink!");

  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
  delay(100);
  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
  delay(700);
}