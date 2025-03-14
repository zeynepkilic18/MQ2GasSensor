int eskiDeger=1000;
int buzzerPin=9;  // Buzzer is connected to pin 9
int deger=0; // Variable to store sensor value

void setup() {
  pinMode(buzzerPin,OUTPUT);

}

void loop() {
  deger=analogRead(A0);  // Read analog value from A0 pin

  if(deger> eskiDeger){
    digitalWrite(buzzerPin,HIGH); // Turn on the buzzer
    delay(100);  // Wait for 100 ms
    digitalWrite(buzzerPin,LOW);
    delay(100);
  }
  else{
    digitalWrite(buzzerPin,LOW);  // Keep buzzer off
  }

}