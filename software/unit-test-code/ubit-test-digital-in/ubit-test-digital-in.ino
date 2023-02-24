/*** header block ***
 * code file name: ubit-test-digital-in.ino
 * hardware board (UNO/Nano/microbit..etc): microbit v2.0
 * sensors and devices needed: builtin button A
 * code description: 
        this code tests digital input hardware functionality
        by reading button A and displaying its status in 
        serial monitor.
 * IDE version used to test code: Arduino IDE v2.0.2
 * programmer(s) name: Instructor
 * date when code is created/modified: 2022_1124
 * code version/revision: v1.0
 ***/

// compiler directives

// include libraries (none)

// pin name definitions
// see variant.cpp for arduino pin numbers for microbit v2
#define DIGITAL_pin 5    // BTN_A pin with pullup resistor

// class/object declarations (none)

// global variables
int digital_in;

void setup() {
  // configure hardware peripherals
  pinMode(DIGITAL_pin, INPUT);

  // configure data communication
  Serial.begin(115200);

  // code that runs only once
  Serial.println("microbit is ready!");
  delay(1000);
}

void loop() {
  // data input & data storage operations
  digital_in = digitalRead(DIGITAL_pin);

  // data comm operation
  // print digital pin status
  Serial.println(digital_in);

  delay(500);
}