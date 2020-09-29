
char val;
int sensorValue;
void setup() {
  pinMode(2,INPUT);
  pinMode(6,OUTPUT); 
  pinMode(7,OUTPUT);
  Serial.begin(9600);
   
 }

void loop() {
sensorValue = analogRead(0);
//Serial.print("AirQua=");
Serial.print(sensorValue, DEC);
Serial.print("\n");
delay(1000);
// prints the value read
//Serial.println(" PPM");

  if(Serial.available()){
      val =  Serial.read();
      Serial.println(val);
    }

    if(val=='1'){
      if(digitalRead(2)==HIGH){
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      } 
    else{
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      }
     }
      if(digitalRead(2)==HIGH){
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
    } 
   else{
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
    }
}
