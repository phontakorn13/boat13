#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

#define I2C_SDA 21
#define I2C_SCL 22
int switchPin = 15;
int switchState = 0;
int led1 = 23;
int led2 = 19;
int led3 = 18;
int led4 = 5;
int led5 = 17;
int led6 = 16;
int led7 = 4;
int led8 = 0;

LiquidCrystal_I2C lcd(0x27, 20, 4); // set the LCD address to 0x27 for a 16 chars and 2 line display


void setup(){
	lcd.init(I2C_SDA, I2C_SCL); // initialize the lcd to use user defined I2C pins
	lcd.backlight();
	lcd.setCursor(0,0);
  lcd.print("Menu:");
  pinMode(15,INPUT_PULLUP);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  ledcSetup(0,5000,8);
}


void loop()
{ 
  static int menu = 0;  // ตัวแปรเก็บเมนูที่เลือก
  int switchState = digitalRead(switchPin);  // อ่านสถานะของสวิตช์
    if (switchState == HIGH) {
    delay(300);  // ให้เวลา Debouncing ให้สวิตช์มีเวลาหยุดสักนิด

    // เปลี่ยนเมนูที่เลือก
    menu = (menu % 6) + 1;  // สลับเมนูจาก 1-6
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Menu: ");
    lcd.print(menu);  // แสดงเมนูที่เลือก
    delay(500);  // ให้เวลาสำหรับแสดงผลบนจอ LCD
}
  if(menu == 1){
  digitalWrite(23,HIGH);
  digitalWrite(19,HIGH);
  digitalWrite(18,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(17,HIGH);
  digitalWrite(16,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(0,HIGH);
  }
  else if(menu == 2){
  digitalWrite(23,HIGH);
  digitalWrite(19,LOW);
  digitalWrite(18,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(17,HIGH);
  digitalWrite(16,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(0,LOW);
  delay(500);
  digitalWrite(23,LOW);
  digitalWrite(19,HIGH);
  digitalWrite(18,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(17,LOW);
  digitalWrite(16,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(0,HIGH);
  delay(500);
  }else if(menu == 3){
  digitalWrite(23,LOW);
  digitalWrite(19,LOW);
  digitalWrite(18,LOW);
  digitalWrite(5,LOW);
  digitalWrite(17,LOW);
  digitalWrite(16,LOW);
  digitalWrite(4,LOW);
  digitalWrite(0,LOW);
  delay(1000);
  digitalWrite(23,HIGH);
  delay(1000);
  digitalWrite(19,HIGH);
  delay(1000);
  digitalWrite(18,HIGH);
  delay(1000);
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(17,HIGH);
  delay(1000);
  digitalWrite(16,HIGH);
  delay(1000);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(0,HIGH);
  delay(1000);
   digitalWrite(23,LOW);
  digitalWrite(19,LOW);
  digitalWrite(18,LOW);
  digitalWrite(5,LOW);
  digitalWrite(17,LOW);
  digitalWrite(16,LOW);
  digitalWrite(4,LOW);
  digitalWrite(0,LOW);
  delay(1000);
  }else if(menu == 4){
  
  digitalWrite(23,HIGH);
  digitalWrite(19,HIGH);
  delay(500);
  digitalWrite(23,LOW);
  digitalWrite(19,LOW);
  delay(1000);
  digitalWrite(18,HIGH);
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(18,LOW);
  digitalWrite(5,LOW);
  delay(1000);
  digitalWrite(17,HIGH);
  digitalWrite(16,HIGH);
  delay(500);
  digitalWrite(17,LOW);
  digitalWrite(16,LOW);
  delay(1000);
  digitalWrite(4,HIGH);
  digitalWrite(0,HIGH);
  delay(500);
  digitalWrite(4,LOW);
  digitalWrite(0,LOW);
  delay(1000);
  }else if(menu == 5){
  digitalWrite(23,HIGH);
  delay(500);
  digitalWrite(19,HIGH);
  delay(500);
  digitalWrite(18,HIGH);
  delay(500);
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(17,HIGH);
  delay(500);
  digitalWrite(16,HIGH);
  delay(500);
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(0,HIGH);
  delay(500); 
    digitalWrite(0,LOW);
  delay(500); 
   digitalWrite(4,LOW);
  delay(500);
    digitalWrite(16,LOW);
  delay(500);
    digitalWrite(17,LOW);
  delay(500);
    digitalWrite(5,LOW);
  delay(500);
    digitalWrite(18,LOW);
  delay(500);
    digitalWrite(19,LOW);
  delay(500);
   digitalWrite(23,LOW);
  delay(500);
  }else if(menu == 6){
  digitalWrite(23,HIGH);
  digitalWrite(19,HIGH);
  digitalWrite(18,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(17,HIGH);
  digitalWrite(16,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(0,HIGH);
  delay(1000);
  digitalWrite(23,LOW);
  digitalWrite(19,LOW);
  digitalWrite(18,LOW);
  digitalWrite(5,LOW);
  digitalWrite(17,LOW);
  digitalWrite(16,LOW);
  digitalWrite(4,LOW);
  digitalWrite(0,LOW);
  delay(1000);
  }

}

