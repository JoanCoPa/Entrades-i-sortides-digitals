/*************************************************************************
**                                                                      **
**                            Progrema 5 ex. 1                          **
**                                                                      **
*************************************************************************/

 
//****** Includes ********************************************************


//****** Variables *******************************************************
int led1 =2;
int led2 =3;
int led3 =4;
int led4 =5;
int led5 =6;
int led6 =7;
int led7 =8;
int led8 =9;
int led9 =10;
int trans1 =11;
int trans2 =12;
int trans3 =13;


void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT); //Fila

  pinMode(trans1, INPUT);
  pinMode(trans2, INPUT);
  pinMode(trans3, INPUT);//Columna

}

void loop()
{ //A cada apartat s'escriu el led de la columna que vols que s'encengui
  digitalWrite(trans1, HIGH);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, HIGH);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, HIGH);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, HIGH);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, HIGH);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, HIGH);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, HIGH);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, HIGH);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, HIGH);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, HIGH);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, HIGH);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, HIGH);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, HIGH);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, HIGH);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, HIGH);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, HIGH);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, HIGH);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, HIGH);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, HIGH);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, LOW);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(500);

  digitalWrite(trans1, HIGH);
  digitalWrite(trans2, HIGH);
  digitalWrite(trans3, HIGH);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  delay(500);

  digitalWrite(trans1, LOW);
  digitalWrite(trans2, LOW);
  digitalWrite(trans3, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  delay(500);

}
