  char teclado;
  int  led1 = 12; 
  int  led2 = 13;

void setup() {
  // Função de configuração do arduino
  Serial.begin(9600);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // função para repetir  o algoritmo infinitamente...
  //  Chamando função if
  if (Serial.available()>0 ){

   teclado = Serial.read();

   switch (teclado){

    case 'L': 

     digitalWrite(led1, HIGH);
     digitalWrite(led2, LOW);

     break; 

     case 'D': 

     digitalWrite(led1, LOW);
     digitalWrite(led2, HIGH);
     
     break;

     case 'p': 

     for (int i = 0; i<4; i++) {

     digitalWrite(led1, HIGH); 
     delay(500);
     
     digitalWrite(led2, HIGH); 
     delay(500);
      
     digitalWrite(led1, LOW);
     delay(500);
       
     digitalWrite(led2, LOW);
     delay(500);



     }

     break;
   }


  }
  
}
