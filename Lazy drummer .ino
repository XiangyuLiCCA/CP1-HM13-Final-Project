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
  a.write(160);
  delay(200);
  a.write(135);
  delay(200);
  a.write(160);
}
void fireb(Servo b) {
  b.write(135);
  delay(200);
  b.write(90);
}
void firec(Servo c) {
  c.write(90);
  delay(200);
  c.write(45);
  delay(200);
  c.write(90);
}
void holda(Servo a) {
  a.write(160);
  delay(200);
  a.write(160);
}
void holdb(Servo b) {
  b.write(90);
  delay(200);
  b.write(90);
}
void holdc(Servo c) {
  c.write(90);
  delay(200);
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
delay(300);

// Hit the first one
firea(servoa);
holdb(servob);
holdc(servoc);

delay(300);

// Hit the second one
holda(servoa);
fireb(servob);
holdc(servoc);

delay(300);

// Hit the third one
holda(servoa);
holdb(servob);
firec(servoc);

delay(300);

holda(servoa);
fireb(servob);
holdc(servoc);

delay(300);

firea(servoa);
fireb(servob);
holdc(servoc);

delay(300);

firea(servoa);
holdb(servob);
holdc(servoc);

delay(300);

holda(servoa);
holdb(servob);
holdc(servoc);

delay(300);

holda(servoa);
fireb(servob);
firec(servoc);

delay(300);

holda(servoa);
holdb(servob);
firec(servoc);

delay(300);

firea(servoa);
fireb(servob);
holdc(servoc);

delay(300);

holda(servoa);
fireb(servob);
holdc(servoc);

delay(300);

holda(servoa);
holdb(servob);
firec(servoc);

delay(300);

firea(servoa);
holdb(servob);
holdc(servoc);

delay(300);

holda(servoa);
holdb(servob);
firec(servoc);

delay(300);

firea(servoa);
fireb(servob);
holdc(servoc);

delay(300);

firea(servoa);
holdb(servob);
firec(servoc);

delay(300);

holda(servoa);
fireb(servob);
holdc(servoc);

delay(300);

firea(servoa);
fireb(servob);
firec(servoc);

delay(300);
}
