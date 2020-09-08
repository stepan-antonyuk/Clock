
int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6
;
int pinF = 7;
int pinG = 8;
int D1 = 9;
int D2 = 10;
int D3 = 11;
int D4 = 12;
int n = 0;
int m = 0;
int k = 0;
int l = 0;
int cm = 1929;
int x = 0;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pins as outputs.
  Serial.begin(9600); // Starting Serial Terminal
  pinMode(pinA, OUTPUT);     
  pinMode(pinB, OUTPUT);     
  pinMode(pinC, OUTPUT);     
  pinMode(pinD, OUTPUT);     
  pinMode(pinE, OUTPUT);     
  pinMode(pinF, OUTPUT);     
  pinMode(pinG, OUTPUT);   
  pinMode(D1, OUTPUT);  
  pinMode(D2, OUTPUT);  
  pinMode(D3, OUTPUT);  
  pinMode(D4, OUTPUT);
     
}

// the loop routine runs over and over again forever:
void loop() {
    if (cm % 100 == 60){
      cm += 40    ;
    }
    if (cm == 2400){
      cm = 0;
    }
    //13750 min
    //250 sec
    x = 0;
    while(x < 13750){
      digitalWrite(D1, LOW);
      digitalWrite(D2, HIGH);
      digitalWrite(D3, HIGH);
      digitalWrite(D4, HIGH);  
      
      n = cm / 1000;   
      switch (n) {
      case 0:
        // statements
        zero();
        break;
      case 1:
        // statements
        one();
        break;
      case 2:
        // statements
        two();
        break;
      case 3:
        // statements
        three();
        break;
      case 4:
        // statements
        four();
        break;
      case 5:
        // statements
        five();
        break;
      case 6:
        // statements
        six();
        break;
      case 7:
        // statements
        seven();
        break;
      case 8:
        // statements
        eight();
        break;
      case 9:
        // statements
        nine();
        break;
      default:
        // statements
        break;
      }             
      
      
      digitalWrite(D1, HIGH);
      digitalWrite(D2, LOW);
      digitalWrite(D3, HIGH);
      digitalWrite(D4, HIGH); 
      
      m = (cm - (n*1000))/100; 
      switch (m) {
      case 0:
        // statements
        zero();
        break;
      case 1:
        // statements
        one();
        break;
      case 2:
        // statements
        two();
        break;
      case 3:
        // statements
        three();
        break;
      case 4:
        // statements
        four();
        break;
      case 5:
        // statements
        five();
        break;
      case 6:
        // statements
        six();
        break;
      case 7:
        // statements
        seven();
        break;
      case 8:
        // statements
        eight();
        break;
      case 9:
        // statements
        nine();
        break;
      default:
        // statements
        break;
      }   
      
              
      digitalWrite(D1, HIGH);
      digitalWrite(D2, HIGH);
      digitalWrite(D3, LOW);
      digitalWrite(D4, HIGH); 
      
      k = (cm - (n*1000) - (m*100))/ 10;
      switch (k) {
      case 0:
        // statements
        zero();
        break;
      case 1:
        // statements
        one();
        break;
      case 2:
        // statements
        two();
        break;
      case 3:
        // statements
        three();
        break;
      case 4:
        // statements
        four();
        break;
      case 5:
        // statements
        five();
        break;
      case 6:
        // statements
        six();
        break;
      case 7:
        // statements
        seven();
        break;
      case 8:
        // statements
        eight();
        break;
      case 9:
        // statements
        nine();
        break;
      default:
        // statements
        break;
      }            
      
      
      digitalWrite(D1, HIGH);
      digitalWrite(D2, HIGH);
      digitalWrite(D3, HIGH);
      digitalWrite(D4, LOW); 
      
      l = (cm - (n*1000) - (m*100) - (k*10));
      switch (l) {
      case 0:
        // statements
        zero();
        break;
      case 1:
        // statements
        one();
        break;
      case 2:
        // statements
        two();
        break;
      case 3:
        // statements
        three();
        break;
      case 4:
        // statements
        four();
        break;
      case 5:
        // statements
        five();
        break;
      case 6:
        // statements
        six();
        break;
      case 7:
        // statements
        seven();
        break;
      case 8:
        // statements
        eight();
        break;
      case 9:
        // statements
        nine();
        break;
      default:
        // statements
        break;
      }
   x += 1;
   }
   cm += 1;          
}


void zero(){
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, LOW);   
  delay(1);                 
}
void one(){
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);   
  delay(1);               
}
void two(){
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, HIGH);     
  delay(1);     
}
void three(){
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, HIGH);     
  delay(1);  
}
void four(){
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH);     
  delay(1);             
}
void five(){
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH);     
  delay(1);
  
}
void six(){
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH);     
  delay(1);
}
void seven(){
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);     
  delay(1);  
}
void eight(){
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH);     
  delay(1);  
}
void nine(){
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH);     
  delay(1);
}

