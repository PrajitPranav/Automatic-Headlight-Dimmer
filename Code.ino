//code for Automatic headlight Dimmer
const int IR1   =2;
const int IR2   =3;
const int IR3   =4;
const int IR4   =5;
const int IR5   =6;

const int LED1 =7;
const int LED2 =8;
const int LED3 =9;
const int LED4 =10;
const int LED5 =11;

void setup()
{
  Serial.begin(9600);                 // the GPRS baud rate 
  pinMode(IR1, INPUT); 
  pinMode(IR2, INPUT); 
  pinMode(IR3, INPUT); 
  pinMode(IR4, INPUT); 
  pinMode(IR5, INPUT); 
  
  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  
   digitalWrite(LED1,HIGH);
   digitalWrite(LED2,HIGH);
   digitalWrite(LED3,HIGH);
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   
} 
void loop()
{       

if(digitalRead(IR1)==LOW)
{
   digitalWrite(LED1,LOW);
}
else
{
   digitalWrite(LED1,HIGH);
}

if(digitalRead(IR2)==LOW)
{
   digitalWrite(LED2,LOW);
}
else
{
   digitalWrite(LED2,HIGH);
}
if(digitalRead(IR3)==LOW)
{
   digitalWrite(LED3,LOW);
}
else
{
   digitalWrite(LED3,HIGH);
}
if(digitalRead(IR4)==LOW)
{
   digitalWrite(LED4,LOW);
}
else
{
   digitalWrite(LED4,HIGH);
}
if(digitalRead(IR5)==LOW)
{
   digitalWrite(LED5,LOW);
}
else
{
   digitalWrite(LED5,HIGH);
}

} 
