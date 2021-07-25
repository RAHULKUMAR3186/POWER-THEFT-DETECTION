void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0, INPUT);
pinMode(A1, INPUT);
pinMode(A3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int y =  analogRead(A1);
  int z = analogRead(A0);
int x = (y-z);
analogWrite(A3,x);
Serial.println(x);
}
