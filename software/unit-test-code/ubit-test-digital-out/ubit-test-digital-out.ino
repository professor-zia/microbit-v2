/*** header block ***
 * code file name: ubit-test-digital-out.ino
 * hardware board (UNO/Nano/microbit..etc): microbit v2.0
 * sensors and devices needed: builtin 5x5 LED matrix
 * code description: 
        this code tests digital output hardware functionality
        by blinking one (center) LED on the 5x5 LED matrix
        and displaying a message in serial monitor.
 * IDE version used to test code: Arduino IDE v2.0.2
 * programmer(s) name: Instructor
 * date when code is created/modified: 2022_1120
 * code version/revision: v1.0
 ***/

// compiler directives

// include libraries (none)

// pin name definitions
// see variant.cpp for arduino pin numbers for microbit v2
#define COL  3   // COL3 control pin
#define ROW 23   // ROW3 control pin
#define LED ROW  // ROW3 LED

// class/object declarations (none)

// global variables (none)

void setup() {
  // configure hardware peripherals
  // ground LED cathode
  pinMode(COL, OUTPUT);
  digitalWrite(COL, LOW);
  // set ROW pin as digital output pin
  pinMode(ROW, OUTPUT);

  // configure data communication
  Serial.begin(115200);
  // code that runs only once
  Serial.println("microbit is ready!");
}

void loop() {
  // data comm operation
  // print heart-beat message
  Serial.println("blink!");

  // data output operations
  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
  delay(100);
  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
  delay(700);
}