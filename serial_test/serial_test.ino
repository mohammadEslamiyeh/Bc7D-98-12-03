#define photocel A0
#define rele D12
int analogval= 0;
void setup() {
  // put your setup code here, to run once:
 pinMode(12,OUTPUT);
  Serial.begin(9600);//9600 az bord rate 

}

void loop() {
  // put your main code here, to run repeatedly:

  analogval=  analogRead(photocel);//meghdare analogval ro 
  Serial.println("Analog Value: "+String(analogval)); /*String(analogval) miad meghdare intemono be string tabdil mikonim va print mikonim -->Ln bade println miad meghdare badi 
  ke mikhad to khoroji namayesh bede to khate bad namayesh bede*/
  
if (analogval < 250 ){//agar meghdare analogval pain taraz 250 amad bia pin 12 mono meghdaresho 0 (LOW) gharar bede
  digitalWrite(12,0 );
 
  
}else{
  digitalWrite(12,1);
  
}
  
delay(500);
  
  //delay(1000);
  
}
