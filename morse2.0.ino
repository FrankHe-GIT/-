String str="";
String morse="";

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
  }

void loop() {
  // put your main code here, to run repeatedly:

 
 while(Serial.available()>0)
 {
     str+=char(Serial.read());
     delay(2);
 }//字符串读入
 
 int n=str.length();
 for(int i=0;i<n;i++)
 {
     if(str[i]>=65&&str[i]<=90)
     str[i]=str[i]+32;
 }//大写字母转化

 for(int i=0;i<n;i++)
 {
     switch(str[i])
     {
         case 'a':morse+="*- ";break;
         case 'b':morse+="-*** ";break;
         case 'c':morse+="-*-* ";break;
         case 'd':morse+="-** ";break;
         case 'e':morse+="* ";break;
         case 'f':morse+="**-* ";break;
         case 'g':morse+="--* ";break;
         case 'h':morse+="**** ";break;
         case 'i':morse+="** ";break;
         case 'j':morse+="*--- ";break;
         case 'k':morse+="-*- ";break;
         case 'l':morse+="*-** ";break;
         case 'm':morse+="-- ";break;
         case 'n':morse+="-* ";break;
         case 'o':morse+="--- ";break;
         case 'p':morse+="*--* ";break;
         case 'q':morse+="*** ";break;
         case 'r':morse+="*-* ";break;
         case 's':morse+="*** ";break;
         case 't':morse+="- ";break;
         case 'u':morse+="**- ";break;
         case 'v':morse+="***- ";break;
         case 'w':morse+="*-- ";break;
         case 'x':morse+="-**- ";break;
         case 'y':morse+="-*-- ";break;
         case 'z':morse+="--** ";break;
     }
 }
 int m=morse.length();
 for(int i=0;i<m;i++)
 {
     if(morse[i]=='*')
     {
         digitalWrite(8,HIGH);
         digitalWrite(13,LOW);
         delay(1);
         digitalWrite(8,LOW);
         digitalWrite(13,LOW);
         delay(1);
     }
     else
     {
         digitalWrite(8,HIGH);
         digitalWrite(13,LOW);
         delay(2);
         digitalWrite(8,LOW);
         digitalWrite(13,LOW);
         delay(1);
     }
 }
}
