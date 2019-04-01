//Right motor
int rbForward = 6;
int rbReverse = 7;
int rfForward = 8;
int rfReverse = 9;

//Left motor
int lbForward = 10;
int lbReverse = 11;
int lfForward = 12;
int lfReverse = 13;

int state = -1;
char command;
int ledPin = 6;

void setup()
{
  Serial.begin(9600);

  pinMode( rbForward, OUTPUT);
  pinMode( rbReverse, OUTPUT);
  pinMode( rfForward, OUTPUT);
  pinMode( rfReverse, OUTPUT);
  pinMode(lbForward, OUTPUT);
  pinMode(lbReverse, OUTPUT);
  pinMode(lfForward, OUTPUT);
  pinMode(lfReverse, OUTPUT);

  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {

  forward();
  delay(5000);

  reverse();
  delay(5000);

  left();
  delay(5000);

  right();
  delay(5000);

  stopp();
  delay(5000);
}

void forward()
{

  digitalWrite(lbForward, HIGH);
  digitalWrite(rbForward, HIGH);
  digitalWrite(lfForward, HIGH);
  digitalWrite(rfForward, HIGH);

  digitalWrite(lbReverse, LOW);
  digitalWrite(rbReverse, LOW);
  digitalWrite(lfReverse, LOW);
  digitalWrite(rfReverse, LOW);
}

void reverse()
{
  digitalWrite(lbReverse, HIGH);
  digitalWrite(rbReverse, HIGH);
  digitalWrite(lfReverse, HIGH);
  digitalWrite(rfReverse, HIGH);

  digitalWrite(lbForward, LOW);
  digitalWrite(rbForward, LOW);
  digitalWrite(lfForward, LOW);
  digitalWrite(rfForward, LOW);
}

void stopp()
{
  digitalWrite(lfReverse, LOW);
  digitalWrite(rfReverse, LOW);
  digitalWrite(lbReverse, LOW);
  digitalWrite(rbReverse, LOW);

  digitalWrite(lfForward, LOW);
  digitalWrite(rfForward, LOW);
  digitalWrite(lbForward, LOW);
  digitalWrite(rbForward, LOW);
}

void right()
{
  digitalWrite(lbForward, HIGH);
  digitalWrite(rbForward, HIGH);
  digitalWrite(lfForward, HIGH);
  digitalWrite(rfForward, LOW);

  digitalWrite(lbReverse, LOW);
  digitalWrite(rbReverse, LOW);
  digitalWrite(lfReverse, LOW);
  digitalWrite(rfReverse, LOW);
}

void left()
{
  digitalWrite(lbForward, HIGH);
  digitalWrite(rbForward, HIGH);
  digitalWrite(lfForward, LOW);
  digitalWrite(rfForward, HIGH);

  digitalWrite(lbReverse, LOW);
  digitalWrite(rbReverse, LOW);
  digitalWrite(lfReverse, LOW);
  digitalWrite(rfReverse, LOW);
}
