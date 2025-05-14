#define BUZZER_PIN 8 
#define BTN_PIN 7 
 
int sensor; 
int led=13; 
 
void setup(){ 
  Serial.begin(9600); 
pinMode(BUZZER_PIN, OUTPUT); 
} 
void loop(){ 
  sensor = analogRead(A0); // Khandane Meghdare Sensor Photocell 
  
  Serial.print("Sensor Value= "); 
  Serial.println(sensor); 
  delay(300); 
   
  if( sensor > 800){ 
    digitalWrite(BUZZER_PIN,LOW); 
  } 
  else{ 
    digitalWrite(BUZZER_PIN, HIGH); 
  } 
}
