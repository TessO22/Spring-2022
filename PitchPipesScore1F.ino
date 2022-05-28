boolean on = HIGH;
boolean off = LOW;

int Cs = 2;
int D = 3;
int E = 4;
int Fs = 5;
int G = 6;
int Ab = 7;
int A = 8;
int Bb = 9;
int B = 10;
int R = 11;

int wn = 4000;//wholenoteV
int hn = 2000;//halfnoteV
int qn = 1000;//quatrernoteV
int dqn = 1500; //dottedquarternoteV
int en = 500;//eightnoteV
int den = 750;//dottedeigthnoteV
int sn = 250;//sixteenthnoteV

int wr = 4000; //wholerestV
int hr = 2000; //halfrestV
int r = 1000; //restV

void setup() {

  pinMode(Cs, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(Fs, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(Ab, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(Bb, OUTPUT);
  pinMode(B, OUTPUT);





  digitalWrite(Cs, on);
  digitalWrite(D, on);
  digitalWrite(E, on);
  digitalWrite(Fs, on);
  digitalWrite(G, on);
  digitalWrite(Ab, on);
  digitalWrite(A, on);
  digitalWrite(Bb, on);
  digitalWrite(B, on);


}

void loop() {
  // Gloria Vivaldi
  //4|4 time
  //Soprano
  //D major

  //measure 1

  delay(hr);
  digitalWrite(R, off);
  delay(hr);
  digitalWrite(R, on);

  delay(den);
  digitalWrite(D, off);
  delay(den);
  digitalWrite(D, on);

  delay(sn);
  digitalWrite(D, off);
  delay(sn);
  digitalWrite(D, on);

  delay(qn);
  digitalWrite(D, off);
  delay(qn);
  digitalWrite(D, on);

  // measure 2

  delay(den);
  digitalWrite(D, off);
  delay(den);
  digitalWrite(D, on);

  delay(sn);
  digitalWrite(D, off);
  delay(sn);
  digitalWrite(D, on);

  delay(qn);
  digitalWrite(D, off);
  delay(qn);
  digitalWrite(D, on);

  delay(hr);
  digitalWrite(R, off);
  delay(hr);
  digitalWrite(R, on);

  //measure 3

  delay(hr);
  digitalWrite(R, off);
  delay(hr);
  digitalWrite(R, on);

  delay(den);
  digitalWrite(Cs, off);
  delay(den);
  digitalWrite(Cs, on);

  delay(sn);
  digitalWrite(Cs, off);
  delay(sn);
  digitalWrite(Cs, on);

  delay(qn);
  digitalWrite(Cs, off);
  delay(qn);
  digitalWrite(Cs, on);

  // measure 4

  delay(den);
  digitalWrite(Cs, off);
  delay(den);
  digitalWrite(Cs, on);

  delay(sn);
  digitalWrite(Cs, off);
  delay(sn);
  digitalWrite(Cs, on);

  delay(qn);
  digitalWrite(Cs, off);
  delay(qn);
  digitalWrite(Cs, on);

  delay(hr);
  digitalWrite(R, off);
  delay(hr);
  digitalWrite(R, on);

  // measure 5

  delay(hr);
  digitalWrite(R, off);
  delay(hr);
  digitalWrite(R, on);

  delay(hn);
  digitalWrite(Cs, off);
  delay(hn);
  digitalWrite(Cs, on);

  // measure 6

  delay(hn);
  digitalWrite(D, off);
  delay(hn);
  digitalWrite(D, on);

  delay(hn);
  digitalWrite(E, off);
  delay(hn);
  digitalWrite(E, on);

  //measure 7

  delay(hn);
  digitalWrite(D, off);
  delay(hn);
  digitalWrite(D, on);

  delay(hn);
  digitalWrite(D, off);
  delay(hn);
  digitalWrite(D, on);

  // measure 8

  delay(hn);
  digitalWrite(Cs, off);
  delay(hn);
  digitalWrite(Cs, on);

  delay(hr);
  digitalWrite(R, off);
  delay(hr);
  digitalWrite(R, on);

  //measure 9

  delay(hn);
  digitalWrite(Cs, off);
  delay(hn);
  digitalWrite(Cs, on);

  delay(hn);
  digitalWrite(D, off);
  delay(hn);
  digitalWrite(D, on);

  //meausre 10


  delay(hn);
  digitalWrite(E, off);
  delay(hn);
  digitalWrite(E, on);

  delay(hn);
  digitalWrite(D, off);
  delay(hn);
  digitalWrite(D, on);

  //measure 11

  delay(hn);
  digitalWrite(D, off);
  delay(hn);
  digitalWrite(D, on);

  delay(hn);
  digitalWrite(Cs, off);
  delay(hn);
  digitalWrite(Cs, on);

  //measure 12

  delay(hr);
  digitalWrite(R, off);
  delay(hr);
  digitalWrite(R, on);

  delay(dqn);
  digitalWrite(A, off);
  delay(dqn);
  digitalWrite(A, on);

  delay(en);
  digitalWrite(A, off);
  delay(en);
  digitalWrite(A, on);

  //measure 13


  delay(hn);
  digitalWrite(A, off);
  delay(hn);
  digitalWrite(A, on);

  delay(dqn);
  digitalWrite(B, off);
  delay(dqn);
  digitalWrite(B, on);

  delay(en);
  digitalWrite(B, off);
  delay(en);
  digitalWrite(B, on);

  //measure 14


  delay(hn);
  digitalWrite(B, off);
  delay(hn);
  digitalWrite(B, on);

  delay(dqn);
  digitalWrite(B, off);
  delay(dqn);
  digitalWrite(B, on);

  delay(en);
  digitalWrite(B, off);
  delay(en);
  digitalWrite(B, on);

  // measure 15

  delay(hn);
  digitalWrite(B, off);
  delay(hn);
  digitalWrite(B, on);

  delay(dqn);
  digitalWrite(Cs, off);
  delay(dqn);
  digitalWrite(Cs, on);

  delay(en);
  digitalWrite(Cs, off);
  delay(en);
  digitalWrite(Cs, on);

  //measure 16


  delay(hn);
  digitalWrite(Cs, off);
  delay(hn);
  digitalWrite(Cs, on);

  delay(hn);
  digitalWrite(Cs, off);
  delay(hn);
  digitalWrite(Cs, on);

  //meausre 17

  delay(hn);
  digitalWrite(Cs, off);
  delay(hn);
  digitalWrite(Cs, on);

  delay(hn);
  digitalWrite(D, off);
  delay(hn);
  digitalWrite(D, on);

  // measure 18

  delay(hn);
  digitalWrite(B, off);
  delay(hn);
  digitalWrite(B, on);

  delay(hn);
  digitalWrite(B, off);
  delay(hn);
  digitalWrite(B, on);

  //measure 19

  delay(hn);
  digitalWrite(Bb, off);
  delay(hn);
  digitalWrite(Bb, on);

  delay(hn);
  digitalWrite(B, off);
  delay(hn);
  digitalWrite(B, on);

  //meausre 20

  delay(wr);
  digitalWrite(R, off);
  delay(wr);
  digitalWrite(R, on);

  //meausre 21

  delay(wr);
  digitalWrite(R, off);
  delay(wr);
  digitalWrite(R, on);

  //measure 22

  delay(dqn);
  digitalWrite(B, off);
  delay(dqn);
  digitalWrite(B, on);

  delay(en);
  digitalWrite(B, off);
  delay(en);
  digitalWrite(B, on);

  delay(hn);
  digitalWrite(B, off);
  delay(hn);
  digitalWrite(B, on);

  //measure 23

  delay(dqn);
  digitalWrite(B, off);
  delay(dqn);
  digitalWrite(B, on);

  delay(en);
  digitalWrite(B, off);
  delay(en);
  digitalWrite(B, on);

  delay(hn);
  digitalWrite(B, off);
  delay(hn);
  digitalWrite(B, on);

  //measure 24

  delay(hn);
  digitalWrite(B, off);
  delay(hn);
  digitalWrite(B, on);

  delay(hn);
  digitalWrite(B, off);
  delay(hn);
  digitalWrite(B, on);

  //measure 25

  delay(wn);
  digitalWrite(B, off);
  delay(wn);
  digitalWrite(B, on);

  //meausre 26

  delay(wn);
  digitalWrite(Bb, off);
  delay(wn);
  digitalWrite(Bb, on);

  //measure 27

  delay(wn);
  digitalWrite(A, off);
  delay(wn);
  digitalWrite(A, on);

  // measure 28

  delay(wn);
  digitalWrite(A, off);
  delay(wn);
  digitalWrite(A, on);

  //meausre 29

  delay(wn);
  digitalWrite(Ab, off);
  delay(wn);
  digitalWrite(Ab, on);

  //measure 30

  delay(wn);
  digitalWrite(Ab, off);
  delay(wn);
  digitalWrite(Ab, on);

  //measure 31

  delay(wn);
  digitalWrite(G, off);
  delay(wn);
  digitalWrite(G, on);

  //measure 32

  delay(wn);
  digitalWrite(Ab, off);
  delay(wn);
  digitalWrite(Ab, on);

  //measure 33

  delay(wr);
  digitalWrite(R, off);
  delay(wr);
  digitalWrite(R, on);

  //measure 34

  delay(qn);
  digitalWrite(Cs, off);
  delay(qn);
  digitalWrite(Cs, on);

  delay(en);
  digitalWrite(Cs, off);
  delay(en);
  digitalWrite(Cs, on);

  delay(en);
  digitalWrite(Cs, off);
  delay(en);
  digitalWrite(Cs, on);

  delay(qn);
  digitalWrite(Cs, off);
  delay(qn);
  digitalWrite(Cs, on);

  delay(qn);
  digitalWrite(Ab, off);
  delay(qn);
  digitalWrite(Ab, on);

  //measure 35

  delay(hn);
  digitalWrite(D, off);
  delay(hn);
  digitalWrite(D, on);

  delay(hn);
  digitalWrite(D, off);
  delay(hn);
  digitalWrite(D, on);

  //measure 36

  delay(qn);
  digitalWrite(B, off);
  delay(qn);
  digitalWrite(B, on);

  delay(en);
  digitalWrite(B, off);
  delay(en);
  digitalWrite(B, on);

  delay(en);
  digitalWrite(B, off);
  delay(en);
  digitalWrite(B, on);

  delay(qn);
  digitalWrite(B, off);
  delay(qn);
  digitalWrite(B, on);

  delay(qn);
  digitalWrite(B, off);
  delay(qn);
  digitalWrite(B, on);

  //measure 37

  delay(hn);
  digitalWrite(Cs, off);
  delay(hn);
  digitalWrite(Cs, on);

  delay(hn);
  digitalWrite(Cs, off);
  delay(hn);
  digitalWrite(Cs, on);

  //measure 38

  delay(wn);
  digitalWrite(Cs, off);
  delay(wn);
  digitalWrite(Cs, on);

  //measure 39

  delay(hn);
  digitalWrite(B, off);
  delay(hn);
  digitalWrite(B, on);

  delay(hr);
  digitalWrite(R, off);
  delay(hr);
  digitalWrite(R, on);

  //measure 40

  delay(qn);
  digitalWrite(D, off);
  delay(qn);
  digitalWrite(D, on);

  delay(en);
  digitalWrite(D, off);
  delay(en);
  digitalWrite(D, on);

  delay(en);
  digitalWrite(D, off);
  delay(en);
  digitalWrite(D, on);

  delay(qn);
  digitalWrite(D, off);
  delay(qn);
  digitalWrite(D, on);

  delay(qn);
  digitalWrite(D, off);
  delay(qn);
  digitalWrite(D, on);

  //measure 41

  delay(hn);
  digitalWrite(Cs, off);
  delay(hn);
  digitalWrite(Cs, on);

  delay(hn);
  digitalWrite(D, off);
  delay(hn);
  digitalWrite(D, on);

  //measure 42

  delay(hn);
  digitalWrite(D, off);
  delay(hn);
  digitalWrite(D, on);

  delay(hn);
  digitalWrite(Cs, off);
  delay(hn);
  digitalWrite(Cs, on);

  //measure 43

  delay(hn);
  digitalWrite(D, off);
  delay(hn);
  digitalWrite(D, on);

  delay(hr);
  digitalWrite(R, off);
  delay(hr);
  digitalWrite(R, on);

  //meausre 44

  delay(wr);
  digitalWrite(R, off);
  delay(wr);
  digitalWrite(R, on);

  //measure 45

  delay(wr);
  digitalWrite(R, off);
  delay(wr);
  digitalWrite(R, on);

  //meausre 46

  delay(qn);
  digitalWrite(A, off);
  delay(qn);
  digitalWrite(A, on);

  delay(qn);
  digitalWrite(A, off);
  delay(qn);
  digitalWrite(A, on);

  delay(hn);
  digitalWrite(B, off);
  delay(hn);
  digitalWrite(B, on);

  //measure 47

  delay(hn);
  digitalWrite(B, off);
  delay(hn);
  digitalWrite(B, on);

  delay(hn);
  digitalWrite(A, off);
  delay(hn);
  digitalWrite(A, on);

  //measure 48

  delay(hn);
  digitalWrite(A, off);
  delay(hn);
  digitalWrite(A, on);

  delay(hn);
  digitalWrite(G, off);
  delay(hn);
  digitalWrite(G, on);

  //measure 49

  delay(wn);
  digitalWrite(G, off);
  delay(wn);
  digitalWrite(G, on);

  //measure 50

  delay(wn);
  digitalWrite(G, off);
  delay(wn);
  digitalWrite(G, on);

  //measure 51

  delay(qn);
  digitalWrite(G, off);
  delay(qn);
  digitalWrite(G, on);

  delay(wr);
  digitalWrite(R, off);
  delay(wr);
  digitalWrite(R, on);

  delay(wr);
  digitalWrite(R, off);
  delay(wr);
  digitalWrite(R, on);

  //measure 52


  delay(den);
  digitalWrite(D, off);
  delay(den);
  digitalWrite(D, on);

  delay(sn);
  digitalWrite(D, off);
  delay(sn);
  digitalWrite(D, on);

  delay(qn);
  digitalWrite(D, off);
  delay(qn);
  digitalWrite(D, on);

  delay(en);
  digitalWrite(D, off);
  delay(en);
  digitalWrite(D, on);

  delay(en);
  digitalWrite(D, off);
  delay(en);
  digitalWrite(D, on);

  delay(en);
  digitalWrite(D, off);
  delay(en);
  digitalWrite(D, on);

  delay(en);
  digitalWrite(D, off);
  delay(en);
  digitalWrite(D, on);

  //measure 53

  delay(hn);
  digitalWrite(Cs, off);
  delay(hn);
  digitalWrite(Cs, on);

  delay(hn);
  digitalWrite(D, off);
  delay(hn);
  digitalWrite(D, on);


  //measure 54

  delay(wr);
  digitalWrite(R, off);
  delay(wr);
  digitalWrite(R, on);

  //measure 55

  delay(wr);
  digitalWrite(R, off);
  delay(wr);
  digitalWrite(R, on);

  //measure 56

  delay(wr);
  digitalWrite(R, off);
  delay(wr);
  digitalWrite(R, on);








}
