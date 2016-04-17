/*************************************************************************
**                                                                      **
**                            Progrema 1 ex. 3                          **
**                                                                      **
*************************************************************************/

 
//****** Includes ********************************************************


//****** Variables *******************************************************
int led [] = {5,6,7,8,9,10,11,12};
int i = 0;  

//****** secup ***********************************************************
void setup() { 
  for (i = 0; i < 21; i++)
 {
  pinMode (led[i], OUTPUT);//Així es confguren els leds de sortida Michael
 }
}

//****** Loop ************************************************************
void loop() {
  for (i = 0; i < 8; i++)
 {
  digitalWrite (led[i], HIGH);
  delay(40);
  digitalWrite (led[i], LOW);
  delay(40); //D'aquesta manera no cal escriure led per led :)
 }
  
  for (i = 7; i >= 0; i--)
 {
  digitalWrite (led[i], HIGH);
  delay(40);
  digitalWrite (led[i], LOW);
  delay(40);
 }
}
