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
  //testsketchnotevalues

  //wholenote run

  delay(wn);
  digitalWrite(D, off);
  delay(wn);
  digitalWrite(D, on);

  delay(wn);
  digitalWrite(Ds, off);
  delay(wn);
  digitalWrite(Ds, on);

  delay(wn);
  digitalWrite(E, off);
  delay(wn);
  digitalWrite(E, on);

  delay(wn);
  digitalWrite(Es, off);
  delay(wn);
  digitalWrite(Es, on);

  delay(wn);
  digitalWrite(Fs, off);
  delay(wn);
  digitalWrite(Fs, on);

  delay(wn);
  digitalWrite(G, off);
  delay(wn);
  digitalWrite(G, on);

  delay(wn);
  digitalWrite(Gs, off);
  delay(wn);
  digitalWrite(Gs, on);

  delay(wn);
  digitalWrite(A, off);
  delay(wn);
  digitalWrite(A, on);

  delay(wn);
  digitalWrite(As, off);
  delay(wn);
  digitalWrite(As, on);

  delay(wn);
  digitalWrite(B, off);
  delay(wn);
  digitalWrite(B, on);

  delay(wn);
  digitalWrite(Bs, off);
  delay(wn);
  digitalWrite(Bs, on);

  delay(wn);
  digitalWrite(Cs, off);
  delay(wn);
  digitalWrite(Cs, on);

  delay(wn);
  digitalWrite(R, off);
  delay(wn);
  digitalWrite(R, on);

  delay(5000);
}
//
//  //halfnote run
//
//  delay(hn);
//  digitalWrite(D, off);
//  delay(hn);
//  digitalWrite(D, on);
//
//  delay(hn);
//  digitalWrite(Ds, off);
//  delay(hn);
//  digitalWrite(Ds, on);
//
//  delay(hn);
//  digitalWrite(E, off);
//  delay(hn);
//  digitalWrite(E, on);
//
//  delay(hn);
//  digitalWrite(Es, off);
//  delay(hn);
//  digitalWrite(Es, on);
//
//  delay(hn);
//  digitalWrite(Fs, off);
//  delay(hn);
//  digitalWrite(Fs, on);
//
//  delay(hn);
//  digitalWrite(G, off);
//  delay(hn);
//  digitalWrite(G, on);
//
//  delay(hn);
//  digitalWrite(Gs, off);
//  delay(hn);
//  digitalWrite(Gs, on);
//
//  delay(hn);
//  digitalWrite(A, off);
//  delay(hn);
//  digitalWrite(A, on);
//
//  delay(hn);
//  digitalWrite(As, off);
//  delay(hn);
//  digitalWrite(As, on);
//
//  delay(hn);
//  digitalWrite(B, off);
//  delay(hn);
//  digitalWrite(B, on);
//
//  delay(hn);
//  digitalWrite(Bs, off);
//  delay(hn);
//  digitalWrite(Bs, on);
//
//  delay(hn);
//  digitalWrite(Cs, off);
//  delay(hn);
//  digitalWrite(Cs, on);
//
//  delay(hn);
//  digitalWrite(R, off);
//  delay(hn);
//  digitalWrite(R, on);
//
//delay(5000);
//
// //quaternote run
//
//  delay(qn);
//  digitalWrite(D, off);
//  delay(qn);
//  digitalWrite(D, on);
//
//  delay(qn);
//  digitalWrite(Ds, off);
//  delay(qn);
//  digitalWrite(Ds, on);
//
//  delay(qn);
//  digitalWrite(E, off);
//  delay(qn);
//  digitalWrite(E, on);
//
//  delay(qn);
//  digitalWrite(Es, off);
//  delay(qn);
//  digitalWrite(Es, on);
//
//  delay(qn);
//  digitalWrite(Fs, off);
//  delay(qn);
//  digitalWrite(Fs, on);
//
//  delay(qn);
//  digitalWrite(G, off);
//  delay(qn);
//  digitalWrite(G, on);
//
//  delay(qn);
//  digitalWrite(Gs, off);
//  delay(qn);
//  digitalWrite(Gs, on);
//
//  delay(qn);
//  digitalWrite(A, off);
//  delay(qn);
//  digitalWrite(A, on);
//
//  delay(qn);
//  digitalWrite(As, off);
//  delay(qn);
//  digitalWrite(As, on);
//
//  delay(qn);
//  digitalWrite(B, off);
//  delay(qn);
//  digitalWrite(B, on);
//
//  delay(qn);
//  digitalWrite(Bs, off);
//  delay(qn);
//  digitalWrite(Bs, on);
//
//  delay(qn);
//  digitalWrite(Cs, off);
//  delay(qn);
//  digitalWrite(Cs, on);
//
//  delay(qn);
//  digitalWrite(R, off);
//  delay(qn);
//  digitalWrite(R, on);
//
//delay(5000);
//
// //dottedquaternote run
//
//  delay(dqn);
//  digitalWrite(D, off);
//  delay(dqn);
//  digitalWrite(D, on);
//
//  delay(dqn);
//  digitalWrite(Ds, off);
//  delay(dqn);
//  digitalWrite(Ds, on);
//
//  delay(dqn);
//  digitalWrite(E, off);
//  delay(dqn);
//  digitalWrite(E, on);
//
//  delay(dqn);
//  digitalWrite(Es, off);
//  delay(dqn);
//  digitalWrite(Es, on);
//
//  delay(dqn);
//  digitalWrite(Fs, off);
//  delay(dqn);
//  digitalWrite(Fs, on);
//
//  delay(dqn);
//  digitalWrite(G, off);
//  delay(dqn);
//  digitalWrite(G, on);
//
//  delay(dqn);
//  digitalWrite(Gs, off);
//  delay(dqn);
//  digitalWrite(Gs, on);
//
//  delay(dqn);
//  digitalWrite(A, off);
//  delay(dqn);
//  digitalWrite(A, on);
//
//  delay(dqn);
//  digitalWrite(As, off);
//  delay(dqn);
//  digitalWrite(As, on);
//
//  delay(dqn);
//  digitalWrite(B, off);
//  delay(dqn);
//  digitalWrite(B, on);
//
//  delay(dqn);
//  digitalWrite(Bs, off);
//  delay(dqn);
//  digitalWrite(Bs, on);
//
//  delay(dqn);
//  digitalWrite(Cs, off);
//  delay(dqn);
//  digitalWrite(Cs, on);
//
//  delay(dqn);
//  digitalWrite(R, off);
//  delay(dqn);
//  digitalWrite(R, on);
//
//delay(5000);
//
//  //eigthnote run
//
//  delay(en);
//  digitalWrite(D, off);
//  delay(en);
//  digitalWrite(D, on);
//
//  delay(en);
//  digitalWrite(Ds, off);
//  delay(en);
//  digitalWrite(Ds, on);
//
//  delay(en);
//  digitalWrite(E, off);
//  delay(en);
//  digitalWrite(E, on);
//
//  delay(en);
//  digitalWrite(Es, off);
//  delay(en);
//  digitalWrite(Es, on);
//
//  delay(en);
//  digitalWrite(Fs, off);
//  delay(en);
//  digitalWrite(Fs, on);
//
//  delay(en);
//  digitalWrite(G, off);
//  delay(en);
//  digitalWrite(G, on);
//
//  delay(en);
//  digitalWrite(Gs, off);
//  delay(en);
//  digitalWrite(Gs, on);
//
//  delay(en);
//  digitalWrite(A, off);
//  delay(en);
//  digitalWrite(A, on);
//
//  delay(en);
//  digitalWrite(As, off);
//  delay(en);
//  digitalWrite(As, on);
//
//  delay(en);
//  digitalWrite(B, off);
//  delay(en);
//  digitalWrite(B, on);
//
//  delay(en);
//  digitalWrite(Bs, off);
//  delay(en);
//  digitalWrite(Bs, on);
//
//  delay(en);
//  digitalWrite(Cs, off);
//  delay(en);
//  digitalWrite(Cs, on);
//
//  delay(en);
//  digitalWrite(R, off);
//  delay(en);
//  digitalWrite(R, on);
//
//  delay(5000);
//
//  //dottedeigthnote run
//
//  delay(den);
//  digitalWrite(D, off);
//  delay(den);
//  digitalWrite(D, on);
//
//  delay(den);
//  digitalWrite(Ds, off);
//  delay(den);
//  digitalWrite(Ds, on);
//
//  delay(den);
//  digitalWrite(E, off);
//  delay(den);
//  digitalWrite(E, on);
//
//  delay(den);
//  digitalWrite(Es, off);
//  delay(den);
//  digitalWrite(Es, on);
//
//  delay(den);
//  digitalWrite(Fs, off);
//  delay(den);
//  digitalWrite(Fs, on);
//
//  delay(den);
//  digitalWrite(G, off);
//  delay(den);
//  digitalWrite(G, on);
//
//  delay(den);
//  digitalWrite(Gs, off);
//  delay(den);
//  digitalWrite(Gs, on);
//
//  delay(den);
//  digitalWrite(A, off);
//  delay(den);
//  digitalWrite(A, on);
//
//  delay(den);
//  digitalWrite(As, off);
//  delay(den);
//  digitalWrite(As, on);
//
//  delay(den);
//  digitalWrite(B, off);
//  delay(den);
//  digitalWrite(B, on);
//
//  delay(den);
//  digitalWrite(Bs, off);
//  delay(den);
//  digitalWrite(Bs, on);
//
//  delay(den);
//  digitalWrite(Cs, off);
//  delay(den);
//  digitalWrite(Cs, on);
//
//  delay(den);
//  digitalWrite(R, off);
//  delay(den);
//  digitalWrite(R, on);
//
//  delay(5000);
//
//    //sixteenthnote run
//
//  delay(sn);
//  digitalWrite(D, off);
//  delay(sn);
//  digitalWrite(D, on);
//
//  delay(sn);
//  digitalWrite(Ds, off);
//  delay(sn);
//  digitalWrite(Ds, on);
//
//  delay(sn);
//  digitalWrite(E, off);
//  delay(sn);
//  digitalWrite(E, on);
//
//  delay(sn);
//  digitalWrite(Es, off);
//  delay(sn);
//  digitalWrite(Es, on);
//
//  delay(sn);
//  digitalWrite(Fs, off);
//  delay(sn);
//  digitalWrite(Fs, on);
//
//  delay(sn);
//  digitalWrite(G, off);
//  delay(sn);
//  digitalWrite(G, on);
//
//  delay(sn);
//  digitalWrite(Gs, off);
//  delay(sn);
//  digitalWrite(Gs, on);
//
//  delay(sn);
//  digitalWrite(A, off);
//  delay(sn);
//  digitalWrite(A, on);
//
//  delay(sn);
//  digitalWrite(As, off);
//  delay(sn);
//  digitalWrite(As, on);
//
//  delay(sn);
//  digitalWrite(B, off);
//  delay(sn);
//  digitalWrite(B, on);
//
//  delay(sn);
//  digitalWrite(Bs, off);
//  delay(sn);
//  digitalWrite(Bs, on);
//
//  delay(sn);
//  digitalWrite(Cs, off);
//  delay(sn);
//  digitalWrite(Cs, on);
//
//  delay(sn);
//  digitalWrite(R, off);
//  delay(sn);
//  digitalWrite(R, on);
//
//  delay(5000);
//
////rests
//
//
//  delay(wr);
//  digitalWrite(R, off);
//  delay(wr);
//  digitalWrite(R, on);
//
//  delay(hn);
//  digitalWrite(D, off);
//  delay(hn);
//  digitalWrite(D, on);
//
//  delay(hr);
//  digitalWrite(R, off);
//  delay(hr);
//  digitalWrite(R, on);
//
//  delay(hn);
//  digitalWrite(D, off);
//  delay(hn);
//  digitalWrite(D, on);
//
//  delay(qr);
//  digitalWrite(R, off);
//  delay(qr);
//  digitalWrite(R, on);
//
//  delay(hn);
//  digitalWrite(D, off);
//  delay(hn);
//  digitalWrite(D, on);
//
//
//delay(5000);
//}
