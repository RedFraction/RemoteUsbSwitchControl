#include <Servo.h>

#define SERVO_PIN 3 // D3

Servo servo;

int SERVO_CENTER = 90;

void setup() {
    pinMode(LED_BUILTIN,OUTPUT);
    Serial.begin(9600);

    servo.attach(SERVO_PIN);
    servo.write(SERVO_CENTER);

    Serial.println("Start listening for commands:");
    
    blink(3);
}

int pos = 0;

void loop() {

    if (Serial.available()){
        long input = Serial.parseInt();

        switch (input) {
            case 1: {
                servo.write(130); // Center leveler
                Serial.println("Selected USB 1");
                blink(1);
                delay(200);
                servo.write(SERVO_CENTER);
                break;
            } 
            case 2: {
                servo.write(45); // Center leveler
                Serial.println("Selected USB 2");
                blink(2);
                delay(200);
                servo.write(SERVO_CENTER);
                break;
            } 
            case 3: {
                servo.write(SERVO_CENTER);
                Serial.println("Neutral position");
                blink(4);
                break;
            }
            default:
                Serial.println("Uknown command: " + input);
        }
    
    }
}

void blink(int times) {
    for (int i = 0; i < times; i++) {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(35);
        digitalWrite(LED_BUILTIN, LOW);
        delay(30);
    }
}

