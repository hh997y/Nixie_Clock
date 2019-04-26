#include <DS3231.h>
#include <avr/wdt.h>  
 
// Init the DS3231 using the hardware interface
DS3231  rtc(SDA, SCL);

String t1 = "0"; 
String t2 = "0";
String t3 = "0";
String t4 = "0";
String t5 = "0";
String t6 = "0";
String t0 = "0";

//H1
void numm1(String n1){
  if(n1 == "0"){
  digitalWrite(22,LOW);  //A
  digitalWrite(23,LOW);  //B
  digitalWrite(24,LOW);  //C
  digitalWrite(25,LOW);  //D
    }
  else if(n1 == "1"){
  digitalWrite(22,HIGH);  //A
  digitalWrite(23,LOW);  //B
  digitalWrite(24,LOW);  //C
  digitalWrite(25,LOW);  //D
    }
  else if(n1 == "2"){
  digitalWrite(22,LOW);  //A
  digitalWrite(23,HIGH);  //B
  digitalWrite(24,LOW);  //C
  digitalWrite(25,LOW);  //D  
    }
  else if(n1 == "3"){
  digitalWrite(22,HIGH);  //A
  digitalWrite(23,HIGH);  //B
  digitalWrite(24,LOW);  //C
  digitalWrite(25,LOW);  //D   
    }
  else if(n1 == "4"){
  digitalWrite(22,LOW);  //A
  digitalWrite(23,LOW);  //B
  digitalWrite(24,HIGH);  //C
  digitalWrite(25,LOW);  //D  
    }
  else if(n1 == "5"){
  digitalWrite(22,HIGH);   //A
  digitalWrite(23,LOW);  //B
  digitalWrite(24,HIGH);   //C
  digitalWrite(25,LOW);  //D
    }
  else if(n1 == "6"){
  digitalWrite(22,LOW);  //A
  digitalWrite(23,HIGH);  //B
  digitalWrite(24,HIGH);  //C
  digitalWrite(25,LOW);   //D
    }
  else if(n1 == "7"){
  digitalWrite(22,HIGH);   //A
  digitalWrite(23,HIGH);  //B
  digitalWrite(24,HIGH);  //C
  digitalWrite(25,LOW);  //D
    }
  else if(n1 == "8"){
  digitalWrite(22,LOW);  //A
  digitalWrite(23,LOW);  //B
  digitalWrite(24,LOW);  //C
  digitalWrite(25,HIGH);  //D
    }
  else if(n1 == "9"){
  digitalWrite(22,HIGH);  //A
  digitalWrite(23,LOW);  //B
  digitalWrite(24,LOW);  //C
  digitalWrite(25,HIGH);  //D
    }
  
  }

//H2
  void numm2(String n2){
  if(n2 == "0"){
  digitalWrite(26,LOW);  //A
  digitalWrite(27,LOW);  //B
  digitalWrite(28,LOW);  //C
  digitalWrite(29,LOW);  //D
    }
  else if(n2 == "1"){
  digitalWrite(26,HIGH);  //A
  digitalWrite(27,LOW);  //B
  digitalWrite(28,LOW);  //C
  digitalWrite(29,LOW);  //D
    }
  else if(n2 == "2"){
  digitalWrite(26,LOW);  //A
  digitalWrite(27,HIGH);  //B
  digitalWrite(28,LOW);  //C
  digitalWrite(29,LOW);  //D  
    }
  else if(n2 == "3"){
  digitalWrite(26,HIGH);  //A
  digitalWrite(27,HIGH);  //B
  digitalWrite(28,LOW);  //C
  digitalWrite(29,LOW);  //D   
    }
  else if(n2 == "4"){
  digitalWrite(26,LOW);  //A
  digitalWrite(27,LOW);  //B
  digitalWrite(28,HIGH);  //C
  digitalWrite(29,LOW);  //D  
    }
  else if(n2 == "5"){
  digitalWrite(26,HIGH);   //A
  digitalWrite(27,LOW);  //B
  digitalWrite(28,HIGH);   //C
  digitalWrite(29,LOW);  //D
    }
  else if(n2 == "6"){
  digitalWrite(26,LOW);  //A
  digitalWrite(27,HIGH);  //B
  digitalWrite(28,HIGH);  //C
  digitalWrite(29,LOW);   //D
    }
  else if(n2 == "7"){
  digitalWrite(26,HIGH);   //A
  digitalWrite(27,HIGH);  //B
  digitalWrite(28,HIGH);  //C
  digitalWrite(29,LOW);  //D
    }
  else if(n2 == "8"){
  digitalWrite(26,LOW);  //A
  digitalWrite(27,LOW);  //B
  digitalWrite(28,LOW);  //C
  digitalWrite(29,HIGH);  //D
    }
  else if(n2 == "9"){
  digitalWrite(26,HIGH);  //A
  digitalWrite(27,LOW);  //B
  digitalWrite(28,LOW);  //C
  digitalWrite(29,HIGH);  //D
    }
  
  }

