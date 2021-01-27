char Signal;
 
void setup() {
pinMode(13,OUTPUT);  
pinMode(12,OUTPUT);   
pinMode(11,OUTPUT);   
pinMode(10,OUTPUT); 
Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(Signal == '1'){           
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
}
 
else if(Signal == '2'){      
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
}
 
else if(Signal == '3'){      
  digitalWrite(11,HIGH);
}
 
else if(Signal == '4'){      
  digitalWrite(13,HIGH);
}

else if(Signal == '7'){      
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}
delay(100);
}
