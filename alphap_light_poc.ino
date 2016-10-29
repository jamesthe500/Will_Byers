int row1 = A0;
int row2 = A1;
int row3 = A2;

int col1 = D0;
int col2 = D1;
int col3 = D2;

//int spellIt(String command);

void setup() {

  pinMode(row1, OUTPUT);
  pinMode(row2, OUTPUT);
  pinMode(row3, OUTPUT);
  pinMode(col1, OUTPUT);
  pinMode(col2, OUTPUT);
  pinMode(col3, OUTPUT);

  Particle.function("a", spellIt);

}

void loop() {
  digitalWrite(row1, LOW);
  digitalWrite(col2, HIGH);
  delay(1000);
  digitalWrite(row1, HIGH);
  digitalWrite(col2, LOW);
    delay(1000);
}

int spellIt(String letters){
  if(letters == "a"){
    digitalWrite(row1, LOW);
    digitalWrite(col2, HIGH);
    delay(1000);
    digitalWrite(row1, HIGH);
    digitalWrite(col2, LOW);
    return 1;
  }

}
