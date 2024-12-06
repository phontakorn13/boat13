#include <Arduino.h>

int green1=23;
int yellow1=19;
int red1=18;

int green2=17;
int yellow2=16;
int red2=4;

int Button=15;
int buttonState = 0;
bool blinkingMode = false;

void setup() 
{
 pinMode(23,OUTPUT);
 pinMode(19,OUTPUT);
 pinMode(18,OUTPUT);

 pinMode(17,OUTPUT);
 pinMode(16,OUTPUT);
 pinMode(4,OUTPUT);

 pinMode(15,INPUT_PULLUP);
}

void loop() 
{
  buttonState = digitalRead(Button);

 if (buttonState == HIGH) {
    blinkingMode = !blinkingMode;  // สลับสถานะโหมด
    delay(500); // หน่วงเวลาหลังการกดปุ่ม เพื่อป้องกันการกดซ้ำ
    if (blinkingMode) {
      Serial.println("Blinking mode activated");
    } else {
      Serial.println("Blinking mode deactivated");
    }
  }

if (blinkingMode) {
    // กระพริบไฟแดงและไฟเขียวทั้งสองแยก
    digitalWrite(23,HIGH);
    digitalWrite(19,HIGH);
    digitalWrite(18,HIGH);
    digitalWrite(17,HIGH);
    digitalWrite(16,HIGH);
    digitalWrite(4,HIGH);
    delay(500); // หน่วงเวลา 500 มิลลิวินาที (ไฟกระพริบ)
    digitalWrite(23,LOW);
    digitalWrite(19,LOW);
    digitalWrite(18,LOW);
    digitalWrite(17,LOW);
    digitalWrite(16,LOW);
    digitalWrite(4,LOW);
    delay(500); // หน่วงเวลา 500 มิลลิวินาที (ไฟกระพริบ)
  }

else{
  digitalWrite(23,HIGH);
  digitalWrite(19,LOW);
  digitalWrite(18,LOW);
  digitalWrite(17,LOW);
  digitalWrite(16,LOW);
  digitalWrite(4,HIGH);
  delay(5000);

  digitalWrite(23,LOW);
  digitalWrite(19,HIGH);
  digitalWrite(18,LOW);
  digitalWrite(17,LOW);
  digitalWrite(16,LOW);
  digitalWrite(4,HIGH);
  delay(2000);

  digitalWrite(23,LOW);
  digitalWrite(19,LOW);
  digitalWrite(18,HIGH);
  digitalWrite(17,HIGH);
  digitalWrite(16,LOW);
  digitalWrite(4,LOW);
  delay(5000);

  digitalWrite(23,LOW);
  digitalWrite(19,LOW);
  digitalWrite(18,HIGH);
  digitalWrite(17,LOW);
  digitalWrite(16,HIGH);
  digitalWrite(4,LOW);
  delay(2000);
}

}

