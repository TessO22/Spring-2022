
boolean on =LOW;
boolean off =HIGH;

int d = 11;
int e = 2;
int fs = 3;
int g = 4;
int gs =5;
int a = 6;
int as =7;
int b = 8;
int cs =9;



unsigned long previousMillis = 0;

const long qn = 1000;
const long hn = 2000;
const long wn = 4000;
const int r = 99;

//int tempo = 2;


void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);

  //hn = hn / tempo;
  //wn = wn / tempo;

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(cs, OUTPUT);
  pinMode(as, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(gs, OUTPUT);
  pinMode(fs, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(d, OUTPUT);

  digitalWrite(d, off);
  digitalWrite(e, off);
  digitalWrite(fs, off);
  digitalWrite(g, off);
  digitalWrite(gs, off);
  digitalWrite(a, off);
  digitalWrite(as, off);
  digitalWrite(b, off);
  digitalWrite(cs, off);
  
}

void loop() {

//measure 1

//
//digitalWrite(b, on);
////delay(2000);
//digitalWrite(cs, on);
//
//delay(2000);
//digitalWrite(b, off);
////delay(2000);
//digitalWrite(cs, off);
//delay(2000);







  playNote(d, qn);
  delay(50);

//  playNote(a, qn);


//  playNote(d, qn,fs,qn);
//  playNote(fs, qn);
//  playNote(a, qn);
//  playNote(d, qn);
//
//  playNote(d, qn);
//  playNote(fs, qn);
//  playNote(a, qn);
//  playNote(d, qn);

}


void playNote(int _tone, int _rhythm) {
 
 Serial.println(previousMillis);
 
  if (_tone == 99) {
    Serial.println("oh we got a rest!");
    // we're a rest - not a note!
    // wait for the interval/rhythm counter to pass
    unsigned long currentMillis = millis();
    digitalWrite(_tone, off);

    if (currentMillis - previousMillis >= _rhythm) {
      previousMillis = currentMillis;
      digitalWrite(_tone, off); //maybe?
    }

  } else {
    // get time since start
    //Serial.print("turning on: ");
    //Serial.println(_tone);
    unsigned long currentMillis = millis();
    digitalWrite(_tone, on);
    
  Serial.println(currentMillis);
  
    if (currentMillis - previousMillis >= _rhythm) {
      previousMillis = currentMillis;
      //Serial.print("turning off: ");
      //Serial.println(_tone);
      digitalWrite(_tone, off);
    }
    


  }
}
