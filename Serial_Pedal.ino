const int button1 = 3; 
const int button2 = 4; 
const int button3 = 5; 
const int button4 = 6; 
const int button5 = 7; 
const int button6 = 8; 
const int button7 = 9; 
const int button8 = 10; 

int button1State = 1;
int button1LastState = 0;

int button2State = 1;
int button2LastState = 0;

int button3State = 1;
int button3LastState = 0;

int button4State = 1;
int button4LastState = 0;

int button5State = 1;
int button5LastState = 0;

int button6State = 1;
int button6LastState = 0;

int button7State = 1;
int button7LastState = 0;

int button8State = 1;
int button8LastState = 0;



void setup() {
  Serial.begin(9600);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);
  pinMode(button5, INPUT_PULLUP);
  pinMode(button6, INPUT_PULLUP);
  pinMode(button7, INPUT_PULLUP);
  pinMode(button8, INPUT_PULLUP);
}

void loop() {
  button1State = digitalRead(button1);
  button2State = digitalRead(button2);
  button3State = digitalRead(button3);
  button4State = digitalRead(button4);
  button5State = digitalRead(button5);
  button6State = digitalRead(button6);
  button7State = digitalRead(button7);
  button8State = digitalRead(button8);
  //1
  if (button1State != button1LastState && button1State == LOW) {
    Serial.println("A");
    button1LastState = button1State;
  }
  else {
    button1LastState = button1State;
  }
  //2
  if (button2State != button2LastState && button2State == LOW) {
    Serial.println("B");
    button2LastState = button2State;
  }
  else {
    button2LastState = button2State;
  }
  //3
  if (button3State != button3LastState && button3State == LOW) {
    Serial.println("C");
    button3LastState = button3State;
  }
  else {
    button3LastState = button3State;
  }
  //4
  if (button4State != button4LastState && button4State == LOW) {
    Serial.println("D");
    button4LastState = button4State;
  }
  else {
    button4LastState = button4State;
  }
  //5
  if (button5State != button5LastState && button5State == LOW) {
    Serial.println("E");
    button5LastState = button5State;
  }
  else {
    button5LastState = button5State;
  }
  //6
  if (button6State != button6LastState && button6State == LOW) {
    Serial.println("H");
    button6LastState = button6State;
  }
  else {
    button6LastState = button6State;
  }

  //7
  if (button7State != button7LastState && button7State == LOW) {
    Serial.println("F");
    button7LastState = button7State;
  }
  else {
    button7LastState = button7State;
  }
  //8
  if (button8State != button8LastState && button8State == LOW) {
    Serial.println("G");
    button8LastState = button8State;
  }
  else {
    button8LastState = button8State;
  }

  delay(10);
}
