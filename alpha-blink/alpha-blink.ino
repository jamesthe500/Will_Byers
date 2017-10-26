#include <string.h>
// led long poles got to columns
// led short poles to rows

int row1 = D0;
int row2 = D2;
int row3 = D3;

int col1 = A0;
int col2 = D1;
int col3 = A1;
int col4 = A2;
int col5 = D4;
int col6 = D5;
int col7 = D6;
int col8 = A4;
int col9 = D7;


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
  Particle.function("letter_on", letterOn);
  Particle.function("letter_off", letterOff);

}

void loop() {
 /* todo, if I ever come back to this.
    Put a switch on the back of the board that allows the wearer to switch between auto-play and manual entry.
    Pick out some long text from the show. and put it in in here.
    Feed it into the parseIt function one word at a time, pausing between words to see if there is an incoming message,
    or the button was pushed. 
    It should loop indefinitely.
    
 */
   
   
}

int parseIt(String letters){
    /* for testing
    if(letters == "a"){
        letterOff("a");
        return 1;
    } else if (letters == "A") {
        letterOn("A");
        return 1;
    }*/
  if(letters == "run" || letters == "Run") {
    for (unsigned int i = 0; i < letters.length(); i++){
        signed char thisLetter = letters[i];
        //String thisLetter = letters.charAt(i);
        //spellIt(letters.charAt(i));
        spellIt(thisLetter, 800, 100);
    }
    unsigned int j = 97;
    for (unsigned int i = 0; i < 5200; i++){
      spellIt(j, 1, 0);
      j++;
      if (j == 123) {
        j = 97;
      }
    }

    return 1;
  }
  
  if (letters == "st"){
      letters = "stranger things";
  }
    if (letters == "wb"){
      letters = "will beyers";
  }
    if (letters == "rh"){
      letters = "right here";
  }
  
    
    for (unsigned int i = 0; i < letters.length(); i++){
        signed char thisLetter = letters[i];
        //String thisLetter = letters.charAt(i);
        //spellIt(letters.charAt(i));
        spellIt(thisLetter, 800, 100);
    }
    return 1;
}

int spellIt(signed char letter, unsigned int duration, unsigned int wait){
     // (space)
    if(letter == 32){
        delay(duration);
        return 1;
    } else {
        letterIndex(letter, true);
        delay(duration);
        letterIndex(letter, false);
        delay(wait);
        return 1;
    }
}

int letterOn(String letter){
    signed char thisLetter = letter[0];
    letterIndex(thisLetter, true);
    return 1;
}

int letterOff(String letter){
    signed char thisLetter = letter[0];
    letterIndex(thisLetter, false);
    return 1;
}

void letterTraffic(uint16_t rowNum, uint16_t colNum, bool makeOn){
    if(makeOn){
        digitalWrite(rowNum, LOW);
        digitalWrite(colNum, HIGH);
    } else {
        digitalWrite(rowNum, HIGH);
        digitalWrite(colNum, LOW);
    }
}

void letterIndex(signed char letter, bool makeOn){
  // a
  if(letter == 97 || letter == 65){
    letterTraffic(row1, col2, makeOn);
  }
  // b
  if(letter == 98 || letter == 66){
    letterTraffic(row1, col3, makeOn);
  }
  // c
  if(letter == 99 || letter == 67){
    letterTraffic(row1, col4, makeOn);
  }
  // d
  if(letter == 100 || letter == 68){
    letterTraffic(row1, col5, makeOn);
  }
  // e
  if(letter == 101 || letter == 69){
    letterTraffic(row1, col6, makeOn);
  }
  // f
  if(letter == 102 || letter == 70){
    letterTraffic(row1, col7, makeOn);
  }
  // g
  if(letter == 103 || letter == 71){
    letterTraffic(row1, col8, makeOn);
  }
  // h
  if(letter == 104 || letter == 72){
    letterTraffic(row1, col9, makeOn);
  }
  // i
  if(letter == 105 || letter == 73){
    letterTraffic(row2, col1, makeOn);
  }
  // j
  if(letter == 106 || letter == 74){
    letterTraffic(row2, col2, makeOn);
  }
  // k
  if(letter == 107 || letter == 75){
    letterTraffic(row2, col3, makeOn);
  }
  // l
  if(letter == 108 || letter == 76){
    letterTraffic(row2, col4, makeOn);
  }
  // m
  if(letter == 109 || letter == 77){
    letterTraffic(row2, col5, makeOn);
  }
  // n
  if(letter == 110 || letter == 78){
    letterTraffic(row2, col6, makeOn);
  }
  // o
  if(letter == 111 || letter == 79){
    letterTraffic(row2, col7, makeOn);
  }
  // p
  if(letter == 112 || letter == 80){
    letterTraffic(row2, col8, makeOn);
  }
  // q
  if(letter == 113 || letter == 81){
    letterTraffic(row2, col9, makeOn);
  }
  // r
  if(letter == 114 || letter == 82){
    letterTraffic(row3, col1, makeOn);
  }
  // s
  if(letter == 115 || letter == 83){
    letterTraffic(row3, col3, makeOn);
  }
  // t
  if(letter == 116 || letter == 84){
    letterTraffic(row3, col3, makeOn);
  }
  // u
  if(letter == 117 || letter == 85){
    letterTraffic(row3, col4, makeOn);
  }
  // v
  if(letter == 118 || letter == 86){
    letterTraffic(row3, col5, makeOn);
  }
  // w
  if(letter == 119 || letter == 87){
    letterTraffic(row3, col6, makeOn);
  }
  // x
  if(letter == 120 || letter == 88){
    letterTraffic(row3, col7, makeOn);
  }
  // y
  if(letter == 121 || letter == 89){
    letterTraffic(row3, col8, makeOn);
  }
  // z
  if(letter == 122 || letter == 90){
    letterTraffic(row3, col9, makeOn);
  }
}
