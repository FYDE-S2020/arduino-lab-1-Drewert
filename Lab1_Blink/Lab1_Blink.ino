#define LED_PIN 2
void setup() {
  // put your setup code here, to run once:
    // initialize digital pin LED_PIN as an output.
  pinMode(LED_PIN, OUTPUT);
}
void dimmer(int freq, int duty) {
    int period, onTime, offTime;
    period = 1000/freq;
    onTime = period * duty / 100;
    offTime = period - onTime;
    digitalWrite(LED_PIN, HIGH);
    delay(onTime);
    digitalWrite(LED_PIN, LOW);
    delay(offTime);
}
void timedblink(int t) {
   digitalWrite(LED_PIN, HIGH);
   delay(t);
   digitalWrite(LED_PIN, LOW);
   delay(t);
   
}
void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(500);                       // wait for a second
  //digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  //delay(500);                       // wait for a second
  timedblink(250);
  timedblink(500);
  timedblink(1000);
}
