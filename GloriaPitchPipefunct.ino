int d = 1;
int e = 2;
int f# = 3;
int g = 4;
int g# =5;
int a = 6;
int a# =7;
int b = 8;
int c# =9;

unsigned long previousMillis = 0;

const long qn = 1000;
const long hn = 2000;
const long wn = 4000;
const int r = 99;

//int tempo = 2;

void setup() {

  Serial.begin(9600);

  //hn = hn / tempo;
  //wn = wn / tempo;

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
}


void loop() {

//measure 1

  playNote(r,hn);

  playNote(d, den);
  playNote(f#, den);
  playNote(a, den);
  playNote(d, den);

  playNote(d, sn);
  playNote(f#, sn);
  playNote(a, sn);
  playNote(d, sn);

  playNote(d, qn);
  playNote(f#, qn);
  playNote(a, qn);
  playNote(d, qn);

  //measure 2

  playNote(d, den);
  playNote(f#, den);
  playNote(a, den);
  playNote(d, den);

  playNote(d, sn);
  playNote(f#, sn);
  playNote(a, sn);
  playNote(d, sn);

  playNote(d, qn);
  playNote(f#, qn);
  playNote(a, qn);
  playNote(d, qn);

  playNote(r,hn);

  //meausre 3

 playNote(r,hn);

  playNote(c#, den);
  playNote(e, den);
  playNote(a, den);
  playNote(a, den);

  playNote(c#, sn);
  playNote(e, sn);
  playNote(a, sn);
  playNote(a, sn);

  playNote(c#, qn);
  playNote(e, qn);
  playNote(a, qn);
  playNote(a, qn);

  //measure 4

  playNote(c#, den);
  playNote(e, den);
  playNote(a, den);
  playNote(a, den);

  playNote(c#, sn);
  playNote(e, sn);
  playNote(a, sn);
  playNote(a, sn);

  playNote(c#, qn);
  playNote(e, qn);
  playNote(a, qn);
  playNote(a, qn);

 playNote(r,hn);

 //meausre 5

  playNote(r,hn);

  playNote(c#,hn);
  playNote(e,hn);
  playNote(c#,hn);
  playNote(a,hn);

  //measure 6

  playNote(d,hn);
  playNote(f#,hn);
  playNote(a,hn);
  playNote(a,hn);

  playNote(e,hn);
  playNote(g,hn);
  playNote(c#,hn);
  playNote(a,hn);

  //measure 7
  
  playNote(d,hn);
  playNote(f#,hn);
  playNote(a,hn);
  playNote(a,hn);
 
  playNote(d,hn);
  playNote(e,hn);
  playNote(a,hn);
  playNote(a,hn);

 //measure 8

  playNote(c#,hn);
  playNote(e,hn);
  playNote(a,hn);
  playNote(a,hn);

  playNote(r,hn);

  //measure 9 

  playNote(c#,hn);
  playNote(e,hn);
  playNote(c#,hn);
  playNote(a,hn);

  playNote(d,hn);
  playNote(f#,hn);
  playNote(a,hn);
  playNote(a,hn);

  //measure 10

  playNote(e,hn);
  playNote(g,hn);
  playNote(c#,hn);
  playNote(a,hn);

  playNote(d,hn);
  playNote(f#,hn);
  playNote(a,hn);
  playNote(a,hn);

  //meausre 11

  playNote(d,hn);
  playNote(e,hn);
  playNote(a,hn);
  playNote(a,hn);

  playNote(c#,hn);
  playNote(e,hn);
  playNote(a,hn);
  playNote(a,hn);

  //meausre 12

  playNote(r,hn);

  playNote(a,dqn);
  playNote(d,dqn);
  playNote(f#,dqn);
  playNote(d,dqn);
  
  playNote(a,en);
  playNote(d,en);
  playNote(f#,en);
  playNote(d,en);

  //measure 13

  playNote(a,hn);
  playNote(d,hn);
  playNote(f#,hn);
  playNote(d,hn);

  playNote(b,dqn);
  playNote(d,dqn);
  playNote(b,dqn);
  playNote(g,dqn);

  playNote(b,en);
  playNote(d,en);
  playNote(b,en);
  playNote(g,en);

  //meausre 14

  playNote(b,hn);
  playNote(d,hn);
  playNote(b,hn);
  playNote(g,hn);
 
  playNote(b,dqn);
  playNote(e,dqn);
  playNote(g#,dqn);
  playNote(e,dqn);

  playNote(b,en);
  playNote(e,en);
  playNote(g#,en);
  playNote(e,en);

  //measure 15

  playNote(b,hn);
  playNote(e,hn);
  playNote(g#,hn);
  playNote(e,hn);

  playNote(c#,dqn);
  playNote(e,dqn);
  playNote(c#,dqn);
  playNote(a,dqn);

  playNote(c#,en);
  playNote(e,en);
  playNote(c#,en);
  playNote(a,en);

 //measure 16

  playNote(c#,hn);
  playNote(e,hn);
  playNote(c#,hn);
  playNote(a,hn);

  playNote(c#,hn);
  playNote(f#,hn);
  playNote(a#,hn);
  playNote(f#,hn);

 //meausre 17

  playNote(c#,hn);
  playNote(f#,hn);
  playNote(a#,hn);
  playNote(f#,hn);

  playNote(d,hn);
  playNote(f#,hn);
  playNote(b,hn);
  playNote(f#,hn);

 //measure 18

  playNote(b,hn);
  playNote(f#,hn);
  playNote(d,hn);
  playNote(f#,hn);

  playNote(b,hn);
  playNote(f#,hn);
  playNote(c#,hn);
  playNote(f#,hn);

 //measure 19

  playNote(a#,hn);
  playNote(f#,hn);
  playNote(c#,hn);
  playNote(f#,hn);

  playNote(b,hn);
  playNote(f#,hn);
  playNote(d,hn);
  playNote(b,hn);

  //measure 20 

  playNote(r,wn);

  //meausre 21

  playNote(r,wn);

  //measure 22

  playNote(b,dqn);
  playNote(f#,dqn);
  playNote(d,dqn);
  playNote(b,dqn);

  playNote(b,en);
  playNote(f#,en);
  playNote(d,en);
  playNote(b,en);

  playNote(b,hn);
  playNote(f#,hn);
  playNote(d,hn);
  playNote(b,hn);

  //meausre 23

  playNote(b,dqn);
  playNote(f#,dqn);
  playNote(d#,dqn);
  playNote(a,dqn);

  playNote(b,en);
  playNote(f#,en);
  playNote(d#,en);
  playNote(a,en);

  playNote(b,hn);
  playNote(f#,hn);
  playNote(d#,hn);
  playNote(a,hn);

  //measure 24

  playNote(b,hn);
  playNote(g,hn);
  playNote(e,hn);
  playNote(g,hn);

  playNote(b,hn);
  playNote(g,hn);
  playNote(e,hn);
  playNote(g,hn);

  //meausre 25

  playNote(b,wn);
  playNote(g#,wn);
  playNote(e#,wn);
  playNote(c#,wn);

  //measure 26

  playNote(a#,wn);
    playNote(f#,hn);
    platNote(e,hn):
  playNote(c#,wn);
  playNote(f#,wn);

  //measure 27
  
  playNote(a,wn);
  playNote(d#,wn);
  playNote(c#,wn);
  playNote(f#,wn);

  //measure 28

  playNote(a,wn);
  playNote(d#,wn);
  playNote(c,wn);
  playNote(f#,wn);

 //measure 29

  playNote(g#,wn);
  playNote(e,wn);
  playNote(c#,wn);
  playNote(c#,wn);

 //meausre 30

  playNote(g#,wn);
  playNote(d#,wn);
  playNote(c#,wn);
  playNote(g#,wn);

 //measure 31

  playNote(g#,wn);
  playNote(d#,wn);
  playNote(c,wn);
  playNote(c#,wn);

 //meausre 32

  playNote(g#,wn);
  playNote(e,wn);
  playNote(c#,wn);
  playNote(c#,wn);

 //measure 33

  playNote(r,wn);
  playNote(r,wn);
  playNote(r,wn);
  playNote(r,wn);

  //measure 34

  playNote(c#,qn);
  playNote(f#,qn);
  playNote(c#,qn);
  playNote(a#,qn);

  playNote(c#,en);
  playNote(f#,en);
  playNote(c#,en);
  playNote(a#,en);

  playNote(c#,en);
  playNote(f#,en);
  playNote(c#,en);
  playNote(a#,en);

  playNote(c#,qn);
  playNote(f#,qn);
  playNote(e,qn);
  playNote(a#,qn);

  playNote(c#,qn);
  playNote(f#,qn);
  playNote(e,qn);
  playNote(a#,qn);

  //measure 35

  playNote(d,hn);
  playNote(f#,hn);
  playNote(d,hn);
  playNote(b,hn);

  playNote(d,hn);
  playNote(f#,hn);
  playNote(d,hn);
  playNote(b,hn);

  //measure36

  playNote(b,qn);
  playNote(e,qn);
  playNote(d,qn);
  playNote(g#,qn);

  playNote(b,en);
  playNote(e,en);
  playNote(d,en);
  playNote(g#,en);

  playNote(b,en);
  playNote(e,en);
  playNote(d,en);
  playNote(g#,en);

  playNote(b,qn);
  playNote(e,qn);
  playNote(d,qn);
  playNote(g#,qn);

  playNote(b,qn);
  playNote(e,qn);
  playNote(d,qn);
  playNote(g#,qn);

  //measure37
  
  playNote(c#,hn);
  playNote(e,hn);
  playNote(c#,hn);
  playNote(a,hn);

  playNote(c#,hn);
  playNote(a,hn);
  playNote(e,hn);
  playNote(a,hn);

  //measure 38

  playNote(c#,wn);
  playNote(a,wn);
  playNote(f#,wn);
  playNote(d#,wn);

  //measure 39

  playNote(b,hn);
  playNote(g#,hn);
  playNote(b,hn);
  playNote(e,hn);

  playNote(r,hn);
  playNote(r,hn);
  playNote(r,hn);
  playNote(r,hn);

  //measure40

  playNote(d,qn);
  playNote(g#,qn);
  playNote(b,qn);
  playNote(e,qn);

  playNote(d,en);
  playNote(g#,en);
  playNote(b,en);
  playNote(e,en);

  playNote(d,en);
  playNote(g#,en);
  playNote(b,en);
  playNote(e,en);

  playNote(d,qn);
  playNote(g,qn);
  playNote(b,qn);
  playNote(e,qn);

  playNote(d,qn);
  playNote(g,qn);
  playNote(e,qn);
  playNote(e,qn);

  //measure 41
  
  playNote(c#,hn);
  playNote(g,hn);
    playNote(e,qn);
    playNote(c#,qn);
  playNote(a,hn);

  playNote(d,hn);
  playNote(f#,hn);
  playNote(a,hn);
  playNote(d,hn);

  //measure 42

    playNote(d,hn);
    playNote(c#,hn);
  playNote(e,wn);
  playNote(a,wn);
    playNote(a,hn);
    playNote(a,hn);

   //measure 43

  playNote(d,hn);
  playNote(f#,hn);
  playNote(a,hn);
  playNote(d,hn);

  playNote(r,hn);
  playNote(r,hn);
  playNote(r,hn);
  playNote(r,hn);

  //measure 44

  playNote(r,wn);
  playNote(r,wn);
  playNote(r,wn);
  playNote(r,wn);

 //measure 45

  playNote(r,wn);
  playNote(r,wn);
  playNote(r,wn);
  playNote(r,wn);

  //meausre 46

    playNote(a,qn);
    playNote(a,qn);
  playNote(r,hn);
    playNote(d,hn);
  playNote(r,hn);

  playNote(b,hn);
     playNote(f#,qn);
     playNote(f#,qn);
  playNote(d,hn);
    playNote(d,qn);
    playNote(d,qn);

 //measure 47

    playNote(b,hn);
    playNote(a,hn);
    playNote(g,hn);
    playNote(e,hn);
  playNote(e,wn);
  playNote(c#,wn);

 //measure 48

    playNote(a,hn);
    playNote(g,hn);
    playNote(f#,hn);
    playNote(d,hn);
  playNote(d,wn);
  playNote(b,wn);

//measure 49

  playNote(g,wn);
  playNote(e,wn);
  playNote(c#,wn);
  playNote(a,wn);

 //measure 50
  
  playNote(g,wn);
  playNote(e,wn);
  playNote(c#,wn);
  playNote(a,wn);

 //measure 51

  playNote(g,qn);
  playNote(e,qn);
  playNote(c#,qn);
  playNote(a,qn);

  playNote(r,qn);
  playNote(r,qn);
  playNote(r,qn);
  playNote(r,qn);

  playNote(r,wn);
  playNote(r,wn);
  playNote(r,wn);
  playNote(r,wn);

  playNote(r,wn);
  playNote(r,wn);
  playNote(r,wn);
  playNote(r,wn);

  //measure 52

  playNote(d,den);
  playNote(f#,den);
  playNote(a,den);
  playNote(d,den);

  playNote(d,sn);
  playNote(f#,sn);
  playNote(a,sn);
  playNote(d,sn);

  playNote(d,qn);
  playNote(f#,qn);
  playNote(a,qn);
  playNote(d,qn);

  playNote(d,en);
  playNote(e,en);
  playNote(a,en);
  playNote(a,en);

  playNote(d,en);
  playNote(e,en);
  playNote(a,en);
  playNote(a,en);

  playNote(d,en);
  playNote(e,en);
  playNote(a,en);
  playNote(a,en);

  playNote(d,en);
  playNote(e,en);
  playNote(a,en);
  playNote(a,en);

 //measure 53

  playNote(c#,hn);
  playNote(e,hn);
  playNote(a,hn);
  playNote(a,hn);

  playNote(d,hn);
  playNote(f#,hn);
  playNote(a,hn);
  playNote(d,hn);

 //measure 54

  playNote(r,wn);
  playNote(r,wn);
  playNote(r,wn);
  playNote(r,wn);

  //measure 55

  playNote(r,wn);
  playNote(r,wn);
  playNote(r,wn);
  playNote(r,wn);

  //measure 56

  playNote(r,wn);
  playNote(r,wn);
  playNote(r,wn);
  playNote(r,wn);

  //end


  
  
  
 
    
  playNote(a, qn);
  playNote(b, hn);
  playNote(r, wn);
  playNote(c, wn); 
  playNote(a, qn);
  playNote(a, qn);
  playNote(a, qn);
  playNote(b, hn);
//Serial.println(" ");

  //timing ???


}

void playNote(int _tone, int _rhythm) {

  if (_tone == 99) {
    Serial.println("oh we got a rest!");
    // we're a rest - not a note!
    // wait for the interval/rhythm counter to pass
    unsigned long currentMillis = millis();
    digitalWrite(_tone, LOW);

    if (currentMillis - previousMillis >= _rhythm) {
      previousMillis = currentMillis;
      digitalWrite(_tone, LOW);
    }

  } else {
    // get time since start
    //Serial.print("turning on: ");
    //Serial.println(_tone);
    unsigned long currentMillis = millis();
    digitalWrite(_tone, HIGH);

    if (currentMillis - previousMillis >= _rhythm) {
      previousMillis = currentMillis;
      Serial.print("turning off: ");
      Serial.println(_tone);
      digitalWrite(_tone, LOW);
    }

  }

}
