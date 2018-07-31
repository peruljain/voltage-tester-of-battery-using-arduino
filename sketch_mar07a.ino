#include<LiquidCrystal.h>
#include<String.h>
  double value=0;
  int ana=A2;
  
  int rs=12,en=11,d4=2,d5=3,d6=4,d7=5,i,j,z,l;
  LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup()
{
  pinMode(ana,INPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("battery voltage");
  delay(1000);
  value=analogRead(ana)*5*4; //multiplied by 4 because i am using 4 427-428 K OHM resistance to increase range upto 20 v. if i will not use this will have range of 0-5 V only
  value=value/1024; 

}

void loop() 
{
        lcd.setCursor(0,1);
        lcd.print(value);
        delay(500);
      
    
}
