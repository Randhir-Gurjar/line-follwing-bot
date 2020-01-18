int motor1 = 7;
int motor1b = 6;
int motor2 = 5;
int motor2b = 4;
int IRL = 3;
int IRR = 2; 
int motor1c= 11;
int motor2c = 12;
void setup() 
{
  Serial.begin(9600);
pinMode(motor1,OUTPUT);
pinMode(motor1b,OUTPUT);       
pinMode(motor2,OUTPUT);
pinMode(motor2b,OUTPUT);
pinMode(IRL,INPUT);
pinMode(IRR,INPUT);
pinMode(motor1c,OUTPUT);
pinMode(motor2c,OUTPUT);

}
void loop() 
{
Serial.println(digitalRead(IRL));
digitalWrite(motor1c,HIGH);
digitalWrite(motor2c,HIGH);

if((digitalRead(IRL)== 0)&&(digitalRead(IRR)==0))
{
  forward();
}
if((digitalRead(IRL)== 1)&&(digitalRead(IRR)==1))
{
 Stop();
}
if((digitalRead(IRL)== 1)&&(digitalRead(IRR)==0))
{
  turn_left();
}
if((digitalRead(IRL)== 0)&&(digitalRead(IRR)==0))
{
  turn_right();
}
}

void forward()
{
digitalWrite(motor1,HIGH);
digitalWrite(motor2,HIGH);
digitalWrite(motor1b,LOW);
digitalWrite(motor2b,LOW);
}

void Stop()
{
digitalWrite(motor1,LOW);
digitalWrite(motor2,LOW);
digitalWrite(motor1b,LOW);
digitalWrite(motor2b,LOW);
}
void turn_right()
{
digitalWrite(motor1,LOW);
digitalWrite(motor2,HIGH);
digitalWrite(motor1b,LOW);
digitalWrite(motor2b,LOW);
}
void turn_left()
{
digitalWrite(motor1,HIGH);
digitalWrite(motor2,LOW);
digitalWrite(motor1b,LOW);
digitalWrite(motor2b,LOW);
}
