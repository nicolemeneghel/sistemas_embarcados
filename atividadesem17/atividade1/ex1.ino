#define pin_led1 8
#define pin_botao 2
#define intervalo 500
unsigned long tempo_anterior = 0;
bool estado = 0;
int cont = 0;
int aux = 0;


void setup() {

  pinMode(pin_led1, OUTPUT);
  pinMode(pin_botao, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {

  bool botao = !digitalRead(pin_botao);
  if (botao == 1 && aux == 0) {
    cont ++;
    aux += 1;
  } if (botao == 0) {
    aux = 0;
  }
    Serial.println(cont);
  

  if (cont % 2 == 1) {

    unsigned long tempo_atual = millis();
    if ((tempo_atual - tempo_anterior) >= intervalo) {
      estado = !estado;
      digitalWrite(pin_led1, estado);
      tempo_anterior = tempo_atual;
    }
  } else {
    digitalWrite(pin_led1, LOW);
  }
}
