// Projeto - Dó Ré Mi com sensor de luz ambiente

#define DO 262
#define RE 294
#define MI 330
#define FA 349
#define SOL 392
#define LA 440
#define SI 494
#define DO_2 523

int pinoBuzzer = 6;
int melodia[] = {
DO, RE, MI, FA, SOL, LA, SI, DO_2
};
int pinoLed = 13;
int pinoSensorLuz = A0;
int valorLuz = 0;
void setup() {
// configura pino do buzzer como saída
pinMode(pinoBuzzer,OUTPUT);
pinMode(pinoLed,OUTPUT);
}
void loop() {
valorLuz = analogRead(pinoSensorLuz);
if(valorLuz<200)
{
digitalWrite(pinoLed,HIGH);
for(int i=0; i<8; i++)
{
tone(pinoBuzzer, melodia[i]);
delay(500);
valorLuz = analogRead(pinoSensorLuz);
if(valorLuz >= 200){
break;
}
}
noTone(pinoBuzzer);
}
else
{
digitalWrite(pinoLed,LOW);
}
//delay(10);
}