//M1
  void numm3(String n3){
  if(n3 == "0"){
  digitalWrite(37,LOW);  //A
  digitalWrite(36,LOW);  //B
  digitalWrite(35,LOW);  //C
  digitalWrite(34,LOW);  //D
    }
  else if(n3 == "1"){
  digitalWrite(37,HIGH);  //A
  digitalWrite(36,LOW);  //B
  digitalWrite(35,LOW);  //C
  digitalWrite(34,LOW);  //D
    }
  else if(n3 == "2"){
  digitalWrite(37,LOW);  //A
  digitalWrite(36,HIGH);  //B
  digitalWrite(35,LOW);  //C
  digitalWrite(34,LOW);  //D  
    }
  else if(n3 == "3"){
  digitalWrite(37,HIGH);  //A
  digitalWrite(36,HIGH);  //B
  digitalWrite(35,LOW);  //C
  digitalWrite(34,LOW);  //D   
    }
  else if(n3 == "4"){
  digitalWrite(37,LOW);  //A
  digitalWrite(36,LOW);  //B
  digitalWrite(35,HIGH);  //C
  digitalWrite(34,LOW);  //D  
    }
  else if(n3 == "5"){
  digitalWrite(37,HIGH);   //A
  digitalWrite(36,LOW);  //B
  digitalWrite(35,HIGH);   //C
  digitalWrite(34,LOW);  //D
    }
  else if(n3 == "6"){
  digitalWrite(37,LOW);  //A
  digitalWrite(36,HIGH);  //B
  digitalWrite(35,HIGH);  //C
  digitalWrite(34,LOW);   //D
    }
  else if(n3 == "7"){
  digitalWrite(37,HIGH);   //A
  digitalWrite(36,HIGH);  //B
  digitalWrite(35,HIGH);  //C
  digitalWrite(34,LOW);  //D
    }
  else if(n3 == "8"){
  digitalWrite(37,LOW);  //A
  digitalWrite(36,LOW);  //B
  digitalWrite(35,LOW);  //C
  digitalWrite(34,HIGH);  //D
    }
  else if(n3 == "9"){
  digitalWrite(37,HIGH);  //A
  digitalWrite(36,LOW);  //B
  digitalWrite(35,LOW);  //C
  digitalWrite(34,HIGH);  //D
    }
  
  }

//M2
  void numm4(String n4){
  if(n4 == "0"){
  digitalWrite(33,LOW);  //A
  digitalWrite(32,LOW);  //B
  digitalWrite(31,LOW);  //C
  digitalWrite(30,LOW);  //D
    }
  else if(n4 == "1"){
  digitalWrite(33,HIGH);  //A
  digitalWrite(32,LOW);  //B
  digitalWrite(31,LOW);  //C
  digitalWrite(30,LOW);  //D
    }
  else if(n4 == "2"){
  digitalWrite(33,LOW);  //A
  digitalWrite(32,HIGH);  //B
  digitalWrite(31,LOW);  //C
  digitalWrite(30,LOW);  //D  
    }
  else if(n4 == "3"){
  digitalWrite(33,HIGH);  //A
  digitalWrite(32,HIGH);  //B
  digitalWrite(31,LOW);  //C
  digitalWrite(30,LOW);  //D   
    }
  else if(n4 == "4"){
  digitalWrite(33,LOW);  //A
  digitalWrite(32,LOW);  //B
  digitalWrite(31,HIGH);  //C
  digitalWrite(30,LOW);  //D  
    }
  else if(n4 == "5"){
  digitalWrite(33,HIGH);   //A
  digitalWrite(32,LOW);  //B
  digitalWrite(31,HIGH);   //C
  digitalWrite(30,LOW);  //D
    }
  else if(n4 == "6"){
  digitalWrite(33,LOW);  //A
  digitalWrite(32,HIGH);  //B
  digitalWrite(31,HIGH);  //C
  digitalWrite(30,LOW);   //D
    }
  else if(n4 == "7"){
  digitalWrite(33,HIGH);   //A
  digitalWrite(32,HIGH);  //B
  digitalWrite(31,HIGH);  //C
  digitalWrite(30,LOW);  //D
    }
  else if(n4 == "8"){
  digitalWrite(33,LOW);  //A
  digitalWrite(32,LOW);  //B
  digitalWrite(31,LOW);  //C
  digitalWrite(30,HIGH);  //D
    }
  else if(n4 == "9"){
  digitalWrite(33,HIGH);  //A
  digitalWrite(32,LOW);  //B
  digitalWrite(31,LOW);  //C
  digitalWrite(30,HIGH);  //D
    }
  }

