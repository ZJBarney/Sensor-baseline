void loop() {

server.handleClient();
  
//automatic on/off with timer based on sensor input
  irState = digitalRead(gpio4_pin);
  if (irState == HIGH) {
    digitalWrite(gpio0_pin, HIGH);
    sensorState = "Lights are on!!!!";
    Serial.println("LED is on");
    counter = 0;
  }
  else {
      if (counter == setTime){
      digitalWrite(gpio0_pin, LOW);
      sensorState = "Lights are off!!!!";
      Serial.println("LED is off");
      Serial.println(changes);
    }
    else{
      counter++;
      Serial.println(counter);
      if(counter == setTime){
        stateChanges++;
        changes =(String(stateChanges, DEC));
      }
      }
    }
delay(500);
}
