//#include <iostream>
//#include <fstream>
#include <string.h>
// led long poles got to columns
// led short poles to rows

int row1 = A0;
int row2 = A1;
int row3 = A2;

int col1 = D0;
int col2 = D1;
int col3 = D2;
int col4 = D3;
int col5 = D4;
int col6 = D5;
int col7 = D6;
int col8 = D7;
int col9 = D8;


//int spellIt(String command);


void setup() {

  pinMode(row1, OUTPUT);
  pinMode(row2, OUTPUT);
  pinMode(row3, OUTPUT);
  pinMode(col1, OUTPUT);
  pinMode(col2, OUTPUT);
  pinMode(col3, OUTPUT);
  pinMode(col4, OUTPUT);
  pinMode(col5, OUTPUT);
  pinMode(col6, OUTPUT);
  pinMode(col7, OUTPUT);
  pinMode(col8, OUTPUT);
  pinMode(col9, OUTPUT);
  
  digitalWrite(row1, HIGH);
  digitalWrite(row2, HIGH);
  digitalWrite(row3, HIGH);
  digitalWrite(col1, LOW);
  digitalWrite(col2, LOW);
  digitalWrite(col3, LOW);
  digitalWrite(col4, LOW);
  digitalWrite(col5, LOW);
  digitalWrite(col6, LOW);
  digitalWrite(col7, LOW);
  digitalWrite(col8, LOW);
  digitalWrite(col9, LOW);

  Particle.function("enter_letter", parseIt);

}

void loop() {
 
   
}

int parseIt(String letters){
    
    for (unsigned int i = 0; i < letters.length(); i++){
        signed char thisLetter = letters[i];
        //String thisLetter = letters.charAt(i);
        //spellIt(letters.charAt(i));
        spellIt(thisLetter);
    
    
    }
    return 1;
}

