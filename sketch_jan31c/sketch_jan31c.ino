String voice;
const int led1=5;
const int led2=6;
const int led3=7;
const int motr=8;
void allon(){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(motr,HIGH);
  Serial.println("ALL ON");
}
void alloff(){
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(motr,LOW);
  Serial.println("ALL OFF");
}
void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(motr,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available()) {
    delay(10);
    char c = Serial.read();
    if (c == '#') {
      break;
    }
    voice +=String(c);
    }
    
  if (voice.length() > 0) {
    Serial.println(voice);
    delay(300);
    if (String(voice) == String("red")) {
      Serial.println("Red ON");
      digitalWrite(led1, HIGH);
      
    }
    else if (String(voice) == String("read of")) {
      Serial.println("Red OFF");
      digitalWrite(led1, LOW);
    }
    else if (String(voice) == String("yellow on")) {
      Serial.println("Yellow ON");
      digitalWrite(led2, HIGH);
    }
    else if (String(voice) == String("yellow off")) {
      Serial.println("Yellow OFF");
      digitalWrite(led2, LOW);
    }
    else if (String(voice) == String("green on")) {
      Serial.println("Green ON");
      digitalWrite(led3, HIGH);
    }
    else if (String(voice) == String("green off")) {
      Serial.println("Green OFF");
      digitalWrite(led3, LOW);
    }
    else if (String(voice) == String("fan on")) {
      Serial.println("Fan ON");
      digitalWrite(motr, HIGH);
    }
    else if (String(voice) == String("fan off")) {
      Serial.println("Fan OFF");
      digitalWrite(motr, LOW);
    }
    else if (String(voice) == String("on")) {
      Serial.println("All OFF");
      allon();
    }
    else if (String(voice) == String("off")) {
      Serial.println("All OFF");
      alloff();
    }
    
    
    voice = "";
  }
}
