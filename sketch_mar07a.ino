#include<LiquidCrystal.h>
#include<String.h>
  double value=0;
  int ana=A2;
  
  int rs=12,en=11,d4=2,d5=3,d6=4,d7=5,i,j,z,l;
  LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup()
{
  pinMode(ana,INPUT);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("battery voltage");
  delay(1000);
  value=analogRead(ana)*5*4;
  value=value/1024;
  

}

void loop() 
{
        lcd.setCursor(0,1);
        lcd.print(value);
        delay(500);
      
    
}
