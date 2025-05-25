#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Servo.h>

Servo myservo1;

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int IR1 = 2;
int IR2 = 4;
int Slot = 4;
int flag1 = 0;
int flag2 = 0;

void setup() {
  Serial.begin(9600);
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }

  display.clearDisplay();
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  myservo1.attach(3);
  myservo1.write(100);
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("Car");
  display.println("Parking");
  display.println("System");
  display.display();
  delay(1500);
  display.clearDisplay();
}

void loop() {
  if (digitalRead(IR1) == LOW && flag1 == 0) {
    if (Slot > 0) {
      flag1 = 1;
      if (flag2 == 0) {
        myservo1.write(0);
        Slot = Slot - 1;
      }
    } else {
      display.setTextSize(2);
      display.setTextColor(WHITE);
      display.setCursor(0, 24);
      display.println("Sorry");
      display.println("No Slots");
      display.display();
    }
    display.clearDisplay();
  }

  if (digitalRead(IR2) == LOW && flag2 == 0) {
    flag2 = 1;
    if (flag1 == 0) {
      myservo1.write(0);
      Slot = Slot + 1;
    }
    display.clearDisplay();
  }

  if (flag1 == 1 && flag2 == 1) {
    delay(500);
    myservo1.write(100);
    flag1 = 0;
    flag2 = 0;
    display.clearDisplay();
  }

  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 24);
  display.println("Slots Left");
  display.println(Slot);
  display.display();
}
