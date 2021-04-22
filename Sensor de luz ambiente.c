int pinoLed=11;//posição onde se encontra o led
int pinoSensorLuz=A0;//posição onde será ligado com A0 do arduino
int valorLuz=0;//váriavel para definir quando será irá acender.

void setup() {
  // put your setup code here, to run once:
  pinMode(pinoLed,OUTPUT);//defini a porta do led como saída
}

void loop() {
  // put your main code here, to run repeatedly:
  valorLuz= analogRead(pinoSensorLuz);
  if(valorLuz<750){
    digitalWrite(pinoLed,HIGH);//Acender o led
  }else{
    digitalWrite(pinoLed,LOW);//Apagar o led
  }
    delay(10);//intervalo de tempo em milissegundo
}
