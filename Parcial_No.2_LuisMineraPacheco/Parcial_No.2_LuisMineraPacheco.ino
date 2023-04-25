

//// Definición de los pines de los LEDs
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;


void setup() {
//  // Configuración de los pines de los LEDs como salida
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  
 

//  // Configuración del puerto serial
  Serial.begin(9600);
}

void loop() {
  // CONFIGURO MI PUERTO SERIAL
  if (Serial.available() > 0) {
   
    char mensaje = Serial.read();
    // DECLARAMOS QUE EL MENSAJE QUE DEBE DE RECIBIR ES '2'
    if (mensaje == '2') {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
     
      delay(1000);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
     
      delay(2000);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
    
    }
    
   
  }
}
