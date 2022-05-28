boolean on = HIGH;
boolean off = LOW;



int D = 2;
int Ds = 3;
int E = 4;
int Es = 5;
int Fs = 6;
int G = 7;
int Gs =8 ;
int A = 9;
int As = 10;
int B = 11;
int Bs = 12;
int Cs = 13;
int R =14;

int wn = 4000;//wholenoteV
int hn = 2000;//halfnoteV
int qn = 1000;//quatrernoteV
int dqn = 1500; //dottedquarternoteV
int en = 500;//eightnoteV
int den = 750;//dottedeigthnoteV
int sn = 250;//sixteenthnoteV

int wr = 4000; //wholerestV
int hr = 2000; //halfrestV
int qr = 1000; //restV

void setup() {

  pinMode(D, OUTPUT);
  pinMode(Ds, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(Es, OUTPUT);
  pinMode(Fs, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(Gs, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(As, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(Bs, OUTPUT);
  pinMode(Cs, OUTPUT);






  digitalWrite(D, on);
  digitalWrite(Ds, on);
  digitalWrite(E, on);
  digitalWrite(Es, on);
  digitalWrite(Fs, on);
  digitalWrite(G, on);
  digitalWrite(Gs, on);
  digitalWrite(A, on);
  digitalWrite(As, on);
  digitalWrite(B, on);
  digitalWrite(B, on);
  digitalWrite(Cs, on);


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
  digitalWrite(Fs, off);
  delay(den);
  digitalWrite(Fs, on);

  delay(sn);
  digitalWrite(Fs, off);
  delay(sn);
  digitalWrite(Fs, on);

  delay(qn);
  digitalWrite(Fs, off);
  delay(qn);
  digitalWrite(Fs, on);

  // measure 2

  delay(den);
  digitalWrite(Fs, off);
  delay(den);
  digitalWrite(Fs, on);

  delay(sn);
  digitalWrite(Fs, off);
  delay(sn);
  digitalWrite(Fs, on);

  delay(qn);
  digitalWrite(Fs, off);
  delay(qn);
  digitalWrite(Fs, on);

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
  digitalWrite(E, off);
  delay(den);
  digitalWrite(E, on);

  delay(sn);
  digitalWrite(E, off);
  delay(sn);
  digitalWrite(E, on);

  delay(qn);
  digitalWrite(E, off);
  delay(qn);
  digitalWrite(E, on);

  // measure 4

  delay(den);
  digitalWrite(E, off);
  delay(den);
  digitalWrite(E, on);

  delay(sn);
  digitalWrite(E, off);
  delay(sn);
  digitalWrite(E, on);

  delay(qn);
  digitalWrite(E, off);
  delay(qn);
  digitalWrite(E, on);

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
  digitalWrite(E, off);
  delay(hn);
  digitalWrite(E, on);

  // measure 6

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

  delay(hn);
  digitalWrite(G, off);
  delay(hn);
  digitalWrite(G, on);

  //measure 7

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

  delay(hn);
  digitalWrite(E, off);
  delay(hn);
  digitalWrite(E, on);

  // measure 8

  delay(hn);
  digitalWrite(E, off);
  delay(hn);
  digitalWrite(E, on);

  delay(hr);
  digitalWrite(R, off);
  delay(hr);
  digitalWrite(R, on);

  //measure 9

  delay(hn);
  digitalWrite(E, off);
  delay(hn);
  digitalWrite(E, on);

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

  //meausre 10


  delay(hn);
  digitalWrite(G, off);
  delay(hn);
  digitalWrite(G, on);

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

  //measure 11

  delay(hn);
  digitalWrite(E, off);
  delay(hn);
  digitalWrite(E, on);

  delay(hn);
  digitalWrite(E, off);
  delay(hn);
  digitalWrite(E, on);

  //measure 12

  delay(hr);
  digitalWrite(R, off);
  delay(hr);
  digitalWrite(R, on);

  delay(dqn);
  digitalWrite(D, off);
  delay(dqn);
  digitalWrite(D, on);

  delay(en);
  digitalWrite(D, off);
  delay(en);
  digitalWrite(D, on);

  //measure 13


  delay(hn);
  digitalWrite(D, off);
  delay(hn);
  digitalWrite(D, on);

  delay(dqn);
  digitalWrite(D, off);
  delay(dqn);
  digitalWrite(D, on);

  delay(en);
  digitalWrite(D, off);
  delay(en);
  digitalWrite(D, on);

  //measure 14


  delay(hn);
  digitalWrite(D, off);
  delay(hn);
  digitalWrite(D, on);

  delay(dqn);
  digitalWrite(E, off);
  delay(dqn);
  digitalWrite(E, on);

  delay(en);
  digitalWrite(E, off);
  delay(en);
  digitalWrite(E, on);

  // measure 15

  delay(hn);
  digitalWrite(E, off);
  delay(hn);
  digitalWrite(E, on);

  delay(dqn);
  digitalWrite(E, off);
  delay(dqn);
  digitalWrite(E, on);

  delay(en);
  digitalWrite(E, off);
  delay(en);
  digitalWrite(E, on);

  //measure 16


  delay(hn);
  digitalWrite(E, off);
  delay(hn);
  digitalWrite(E, on);

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

  //meausre 17

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

  // measure 18

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

  //measure 19

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

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
  digitalWrite(Fs, off);
  delay(dqn);
  digitalWrite(Fs, on);

  delay(en);
  digitalWrite(Fs, off);
  delay(en);
  digitalWrite(Fs, on);

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

  //measure 23

  delay(dqn);
  digitalWrite(Fs, off);
  delay(dqn);
  digitalWrite(Fs, on);

  delay(en);
  digitalWrite(Fs, off);
  delay(en);
  digitalWrite(Fs, on);

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

  //measure 24

  delay(hn);
  digitalWrite(G, off);
  delay(hn);
  digitalWrite(G, on);

  delay(hn);
  digitalWrite(G, off);
  delay(hn);
  digitalWrite(G, on);

  //measure 25

  delay(wn);
  digitalWrite(Gs, off);
  delay(wn);
  digitalWrite(Gs, on);

  //meausre 26

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

  delay(hn);
  digitalWrite(E, off);
  delay(hn);
  digitalWrite(E, on);

  //measure 27

  delay(wn);
  digitalWrite(Ds, off);
  delay(wn);
  digitalWrite(Ds, on);

  // measure 28

  delay(wn);
  digitalWrite(Ds, off);
  delay(wn);
  digitalWrite(Ds, on);

  //meausre 29

  delay(wn);
  digitalWrite(E, off);
  delay(wn);
  digitalWrite(E, on);

  //measure 30

  delay(wn);
  digitalWrite(Ds, off);
  delay(wn);
  digitalWrite(Ds, on);

  //measure 31

  delay(wn);
  digitalWrite(D, off);
  delay(wn);
  digitalWrite(D, on);

  //measure 32

  delay(wn);
  digitalWrite(E, off);
  delay(wn);
  digitalWrite(E, on);

  //measure 33

  delay(wr);
  digitalWrite(R, off);
  delay(wr);
  digitalWrite(R, on);

  //measure 34

  delay(qn);
  digitalWrite(Fs, off);
  delay(qn);
  digitalWrite(Fs, on);

  delay(en);
  digitalWrite(Fs, off);
  delay(en);
  digitalWrite(Fs, on);

  delay(en);
  digitalWrite(Fs, off);
  delay(en);
  digitalWrite(Fs, on);

  delay(qn);
  digitalWrite(Fs, off);
  delay(qn);
  digitalWrite(Fs, on);

  delay(qn);
  digitalWrite(Fs, off);
  delay(qn);
  digitalWrite(Fs, on);

  //measure 35

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

  //measure 36

  delay(qn);
  digitalWrite(E, off);
  delay(qn);
  digitalWrite(E, on);

  delay(en);
  digitalWrite(E, off);
  delay(en);
  digitalWrite(E, on);

  delay(en);
  digitalWrite(E, off);
  delay(en);
  digitalWrite(E, on);

  delay(qn);
  digitalWrite(E, off);
  delay(qn);
  digitalWrite(E, on);

  delay(qn);
  digitalWrite(E, off);
  delay(qn);
  digitalWrite(E, on);

  //measure 37

  delay(hn);
  digitalWrite(E, off);
  delay(hn);
  digitalWrite(E, on);

  delay(hn);
  digitalWrite(A, off);
  delay(hn);
  digitalWrite(A, on);

  //measure 38

  delay(wn);
  digitalWrite(A, off);
  delay(wn);
  digitalWrite(A, on);

  //measure 39

  delay(hn);
  digitalWrite(Gs, off);
  delay(hn);
  digitalWrite(Gs, on);

  delay(hr);
  digitalWrite(R, off);
  delay(hr);
  digitalWrite(R, on);

  //measure 40

  delay(qn);
  digitalWrite(Gs, off);
  delay(qn);
  digitalWrite(Gs, on);

  delay(en);
  digitalWrite(Gs, off);
  delay(en);
  digitalWrite(Gs, on);

  delay(en);
  digitalWrite(Gs, off);
  delay(en);
  digitalWrite(Gs, on);

  delay(qn);
  digitalWrite(Gs, off);
  delay(qn);
  digitalWrite(Gs, on);

  delay(qn);
  digitalWrite(Gs, off);
  delay(qn);
  digitalWrite(Gs, on);

  //measure 41

  delay(hn);
  digitalWrite(G, off);
  delay(hn);
  digitalWrite(G, on);

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

  //measure 42

  delay(wn);
  digitalWrite(E, off);
  delay(wn);
  digitalWrite(E, on);


  //measure 43

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

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

  delay(hn);
  digitalWrite(R, off);
  delay(hn);
  digitalWrite(R, on);

  delay(qn);
  digitalWrite(Fs, off);
  delay(qn);
  digitalWrite(Fs, on);
  
  delay(qn);
  digitalWrite(Fs, off);
  delay(qn);
  digitalWrite(Fs, on);
  
  //measure 47

  delay(hn);
  digitalWrite(G, off);
  delay(hn);
  digitalWrite(G, on);

  delay(hn);
  digitalWrite(E, off);
  delay(hn);
  digitalWrite(E, on);

  //measure 48

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);

  delay(hn);
  digitalWrite(D, off);
  delay(hn);
  digitalWrite(D, on);

  //measure 49

  delay(wn);
  digitalWrite(E, off);
  delay(wn);
  digitalWrite(E, on);

  //measure 50

  delay(wn);
  digitalWrite(E, off);
  delay(wn);
  digitalWrite(E, on);

  //measure 51

  delay(qn);
  digitalWrite(E, off);
  delay(qn);
  digitalWrite(E, on);

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
  digitalWrite(Fs, off);
  delay(den);
  digitalWrite(Fs, on);

  delay(sn);
  digitalWrite(Fs, off);
  delay(sn);
  digitalWrite(Fs, on);

  delay(qn);
  digitalWrite(Fs, off);
  delay(qn);
  digitalWrite(Fs, on);

  delay(en);
  digitalWrite(E, off);
  delay(en);
  digitalWrite(E, on);

  delay(en);
  digitalWrite(E, off);
  delay(en);
  digitalWrite(E, on);

  delay(en);
  digitalWrite(E, off);
  delay(en);
  digitalWrite(E, on);

  delay(en);
  digitalWrite(E, off);
  delay(en);
  digitalWrite(E, on);

  //measure 53

  delay(hn);
  digitalWrite(E, off);
  delay(hn);
  digitalWrite(E, on);

  delay(hn);
  digitalWrite(Fs, off);
  delay(hn);
  digitalWrite(Fs, on);


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
