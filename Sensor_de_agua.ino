int resval = 0;  // holds the value
int respin = A5; // sensor pin used
  
void setup() { 
 
  // start the serial console
  Serial.begin(9600);
} 
  
void loop() { 
   
  resval = analogRead(respin); //Read data from analog pin and store it to resval variable
   
  if (resval<=100){ Serial.println("Nível da água: Sem água"); } 
  else if (resval>100 && resval<=400){ Serial.println("Nível da água: Baixo"); } 
  else if (resval>400 && resval<=600){ Serial.println("Nível da água: Medio"); } else if (resval>600){ 
    Serial.println("Nível da água: Alto"); 
  }
  delay(1000); 
}

