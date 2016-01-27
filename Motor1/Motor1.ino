#define EMA 11
#define INA 4
#define INB 5
 
void setup()
{
pinMode(EMA, OUTPUT);
pinMode(INA, OUTPUT);
pinMode(INB, OUTPUT);
}
 
void loop()
{
//Establecemos la velocidad a 200
analogWrite(EMA, 255);
 
//Hacia delante
digitalWrite(INA, HIGH);
digitalWrite(INB, LOW);
 
//delay(1000);
 
//Y para atras
//digitalWrite(INA, LOW);
//digitalWrite(INB, HIGH);
 
//delay(1000);
}