//S1
void numm5(String n5){
  if(n5 == "0"){
  digitalWrite(49,LOW);  //A
  digitalWrite(48,LOW);  //B
  digitalWrite(47,LOW);  //C
  digitalWrite(46,LOW);  //D
    }
  else if(n5 == "1"){
  digitalWrite(49,HIGH);  //A
  digitalWrite(48,LOW);  //B
  digitalWrite(47,LOW);  //C
  digitalWrite(46,LOW);  //D
    }
  else if(n5 == "2"){
  digitalWrite(49,LOW);  //A
  digitalWrite(48,HIGH);  //B
  digitalWrite(47,LOW);  //C
  digitalWrite(46,LOW);  //D  
    }
  else if(n5 == "3"){
  digitalWrite(49,HIGH);  //A
  digitalWrite(48,HIGH);  //B
  digitalWrite(47,LOW);  //C
  digitalWrite(46,LOW);  //D   
    }
  else if(n5 == "4"){
  digitalWrite(49,LOW);  //A
  digitalWrite(48,LOW);  //B
  digitalWrite(47,HIGH);  //C
  digitalWrite(46,LOW);  //D  
    }
  else if(n5== "5"){
  digitalWrite(49,HIGH);   //A
  digitalWrite(48,LOW);  //B
  digitalWrite(47,HIGH);   //C
  digitalWrite(46,LOW);  //D
    }
  else if(n5 == "6"){
  digitalWrite(49,LOW);  //A
  digitalWrite(48,HIGH);  //B
  digitalWrite(47,HIGH);  //C
  digitalWrite(46,LOW);   //D
    }
  else if(n5 == "7"){
  digitalWrite(49,HIGH);   //A
  digitalWrite(48,HIGH);  //B
  digitalWrite(47,HIGH);  //C
  digitalWrite(46,LOW);  //D
    }
  else if(n5 == "8"){
  digitalWrite(49,LOW);  //A
  digitalWrite(48,LOW);  //B
  digitalWrite(47,LOW);  //C
  digitalWrite(46,HIGH);  //D
    }
  else if(n5 == "9"){
  digitalWrite(49,HIGH);  //A
  digitalWrite(48,LOW);  //B
  digitalWrite(47,LOW);  //C
  digitalWrite(46,HIGH);  //D
    }
  
  }

