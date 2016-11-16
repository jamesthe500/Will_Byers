#include <string.h>
// led long poles go to columns
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

}

void loop() {
 /* todo, if I ever come back to this.
    Put a switch on the back of the board that allows the wearer to switch between auto-play and manual entry.
    Pick out some long text from the show. and put it in in here.
    Feed it into the parseIt function one word at a time, pausing between words to see if there is an incoming message,
    or the button was pushed. 
    It should loop indefinitely.
    
 */
    
    // up to 3 lights on at a time
    // variable for light timing 1,2,3
    // var for coordinates of 1,2,3
    
    // ON section
    // a light# timer is set to millis() + duration
    // the row and column are activated
    
    // OFF section
    // if light 1 (2,3) are equal or beyond their end
    // the row and column are deactivated
    
   
}

int parseIt(String letters){
    if(letters == "run") {
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
    
    // for a string that's received,
    // strip it of non alpha characters?
    // count the characters
    // somehow it needs to time the sending of each letter...
    // the string is stored in a var 
    // so is the wait duration
    // another var for the "first"
    // the first letter is popped off and ignited
    // in the off condition, it calls this function again, sets "first" to false and sets a timer for the on condition.
    // there will have to be an "on" var for each of the three lights, so we know whether it's waiting to be on or off.
    // also in the off condition is setting the light timer to 0.
    
    // Somewhere in the calling, it should try to claim light 1, 2, then 3. Looking for a 0 value. This wouldn't apply for strings, only push buttons.
    // If all three are taken, it just ignores that command? This seems problematic.
    
    // touchscreen would be like a momentary switch, so no timer. It just turns it on. When it hears a "finger release" it turns it off.
    
    // Can there be an object so if strings are received while one string is running, they can be spooled up?
    
    // put the index of letters in a different function?
    // so it can be used by a push button function?
    
  // a
  if(letter == 97 || letter == 65){
    digitalWrite(row1, LOW);
    digitalWrite(col2, HIGH);
    delay(duration);
    digitalWrite(row1, HIGH);
    digitalWrite(col2, LOW);
    delay(wait);
    return 1;
  }
  // b
  if(letter == 98 || letter == 66){
    digitalWrite(row1, LOW);
    digitalWrite(col3, HIGH);
    delay(duration);
    digitalWrite(row1, HIGH);
    digitalWrite(col3, LOW);
    delay(wait);
    return 1;
  }
  // c
  if(letter == 99 || letter == 67){
    digitalWrite(row1, LOW);
    digitalWrite(col4, HIGH);
    delay(duration);
    digitalWrite(row1, HIGH);
    digitalWrite(col4, LOW);
    delay(wait);
    return 1;
  }

  // d
  if(letter == 100 || letter == 68){
    digitalWrite(row1, LOW);
    digitalWrite(col5, HIGH);
    delay(duration);
    digitalWrite(row1, HIGH);
    digitalWrite(col5, LOW);
    delay(wait);
    return 1;
  }

  // e
  if(letter == 101 || letter == 69){
    digitalWrite(row1, LOW);
    digitalWrite(col6, HIGH);
    delay(duration);
    digitalWrite(row1, HIGH);
    digitalWrite(col6, LOW);
    delay(wait);
    return 1;
  }

  // f
  if(letter == 102 || letter == 70){
    digitalWrite(row1, LOW);
    digitalWrite(col7, HIGH);
    delay(duration);
    digitalWrite(row1, HIGH);
    digitalWrite(col7, LOW);
    delay(wait);
    return 1;
  }

  // g
  if(letter == 103 || letter == 71){
    digitalWrite(row1, LOW);
    digitalWrite(col8, HIGH);
    delay(duration);
    digitalWrite(row1, HIGH);
    digitalWrite(col8, LOW);
    delay(wait);
    return 1;
  }

  // h
  if(letter == 104 || letter == 72){
    digitalWrite(row1, LOW);
    digitalWrite(col9, HIGH);
    delay(duration);
    digitalWrite(row1, HIGH);
    digitalWrite(col9, LOW);
    delay(wait);
    return 1;
  }

  // i
  if(letter == 105 || letter == 73){
    digitalWrite(row2, LOW);
    digitalWrite(col1, HIGH);
    delay(duration);
    digitalWrite(row2, HIGH);
    digitalWrite(col1, LOW);
    delay(wait);
    return 1;
  }

  // j
  if(letter == 106 || letter == 74){
    digitalWrite(row2, LOW);
    digitalWrite(col2, HIGH);
    delay(duration);
    digitalWrite(row2, HIGH);
    digitalWrite(col2, LOW);
    delay(wait);
    return 1;
  }

  // k
  if(letter == 107 || letter == 75){
    digitalWrite(row2, LOW);
    digitalWrite(col3, HIGH);
    delay(duration);
    digitalWrite(row2, HIGH);
    digitalWrite(col3, LOW);
    delay(wait);
    return 1;
  }

  // l
  if(letter == 108 || letter == 76){
    digitalWrite(row2, LOW);
    digitalWrite(col4, HIGH);
    delay(duration);
    digitalWrite(row2, HIGH);
    digitalWrite(col4, LOW);
    delay(wait);
    return 1;
  }

  // m
  if(letter == 109 || letter == 77){
    digitalWrite(row2, LOW);
    digitalWrite(col5, HIGH);
    delay(duration);
    digitalWrite(row2, HIGH);
    digitalWrite(col5, LOW);
    delay(wait);
    return 1;
  }

  // n
  if(letter == 110 || letter == 78){
    digitalWrite(row2, LOW);
    digitalWrite(col6, HIGH);
    delay(duration);
    digitalWrite(row2, HIGH);
    digitalWrite(col6, LOW);
    delay(wait);
    return 1;
  }

  // o
  if(letter == 111 || letter == 79){
    digitalWrite(row2, LOW);
    digitalWrite(col7, HIGH);
    delay(duration);
    digitalWrite(row2, HIGH);
    digitalWrite(col7, LOW);
    delay(wait);
    return 1;
  }

  // p
  if(letter == 112 || letter == 80){
    digitalWrite(row2, LOW);
    digitalWrite(col8, HIGH);
    delay(duration);
    digitalWrite(row2, HIGH);
    digitalWrite(col8, LOW);
    delay(wait);
    return 1;
  }

  // q
  if(letter == 113 || letter == 81){
    digitalWrite(row2, LOW);
    digitalWrite(col9, HIGH);
    delay(duration);
    digitalWrite(row2, HIGH);
    digitalWrite(col9, LOW);
    delay(wait);
    return 1;
  }

  // r
  if(letter == 114 || letter == 82){
    digitalWrite(row3, LOW);
    digitalWrite(col1, HIGH);
    delay(duration);
    digitalWrite(row3, HIGH);
    digitalWrite(col1, LOW);
    delay(wait);
    return 1;
  }

  // s
  if(letter == 115 || letter == 83){
    digitalWrite(row3, LOW);
    digitalWrite(col2, HIGH);
    delay(duration);
    digitalWrite(row3, HIGH);
    digitalWrite(col2, LOW);
    delay(wait);
    return 1;
  }

  // t
  if(letter == 116 || letter == 84){
    digitalWrite(row3, LOW);
    digitalWrite(col3, HIGH);
    delay(duration);
    digitalWrite(row3, HIGH);
    digitalWrite(col3, LOW);
    delay(wait);
    return 1;
  }

  // u
  if(letter == 117 || letter == 85){
    digitalWrite(row3, LOW);
    digitalWrite(col4, HIGH);
    delay(duration);
    digitalWrite(row3, HIGH);
    digitalWrite(col4, LOW);
    delay(wait);
    return 1;
  }

  // v
  if(letter == 118 || letter == 86){
    digitalWrite(row3, LOW);
    digitalWrite(col5, HIGH);
    delay(duration);
    digitalWrite(row3, HIGH);
    digitalWrite(col5, LOW);
    delay(wait);
    return 1;
  }

  // w
  if(letter == 119 || letter == 87){
    digitalWrite(row3, LOW);
    digitalWrite(col6, HIGH);
    delay(duration);
    digitalWrite(row3, HIGH);
    digitalWrite(col6, LOW);
    delay(wait);
    return 1;
  }

  // x
  if(letter == 120 || letter == 88){
    digitalWrite(row3, LOW);
    digitalWrite(col7, HIGH);
    delay(duration);
    digitalWrite(row3, HIGH);
    digitalWrite(col7, LOW);
    delay(wait);
    return 1;
  }

  // y
  if(letter == 121 || letter == 89){
    digitalWrite(row3, LOW);
    digitalWrite(col8, HIGH);
    delay(duration);
    digitalWrite(row3, HIGH);
    digitalWrite(col8, LOW);
    delay(wait);
    return 1;
  }

  // z
  if(letter == 122 || letter == 90){
    digitalWrite(row3, LOW);
    digitalWrite(col9, HIGH);
    delay(duration);
    digitalWrite(row3, HIGH);
    digitalWrite(col9, LOW);
    delay(wait);
    return 1;
  }

  // (space)
  if(letter == 32){
    
    delay(duration);
    return 1;
  }

}
