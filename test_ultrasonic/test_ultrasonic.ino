#define trig 13
#define echo 12
#define rele 11


void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,INPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trig,LOW);//baraye moghavaemat full up amadim sefresh kardim
  delayMicroseconds(2);//2 micro saniye ye vaghfe bendaz
  digitalWrite(trig,HIGH);// bia trig 
  delayMicroseconds(10);// micro sanite
  digitalWrite(trig,LOW);//bad az 10 saniye miam khamoshesh mikonanimm va miam meghdaresho chaeck mikonim
  const unsigned long duration = pulseIn(echo,HIGH);// miam meghdare echo ro roshan mikonim  va ba tabe pulsein meghdaresho mikhonim
  int distance= duration/29/2;//29 bekhatere sorat sote va 2 ham bareye nesf kardan zaman rafto bargasht
  Serial.println("distance is : " + String(distance));//namayesh meghdare 
    if (distance < 5 ){
      digitalWrite(11,LOW); 
}else{
  
  digitalWrite(11,HIGH );
}
  delay(500); //mili saniye
}
