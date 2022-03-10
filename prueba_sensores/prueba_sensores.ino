#define s1 a0;
#define s2 a1;
#define s3 a2;
#define s4 a3;
#define s5 a4;
#define s6 a5;


int motor[4];
int lec[6];


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

motor[0] = 11;
motor[1] = 10;
motor[2] = 6;
motor[3] = 12;

analogWrite(5,250);
analogWrite(9,250);

}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 0; i <= 5; i++)
  {
    lec[i] = analogRead(i);
  }

  delay(100);

 // for (int i = 0; i <= 5; i++)
 // {
    //Serial.print("Sensor ");
    //Serial.print(i+1);
    //Serial.print(" = ");
    //Serial.print(lec[i]);
   // Serial.print(",");
 // }
 // Serial.println("------------------------------------");

  //delay(500);
  if(lec[2] < 700 ||lec[3] < 700)
  {
    digitalWrite(motor[0],HIGH);
    digitalWrite(motor[1],LOW);
    digitalWrite(motor[2],HIGH);
    digitalWrite(motor[3],LOW);
  }
  else if(lec[0] < 700 ||lec[1] < 700)
  {
    digitalWrite(motor[0],HIGH);
    digitalWrite(motor[1],LOW);
    digitalWrite(motor[2],LOW);
    digitalWrite(motor[3],LOW);
  }
  else if(lec[4] < 700 ||lec[5] < 700)
  {
    digitalWrite(motor[0],LOW);
    digitalWrite(motor[1],LOW);
    digitalWrite(motor[2],HIGH);
    digitalWrite(motor[3],LOW);
  }


  
    Serial.print(lec[0]);
   Serial.print(",");
   Serial.print(lec[1]);
   Serial.print(",");
   Serial.print(lec[2]);
   Serial.print(",");
   Serial.print(lec[3]);
   Serial.print(",");
   Serial.print(lec[4]);
   Serial.print(",");
   Serial.println(lec[5]);


}
