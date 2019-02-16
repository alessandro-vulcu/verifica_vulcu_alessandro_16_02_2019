int ledbianco = 4;
int ledverde = 6;
int ledgiallo = 8;
int ledrosso = 10;
int spegnimento_rg;
int spegnimento_vb;
int casuale1;
int casuale2;
int cicli;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledbianco, OUTPUT);
  pinMode(ledverde, OUTPUT);
  pinMode(ledgiallo, OUTPUT);
  pinMode(ledrosso, OUTPUT);
  casuale1 = random(250,5000);
  casuale2 = random(250,5000);
  Serial.begin(9600);
  //durata_spegnimento_1();
  //durata_spegnimento_2();

}
void ciclo(){
  Serial.println("dopo quanti cicli vuoi far ricominciare il programma?");
  while(Serial.available() == 0);
  cicli = Serial.readString().toInt();
  Serial.print("Hai inserito: ");
  Serial.println(cicli);
}
/*void durata_spegnimento_1(){
  Serial.println("Inserisci la durata di spegnimento in millisecondi dei led rosso e giallo");
  while(Serial.available() == 0);
  spegnimento_rg = Serial.readString().toInt();
  Serial.print("Hai inserito: ");
  Serial.println(spegnimento_rg);
}
void durata_spegnimento_2(){
  Serial.print("Inserisci la durata di spegnimento in millisecondi dei led verde e bianco");
  while(Serial.available() == 0);
  spegnimento_vb = Serial.readString().toInt();
  Serial.print("Hai inserito: ");
  Serial.println(spegnimento_vb);
}

void rosso_giallo(){
  digitalWrite(ledrosso, HIGH);
  digitalWrite(ledgiallo, HIGH);
  delay(spegnimento_rg);
  digitalWrite(ledrosso, LOW);
  digitalWrite(ledgiallo, LOW);
}
void verde_bianco(){
  digitalWrite(ledverde, HIGH);
  digitalWrite(ledbianco, HIGH);
  delay(spegnimento_vb);
  digitalWrite(ledverde, LOW);
  digitalWrite(ledbianco, LOW);
}
*/
void rosso_giallo(){
  digitalWrite(ledrosso, HIGH);
  digitalWrite(ledgiallo, HIGH);
  delay(casuale1);
  digitalWrite(ledrosso, LOW);
  digitalWrite(ledgiallo, LOW);
}
void verde_bianco(){
  digitalWrite(ledverde, HIGH);
  digitalWrite(ledbianco, HIGH);
  delay(casuale2);
  digitalWrite(ledverde, LOW);
  digitalWrite(ledbianco, LOW);
}
void loop() {
  // put your main code here, to run repeatedly:
    //rosso_giallo();
    //verde_bianco();
  
  ciclo();
  for(int i = 0; i < cicli; i++){
    rosso_giallo();
    verde_bianco();
  }
  setup();
  
}
