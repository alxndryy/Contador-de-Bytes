const int led1=2, led2=3, led3=4, led4=5, a=7, b=8, c=9, d=10, e=11, f=12, g=13;
int /*Conta os bits:*/bits=1, /*Conta os nibbles(4bits):*/Nibble=0, /*Conta os bytes:*/ByteCont=0, /*Verifica quando a contagem de bytes é 16, ou 32:*/verif=0;
void setup(){
  //Leds para a contagem de bits:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  //Led verificador para 16 bytes:
  pinMode(led3, OUTPUT);
  //Led verificador para 32 bytes:
  pinMode(led4, OUTPUT);
  //Display de 7 segmentos para a contagem dos bytes:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  //inicia a contagem de bits em 1:
  if(bits==1){
    digitalWrite(led2, 1);
    digitalWrite(led1, 0);
    delay(1000);
    bits++;
  }
  else if(bits==2){
    digitalWrite(led2, 0);
    digitalWrite(led1, 1);
    delay(1000);
    bits++;
  }
  else if(bits==3){
    digitalWrite(led2, 1);
    digitalWrite(led1, 1);
    delay(1000);
    bits++;
  }//Quando bits chega em 4, acresenta 1 nibble, e reincia sua contagem:
  else if(bits==4){
    digitalWrite(led2, 0);
    digitalWrite(led1, 0);
    delay(1000);
    bits=1;
    Nibble++;
  }
  //Quando nibble chega a 2, acrescenta 1 byte, e reinicia sua contagem:
  if(Nibble==2){
    Nibble=0;
    ByteCont++;
  }
  //Atualiza o display de 7 segmentos no valor de ByteCont até 16(em hexadecimal):
  switch(ByteCont){
    case 1:
      digitalWrite(a, 1);
      digitalWrite(b, 0);
      digitalWrite(c, 0);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      break;
    case 2:
      digitalWrite(a, 0);
      digitalWrite(b, 0);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      break;
    case 3:
      digitalWrite(a, 0);
      digitalWrite(b, 0);
      digitalWrite(c, 0);
      digitalWrite(d, 0);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      break;
    case 4:
      digitalWrite(a, 1);
      digitalWrite(b, 0);
      digitalWrite(c, 0);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      break;
    case 5:
      digitalWrite(a, 0);
      digitalWrite(b, 1);
      digitalWrite(c, 0);
      digitalWrite(d, 0);
      digitalWrite(e, 1);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      break;
    case 6:
      digitalWrite(a, 0);
      digitalWrite(b, 1);
      digitalWrite(c, 0);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      break;
    case 7:
      digitalWrite(a, 0);
      digitalWrite(b, 0);
      digitalWrite(c, 0);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      break;
    case 8:
      digitalWrite(a, 0);
      digitalWrite(b, 0);
      digitalWrite(c, 0);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      break;
    case 9:
      digitalWrite(a, 0);
      digitalWrite(b, 0);
      digitalWrite(c, 0);
      digitalWrite(d, 0);
      digitalWrite(e, 1);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      break;
    case 10:
      digitalWrite(a, 0);
      digitalWrite(b, 0);
      digitalWrite(c, 0);
      digitalWrite(d, 1);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      //A
      break;
    case 11:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 0);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      //B
      break;
    case 12:
      digitalWrite(a, 0);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 1);
      //C
      break;
    case 13:
      digitalWrite(a, 1);
      digitalWrite(b, 0);
      digitalWrite(c, 0);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 1);
      digitalWrite(g, 0);
      //D
      break;
    case 14:
      digitalWrite(a, 0);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 0);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      //E
      break;
    case 15:
      digitalWrite(a, 0);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 0);
      digitalWrite(f, 0);
      digitalWrite(g, 0);
      //F
      break;
    //Quando chega em 16 bytes, reinicia sua contagem, e acrescenta 1 a verif.
    case 16:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
      verif++;
      ByteCont=0;
      break;
    default:
      digitalWrite(a, 1);
      digitalWrite(b, 1);
      digitalWrite(c, 1);
      digitalWrite(d, 1);
      digitalWrite(e, 1);
      digitalWrite(f, 1);
      digitalWrite(g, 1);
  }
  //acende o primeiro led verificador:
  if(verif==1){
    digitalWrite(led3, 1);
  }//acende o segundo, e pisca todos 3 vezes:
  else if(verif==2){
    digitalWrite(led4, 1);
    digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
    delay(500);
    digitalWrite(led4, 0);
    digitalWrite(led3, 0);
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    delay(500);
    digitalWrite(led4, 1);
    digitalWrite(led3, 1);
    digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    delay(500);
    digitalWrite(led4, 0);
    digitalWrite(led3, 0);
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    delay(500);
    digitalWrite(led4, 1);
    digitalWrite(led3, 1);
    digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    delay(500);
    //reinicia toda a contagem:
    verif = 0;
    ByteCont = 0;
    Nibble = 0;
    bits = 1;
  } 
}
