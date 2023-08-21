#include <Servo.h>
#define noOfthrusters 7;
Servo ESC[noOfthrusters];
int thtPin[noOfthrusters] = {PA0,PA1,PA2,PA3,PA6,PA7,PB0};                

void setup() {
  int i;
  for(i=0;i<noOfthrusters;i++)
  {
    ESC[i].attach(thtPin[i]);
    ESC[i].writeMicroseconds(1500);
  }        
      
  delay(5000);       

}

void loop() {
  //int potVal = analog.read(potPin);   //Reading the potentiometer value
  //int pwmVal = map(potVal,0,1023,1100,1900); //Converting to pwm value
  //ESC.writeMicroseconds(pwmVal); //Sending the PWM signal outu
  
}
void thruster(int pwmVal[])
{
  int i;
  for(i=0;i<noOfthrusters;i++)
  {
    ESC[i].writeMicroseconds(pwmVal[i]);
  }
}