#include <Servo.h>
Servo myservo;
Servo myservo1;
int pos = 0;
int buttonState = 0;
int lastButtonState = 0;
const int ledPin = 13;
int ledState = LOW;
const long interval = 2000;
unsigned long previousMillis = 0;
int red1=3;
int red2=4;
int green1=5;
int green2=6;
int spg=11;
int spr=12;
void setup()
{
myservo.attach(9); 
myservo1.attach(10);
pinMode(8,INPUT);
pinMode(7,INPUT);
pinMode(red1,OUTPUT);
pinMode(red2,OUTPUT);
pinMode(green1,OUTPUT);
pinMode(green2,OUTPUT);
pinMode(spg,OUTPUT);
pinMode(spr,OUTPUT);
pinMode(13,OUTPUT);
digitalWrite(13,HIGH);
}
void loop()
{
if(digitalRead(8))
{
if( pos >= 0)
{
digitalWrite(red1,HIGH);
digitalWrite(red2,HIGH);
digitalWrite(green1,LOW); 
digitalWrite(green2,LOW);
pos -= 1;
myservo.write(pos);
myservo1.write(pos);
delay(25);
digitalWrite(red1,LOW);
digitalWrite(red2,LOW);
digitalWrite(green1,HIGH);
digitalWrite(green2,HIGH);
delay(25);
}
if(pos == 0)
{
myservo.write(0);
myservo1.write(0);
digitalWrite(green1,HIGH);
digitalWrite(green2,HIGH);
digitalWrite(spr,HIGH);
digitalWrite(spg,LOW);
digitalWrite(13,LOW);
} 
}
if(digitalRead(7))
{
if( pos <= 65)
{
digitalWrite(red1,HIGH);
digitalWrite(red2,HIGH);
digitalWrite(green1,LOW);
digitalWrite(green2,LOW);
pos += 1;
myservo.write(pos);
myservo1.write(pos);
delay(25);
digitalWrite(red2,LOW);
digitalWrite(red2,LOW);
digitalWrite(green1,HIGH);
digitalWrite(green2,HIGH);
delay(25);
}
if(pos >= 65)
{ 
myservo.write(80);
myservo1.write(65);
digitalWrite(red1,HIGH);
digitalWrite(red2,HIGH);
digitalWrite(green1,LOW);
digitalWrite(green2,LOW);
digitalWrite(spr,LOW);
digitalWrite(spg,HIGH);
digitalWrite(13,HIGH);
}
}
}
