int pinstate = 0;//meghdare moteghayer pinstate ro barabare 0 gharar midim
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);//pin mode satate-> pinMode(pin number , OUTPUT or INPUT);
 // pinMode(13,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(13,HIGH);//pin 13 ro roshan kon  or digitalWrite(13,1);
delay (1000);//vaghfe 1 mili saniye
digitalWrite(13,LOW);//pin 13 ro roshan kon  or digitalWrite(13,0);
delay (2000);
pinstate = digitalRead(13);//meghdar vorodi payeha digitalo be man bar migadone 
}
