void setup() {
  pinMode(11,OUTPUT);//defini a porta do led como saída
}
void loop() {
    digitalWrite(11,HIGH);//Acender o led
    delay(1000);//Intervalo de tempo em milissegundo
    digitalWrite(11,LOW);//Apagar o led
    delay(1000);//intervalo de tempo em milissegundo
}
