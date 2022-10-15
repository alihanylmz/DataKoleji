const int LEDdizisi[] = {2,3,4,5,6,7,8,9};
int potdeger;
int pot = A0;
int ldr = A1;
int ldrdeger;

void setup () {     
  for(int i=0; i<8 ;i++)    
  { /* For dongusuyle LEDdizisi elemanlarina ulasiyoruz */
    pinMode(LEDdizisi[i], OUTPUT); /* LED pinleri cikis olarak ayarlandi */
  }

}


void loop() {                  
 potdeger = analogRead(pot);
 ldrdeger = analogRead(ldr);
 potdeger = map(potdeger,0,1023,25,100);


  if(ldrdeger < 500 ) {
    for(int i=0; i<8; i++){ /* Tum LEDleri sirayla 50 milisaniye yakip sonduruyoruz */
      digitalWrite(LEDdizisi[i],HIGH);      
      delay(potdeger);                           
      digitalWrite(LEDdizisi[i],LOW);         
    }

  for(int j=7;j>-1; j--)
  { /* LEDleri geri yonde 50 milisaniye yakip sonduruyoruz */
    digitalWrite(LEDdizisi[j],HIGH);     
    delay(potdeger);
    digitalWrite(LEDdizisi[j], LOW);
   }
  }
 }
