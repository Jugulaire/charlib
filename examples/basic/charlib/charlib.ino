/* 
 *  Created by Jugulaire
 *  This is an demo of the lib
 *  Tested with 4x4 matrix with 5 pin 
 *  Pin are connected to D6 -> D2
 */

#include <charlib.h>

//Define number of pin on the matrix 
#define NbPin 5

//Define pins were matrix is plugged
byte pins[] = {2,3,4,5,6};

//initialize charlib
charlib charlieplex = charlib(pins,NbPin);

//Addr of every led on the matrix
charliePin led1 = { 0 , 3 }; //led1 is lighting with current in D2 to D5
charliePin led2 = { 0 , 2 };
charliePin led3 = { 0 , 1 };
charliePin led4 = { 1 , 0 };
charliePin led5 = { 1 , 3 };
charliePin led6 = { 1 , 2 };
charliePin led7 = { 2 , 1 };
charliePin led8 = { 2 , 0 };
charliePin led9 = { 2 , 3 };
charliePin led10 = { 3 , 2 };
charliePin led11 = { 3 , 1 };
charliePin led12 = { 3 , 0 };
charliePin led13 = { 4 , 3 };
charliePin led14 = { 4 , 2 };
charliePin led15 = { 4 , 1 };
charliePin led16 = { 4 , 0 };


void setup(){ /*no setup needed*/ }

void loop(){
  
 
  charlieplex.write(led1,HIGH); //light up the first led 
  delay(100); //wait 
  charlieplex.kill();  //kill it
  delay(100);
  
  charlieplex.write(led4,HIGH); //light up led 4 
  delay(100); //wait 
  charlieplex.kill();  //kill it
  delay(100);
   
}

