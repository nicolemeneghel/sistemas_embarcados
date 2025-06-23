# define pin_led1 12
# define pin_led2 11
# define pin_led3 10
# define pin_led4 9
# define pin_botao1 4
# define pin_botao2 3
# define pin_botao3 2

void setup() {

  digitalWrite(pin_led1, OUTPUT);
  digitalWrite(pin_led2, OUTPUT);
  digitalWrite(pin_led3, OUTPUT);
  digitalWrite(pin_led4, OUTPUT);
  digitalWrite(pin_botao1, INPUT);
  digitalWrite(pin_botao2, INPUT);
  digitalWrite(pin_botao3, INPUT);

}

void loop() {

  bool alto = digitalRead(pin_botao1);
  bool baixo = digitalRead(pin_botao2);

  if (baixo == 1) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, HIGH);
  } else {
    if (alto == 1) {
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led2, LOW);
    }
  }

}