int stepsPerRevolution = 3000;
int driverPUL = 7;
int driverDIR = 6;


void setup() {
  pinMode(driverPUL, OUTPUT);
  pinMode(driverDIR, OUTPUT);

  digitalWrite(driverDIR, HIGH);
}

void loop() {

  for(int i = 0; i < stepsPerRevolution; i++){
    setSpeed(700);
  }
  
}

void setSpeed(int theSpeed) {
  int _theSpeed = theSpeed;

  digitalWrite(driverPUL, HIGH);
  delayMicroseconds(_theSpeed);
  digitalWrite(driverPUL, LOW);
  delayMicroseconds(_theSpeed);

}
  