int spellIt(signed char letter){
  // a
  if(letter == 97){
    digitalWrite(row1, LOW);
    digitalWrite(col2, HIGH);
    delay(1000);
    digitalWrite(row1, HIGH);
    digitalWrite(col2, LOW);
    return 1;
  }
  // b
  if(letter == 98){
    digitalWrite(row1, LOW);
    digitalWrite(col3, HIGH);
    delay(1000);
    digitalWrite(row1, HIGH);
    digitalWrite(col3, LOW);
    return 1;
  }
  // c
  if(letter == 99){
    digitalWrite(row1, LOW);
    digitalWrite(col4, HIGH);
    delay(1000);
    digitalWrite(row1, HIGH);
    digitalWrite(col4, LOW);
    return 1;
  }

  // d
  if(letter == 100){
    digitalWrite(row1, LOW);
    digitalWrite(col5, HIGH);
    delay(1000);
    digitalWrite(row1, HIGH);
    digitalWrite(col5, LOW);
    return 1;
  }

  // e
  if(letter == 101){
    digitalWrite(row1, LOW);
    digitalWrite(col6, HIGH);
    delay(1000);
    digitalWrite(row1, HIGH);
    digitalWrite(col6, LOW);
    return 1;
  }

  // f
  if(letter == 102){
    digitalWrite(row1, LOW);
    digitalWrite(col7, HIGH);
    delay(1000);
    digitalWrite(row1, HIGH);
    digitalWrite(col7, LOW);
    return 1;
  }

  // g
  if(letter == 103){
    digitalWrite(row1, LOW);
    digitalWrite(col8, HIGH);
    delay(1000);
    digitalWrite(row1, HIGH);
    digitalWrite(col8, LOW);
    return 1;
  }

  // h
  if(letter == 104){
    digitalWrite(row1, LOW);
    digitalWrite(col9, HIGH);
    delay(1000);
    digitalWrite(row1, HIGH);
    digitalWrite(col9, LOW);
    return 1;
  }

  // i
  if(letter == 105){
    digitalWrite(row2, LOW);
    digitalWrite(col1, HIGH);
    delay(1000);
    digitalWrite(row2, HIGH);
    digitalWrite(col1, LOW);
    return 1;
  }

  // j
  if(letter == 106){
    digitalWrite(row2, LOW);
    digitalWrite(col2, HIGH);
    delay(1000);
    digitalWrite(row2, HIGH);
    digitalWrite(col2, LOW);
    return 1;
  }

  // k
  if(letter == 107){
    digitalWrite(row2, LOW);
    digitalWrite(col3, HIGH);
    delay(1000);
    digitalWrite(row2, HIGH);
    digitalWrite(col3, LOW);
    return 1;
  }

  // l
  if(letter == 108){
    digitalWrite(row2, LOW);
    digitalWrite(col4, HIGH);
    delay(1000);
    digitalWrite(row2, HIGH);
    digitalWrite(col4, LOW);
    return 1;
  }

  // m
  if(letter == 109){
    digitalWrite(row2, LOW);
    digitalWrite(col5, HIGH);
    delay(1000);
    digitalWrite(row2, HIGH);
    digitalWrite(col5, LOW);
    return 1;
  }

  // n
  if(letter == 110){
    digitalWrite(row2, LOW);
    digitalWrite(col6, HIGH);
    delay(1000);
    digitalWrite(row2, HIGH);
    digitalWrite(col6, LOW);
    return 1;
  }

  // o
  if(letter == 111){
    digitalWrite(row2, LOW);
    digitalWrite(col7, HIGH);
    delay(1000);
    digitalWrite(row2, HIGH);
    digitalWrite(col7, LOW);
    return 1;
  }

  // p
  if(letter == 112){
    digitalWrite(row2, LOW);
    digitalWrite(col8, HIGH);
    delay(1000);
    digitalWrite(row2, HIGH);
    digitalWrite(col8, LOW);
    return 1;
  }

  // q
  if(letter == 113){
    digitalWrite(row2, LOW);
    digitalWrite(col9, HIGH);
    delay(1000);
    digitalWrite(row2, HIGH);
    digitalWrite(col9, LOW);
    return 1;
  }

  // r
  if(letter == 114){
    digitalWrite(row3, LOW);
    digitalWrite(col1, HIGH);
    delay(1000);
    digitalWrite(row3, HIGH);
    digitalWrite(col1, LOW);
    return 1;
  }

  // s
  if(letter == 115){
    digitalWrite(row3, LOW);
    digitalWrite(col2, HIGH);
    delay(1000);
    digitalWrite(row3, HIGH);
    digitalWrite(col2, LOW);
    return 1;
  }

  // t
  if(letter == 116){
    digitalWrite(row3, LOW);
    digitalWrite(col3, HIGH);
    delay(1000);
    digitalWrite(row3, HIGH);
    digitalWrite(col3, LOW);
    return 1;
  }

  // u
  if(letter == 117){
    digitalWrite(row3, LOW);
    digitalWrite(col4, HIGH);
    delay(1000);
    digitalWrite(row3, HIGH);
    digitalWrite(col4, LOW);
    return 1;
  }

  // v
  if(letter == 118){
    digitalWrite(row3, LOW);
    digitalWrite(col5, HIGH);
    delay(1000);
    digitalWrite(row3, HIGH);
    digitalWrite(col5, LOW);
    return 1;
  }

  // w
  if(letter == 119){
    digitalWrite(row3, LOW);
    digitalWrite(col6, HIGH);
    delay(1000);
    digitalWrite(row3, HIGH);
    digitalWrite(col6, LOW);
    return 1;
  }

  // x
  if(letter == 120){
    digitalWrite(row3, LOW);
    digitalWrite(col7, HIGH);
    delay(1000);
    digitalWrite(row3, HIGH);
    digitalWrite(col7, LOW);
    return 1;
  }

  // y
  if(letter == 121){
    digitalWrite(row3, LOW);
    digitalWrite(col8, HIGH);
    delay(1000);
    digitalWrite(row3, HIGH);
    digitalWrite(col8, LOW);
    return 1;
  }

  // z
  if(letter == 122){
    digitalWrite(row3, LOW);
    digitalWrite(col9, HIGH);
    delay(1000);
    digitalWrite(row3, HIGH);
    digitalWrite(col9, LOW);
    return 1;
  }

  // (space)
  if(letter == 32){
    
    delay(1500);
    return 1;
  }

}

