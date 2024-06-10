   // toto lo que esta con doble barra diagonal o entre /* y */ se llaman comentarios y no se ejecutan como codigo 

/* Lo de abajo se llamasn variables, las variables tienen un tipo de dato, 
 *  ej: el int quiere decir que es un numero entrero 
 *  luego viene el nombre de la variable = valor de la variable
 *  en este caso estas variables definen los pines que comunican la placa arduino con el driver que maneja los motores
*/

int ENA = 10;      // ENA de L298N a pin digital 5  en quiere decir enable o habilitado y A es el lado
//derecho
int IN1 = 9;      // IN1 de L298N a pin digital 
int IN2 = 8;      // IN2 de L298N a pin digital
//izquierdo
int IN3 = 7;      // IN2 de L298N a pin digital
int IN4 = 6;      // IN3 de L298N a pin digital

int ENB = 5;      // ENb de L298N a pin digital

// Esta parte del codigo se ejecuta una sola vez 
void setup() {
  // estas son deficiniones necesarias para que funcione el codigo
  pinMode(ENA, OUTPUT);   // ENA como salida
  pinMode(ENB, OUTPUT);   // ENB como salida
  pinMode(IN1, OUTPUT);   // IN1 como salida  
  pinMode(IN2, OUTPUT);   // IN2 como salida
  pinMode(IN3, OUTPUT);   // IN3 como salida
  pinMode(IN4, OUTPUT);   // IN4 como salida
}


// Esta parte del codigo se ejecuta en loop es decir que se ejecuta y se vuelve a ejecutar
void loop() {
  

  analogWrite(ENA, 255);  // En quiere decir enable del lado a en este caso y despues de la , define la velocidad que va desde 0 a 255
  analogWrite(ENB, 255);  // ENB define el lado B


  // define el lado hacia el que gira el lado A
  digitalWrite(IN1,HIGH);  
  digitalWrite(IN2,LOW);

  // define el lado hacia el que gira el lado B
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
}
