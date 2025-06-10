#define botaoA 2
#define botaoB 3 
#define led1 8
#define led2 9
#define led3 10
#define led4 11

int contador = 0;
bool ultimoA = 0;
bool ultimoB = 0;
bool estadoA = 0;
bool estadoB = 0;
int i = 0;

void setup() {
 pinMode(botaoA, INPUT);
  pinMode(botaoB, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  estadoA = digitalRead(botaoA);
  if (estadoA != ultimoA){
    if (estadoA == 1){
      if (contador < 15){
        contador++;
        Serial.println(contador);
      }
    }
  }
  ultimoA = estadoA;

    estadoB = digitalRead(botaoB);
  if (estadoB != ultimoB){
    if (estadoB == 1){
      if (contador > 0){
        contador--;
        Serial.println(contador);
      }
    }
  }
  ultimoB = estadoB;

  if (contador % 2 == 1 || contador == 1){
    digitalWrite(led1, 1);
  }
  else{
    digitalWrite(led1,0);
  }

  i =contador ;
}
