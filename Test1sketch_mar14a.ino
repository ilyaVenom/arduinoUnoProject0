// global var
int LEDpin = 13;
int waitTimeOn = 900;
int waitTimeOff = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LEDpin, HIGH);
  // to blink it w/ delay
  delay(waitTimeOn); 
  digitalWrite(LEDpin, LOW);
  delay(waitTimeOff);// which is a loop of turning it off and on in a loop.
  // but constant are bad.
}