//S2
void numm6(String n6){
  if(n6 == "0"){
  digitalWrite(45,LOW);  //A
  digitalWrite(44,LOW);  //B
  digitalWrite(43,LOW);  //C
  digitalWrite(42,LOW);  //D
    }
  else if(n6 == "1"){
  digitalWrite(45,HIGH);  //A
  digitalWrite(44,LOW);  //B
  digitalWrite(43,LOW);  //C
  digitalWrite(42,LOW);  //D
    }
  else if(n6 == "2"){
  digitalWrite(45,LOW);  //A
  digitalWrite(44,HIGH);  //B
  digitalWrite(43,LOW);  //C
  digitalWrite(42,LOW);  //D  
    }
  else if(n6 == "3"){
  digitalWrite(45,HIGH);  //A
  digitalWrite(44,HIGH);  //B
  digitalWrite(43,LOW);  //C
  digitalWrite(42,LOW);  //D   
    }
  else if(n6 == "4"){
  digitalWrite(45,LOW);  //A
  digitalWrite(44,LOW);  //B
  digitalWrite(43,HIGH);  //C
  digitalWrite(42,LOW);  //D  
    }
  else if(n6 == "5"){
  digitalWrite(45,HIGH);   //A
  digitalWrite(44,LOW);  //B
  digitalWrite(43,HIGH);   //C
  digitalWrite(42,LOW);  //D
    }
  else if(n6 == "6"){
  digitalWrite(45,LOW);  //A
  digitalWrite(44,HIGH);  //B
  digitalWrite(43,HIGH);  //C
  digitalWrite(42,LOW);   //D
    }
  else if(n6 == "7"){
  digitalWrite(45,HIGH);   //A
  digitalWrite(44,HIGH);  //B
  digitalWrite(43,HIGH);  //C
  digitalWrite(42,LOW);  //D
    }
  else if(n6 == "8"){
  digitalWrite(45,LOW);  //A
  digitalWrite(44,LOW);  //B
  digitalWrite(43,LOW);  //C
  digitalWrite(42,HIGH);  //D
    }
  else if(n6 == "9"){
  digitalWrite(45,HIGH);  //A
  digitalWrite(44,LOW);  //B
  digitalWrite(43,LOW);  //C
  digitalWrite(42,HIGH);  //D
    }
  
}
void xunhuan(void)
{
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("0");
  delay(50);

  numm1("1");
  numm2("1");
  numm3("1");
  numm4("1");
  numm5("1");
  numm6("1");
  delay(50);

  numm1("2");
  numm2("2");
  numm3("2");
  numm4("2");
  numm5("2");
  numm6("2");
  delay(50);

  numm1("3");
  numm2("3");
  numm3("3");
  numm4("3");
  numm5("3");
  numm6("3");
  delay(50);

  numm1("4");
  numm2("4");
  numm3("4");
  numm4("4");
  numm5("4");
  numm6("4");
  delay(50);

  numm1("5");
  numm2("5");
  numm3("5");
  numm4("5");
  numm5("5");
  numm6("5");
  delay(50);

  numm1("6");
  numm2("6");
  numm3("6");
  numm4("6");
  numm5("6");
  numm6("6");
  delay(50);

  numm1("7");
  numm2("7");
  numm3("7");
  numm4("7");
  numm5("7");
  numm6("7");
  delay(50);

  numm1("8");
  numm2("8");
  numm3("8");
  numm4("8");
  numm5("8");
  numm6("8");
  delay(50);

  numm1("9");
  numm2("9");
  numm3("9");
  numm4("9");
  numm5("9");
  numm6("9");
  delay(50);  

   
}
void daoshu(void)
{
  wdt_reset();
  xunhuan();
  xunhuan();
  wdt_reset();
  xunhuan();
  xunhuan();
  wdt_reset();

  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("0");
  delay(50);
  numm1("0");
  numm2("1");
  numm3("1");
  numm4("1");
  numm5("1");
  numm6("1");
  delay(50);
  numm1("0");
  numm2("2");
  numm3("2");
  numm4("2");
  numm5("2");
  numm6("2");
  delay(50);
  numm1("0");
  numm2("3");
  numm3("3");
  numm4("3");
  numm5("3");
  numm6("3");
  delay(50);
  numm1("0");
  numm2("4");
  numm3("4");
  numm4("4");
  numm5("4");
  numm6("4");
  delay(50);
  numm1("0");
  numm2("5");
  numm3("5");
  numm4("5");
  numm5("5");
  numm6("5");
  delay(50);
  numm1("0");
  numm2("6");
  numm3("6");
  numm4("6");
  numm5("6");
  numm6("6");
  delay(50);
  numm1("0");
  numm2("7");
  numm3("7");
  numm4("7");
  numm5("7");
  numm6("7");
  delay(50);
  numm1("0");
  numm2("8");
  numm3("8");
  numm4("8");
  numm5("8");
  numm6("8");
  delay(50);
  numm1("0");
  numm2("9");
  numm3("9");
  numm4("9");
  numm5("9");
  numm6("9");
  delay(50);    

  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("0");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("1");
  numm4("1");
  numm5("1");
  numm6("1");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("2");
  numm4("2");
  numm5("2");
  numm6("2");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("3");
  numm4("3");
  numm5("3");
  numm6("3");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("4");
  numm4("4");
  numm5("4");
  numm6("4");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("5");
  numm4("5");
  numm5("5");
  numm6("5");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("6");
  numm4("6");
  numm5("6");
  numm6("6");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("7");
  numm4("7");
  numm5("7");
  numm6("7");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("8");
  numm4("8");
  numm5("8");
  numm6("8");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("9");
  numm4("9");
  numm5("9");
  numm6("9");
  delay(50); 
  wdt_reset();

  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("0");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("1");
  numm5("1");
  numm6("1");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("2");
  numm5("2");
  numm6("2");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("3");
  numm5("3");
  numm6("3");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("4");
  numm5("4");
  numm6("4");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("5");
  numm5("5");
  numm6("5");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("6");
  numm5("6");
  numm6("6");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("7");
  numm5("7");
  numm6("7");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("8");
  numm5("8");
  numm6("8");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("9");
  numm5("9");
  numm6("9");
  delay(50); 

  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("0");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("1");
  numm6("1");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("2");
  numm6("2");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("3");
  numm6("3");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("4");
  numm6("4");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("5");
  numm6("5");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("6");
  numm6("6");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("7");
  numm6("7");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("8");
  numm6("8");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("9");
  numm6("9");
  delay(50); 
  wdt_reset();

  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("0");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("1");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("2");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("3");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("4");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("5");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("6");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("7");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("8");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("9");
  delay(50); 


  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("0");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("0");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("0");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("0");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("0");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("0");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("0");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("0");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("0");
  delay(50);
  numm1("0");
  numm2("0");
  numm3("0");
  numm4("0");
  numm5("0");
  numm6("0");
  delay(50); 
  wdt_reset();  
} 
  
 
void setup()
{

  wdt_enable(WDTO_2S);   
  
  // Setup Serial connection
  Serial.begin(115200);
  // Uncomment the next line if you are using an Arduino Leonardo
  //while (!Serial) {}
  
  // Initialize the rtc object
  rtc.begin();
  
  // The following lines can be uncommented to set the date and time
  //rtc.setDOW(WEDNESDAY);     // Set Day-of-Week to SUNDAY
  //rtc.setTime(12, 0, 0);     // Set the time to 12:00:00 (24hr format)
  //rtc.setDate(1, 1, 2014);   // Set the date to January 1st, 2014

  pinMode(22,OUTPUT);
  pinMode(23,OUTPUT);
  pinMode(24,OUTPUT);
  pinMode(25,OUTPUT);
  
  pinMode(26,OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(28,OUTPUT);
  pinMode(29,OUTPUT);
  
  pinMode(30,OUTPUT);
  pinMode(31,OUTPUT);
  pinMode(32,OUTPUT);
  pinMode(33,OUTPUT);
  
  pinMode(34,OUTPUT);
  pinMode(35,OUTPUT);
  pinMode(36,OUTPUT);
  pinMode(37,OUTPUT);

  pinMode(42,OUTPUT);
  pinMode(43,OUTPUT);
  pinMode(44,OUTPUT);
  pinMode(45,OUTPUT);

  pinMode(46,OUTPUT);
  pinMode(47,OUTPUT);
  pinMode(48,OUTPUT);
  pinMode(49,OUTPUT);
  
}
 
void loop()
{
  // Send Day-of-Week
 // Serial.print(rtc.getDOWStr());
  //Serial.print(" ");
  
  // Send date
  //Serial.print(rtc.getDateStr());
  //Serial.print(" -- ");
 
  // Send time
  String str = rtc.getTimeStr();
  String n6 = str.substring(7,8);
  String n5 = str.substring(6,7);
  String n4 = str.substring(4,5);
  String n3 = str.substring(3,4);
  String n2 = str.substring(1,2);
  String n1 = str.substring(0,1);
  
  //Serial.print(n4);
  //Serial.print(n3);
  //Serial.print(n2);
  //Serial.println(n1);
  //Serial.println(str);

  wdt_reset();

  if (n4 != t4)
  {
      if (t0=="1")
      {
      numm1("0");
      numm2("0");
      numm3("0");
      numm4("0");
      numm5("0");
      numm6("0");

      t0 = "0";

      delay(1000);
      }
      else
      {
      xunhuan();

      numm1(n1);
      numm2(n2);
      numm3(n3);
      numm4(n4);
      numm5(n5);
      numm6(n6);

      delay(500);
      }
  }

  else if (n1=="2" and n2=="3" and n3=="5" and n4=="9" and n5=="5" and n6=="5")
  {
  daoshu();  
  t0 = "1";
  }
    
  else 
  {
  numm1(n1);
  numm2(n2);
  numm3(n3);
  numm4(n4);
  numm5(n5);
  numm6(n6);

  delay(1000);
  }

t1 = n1;
t2 = n2;
t3 = n3;
t4 = n4;
t5 = n5;
t6 = n6;
  
}
