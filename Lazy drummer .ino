#include <Servo.h>

Servo servoa;        //initialize a servo object for the connected servo
Servo servob;        //initialize a servo object for the connected servo
Servo servoc;

int angle = 0;

void setup()
{
  Serial.begin(5000);
  servoa.attach(7);      // attach the signal pin of servo to pin3 of arduino
  servob.attach(11);      // attach the signal pin of servo to pin10 of arduino
  servoc.attach(9);
  Serial.println("Startup");
}
void firea(Servo a) {
  a.write(0);
  delay(300);
  a.write(90);
  delay(300);
  a.write(0);
}
void fireb(Servo b) {
  b.write(135);
  delay(300);
  b.write(45);
}
void firec(Servo c) {
  c.write(90);
  delay(300);
  c.write(0);
  delay(300);
  c.write(90);
}
void holda(Servo a) {
  a.write(0);
  delay(300);
  a.write(0);
}
void holdb(Servo b) {
  b.write(45);
  delay(300);
  b.write(45);
}
void holdc(Servo c) {
  c.write(90);
  delay(300);
  c.write(90);
}
//firea(servoa);
//fireb(servob);
//firec(servoc);
//hold(servoa);
//hold(servob);
//hold(servoc);
void loop() {
// All on
//fire(servoa);
//fire(servob);
//fire(servoc);
//delay(1000);
// All off
holda(servoa);
holdb(servob);
holdc(servoc);
delay(500);

// Hit the first one
firea(servoa);
holdb(servob);
holdc(servoc);

delay(500);

// Hit the second one
holda(servoa);
fireb(servob);
holdc(servoc);

delay(500);

// Hit the third one
holda(servoa);
holdb(servob);
firec(servoc);

delay(500);

holda(servoa);
fireb(servob);
holdc(servoc);

delay(500);

firea(servoa);
fireb(servob);
holdc(servoc);

delay(500);

firea(servoa);
holdb(servob);
holdc(servoc);

delay(500);

holda(servoa);
holdb(servob);
holdc(servoc);

delay(500);

holda(servoa);
fireb(servob);
firec(servoc);

delay(500);

holda(servoa);
holdb(servob);
firec(servoc);

delay(500);

firea(servoa);
fireb(servob);
holdc(servoc);

delay(500);

holda(servoa);
fireb(servob);
holdc(servoc);

delay(500);

holda(servoa);
holdb(servob);
firec(servoc);

delay(500);

firea(servoa);
holdb(servob);
holdc(servoc);

delay(500);

holda(servoa);
holdb(servob);
firec(servoc);

delay(500);

firea(servoa);
fireb(servob);
holdc(servoc);

delay(500);

firea(servoa);
holdb(servob);
firec(servoc);

delay(500);

holda(servoa);
fireb(servob);
holdc(servoc);

delay(500);

firea(servoa);
fireb(servob);
firec(servoc);

delay(500);
}
