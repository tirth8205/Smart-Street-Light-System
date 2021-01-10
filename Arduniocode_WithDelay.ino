void setup() {
  pinMode(7,INPUT);
  pinMode(6,INPUT);
  pinMode(5,INPUT);
  pinMode(4,INPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
}
void loop() {
  
Serial.print("IRSensorip  ");
Serial.println(digitalRead(7));
if(digitalRead(7)==0)
{
  digitalWrite(13,HIGH);
  delay(3000);
  }
 else{
    digitalWrite(13,LOW);
    }
    
Serial.print("IRSensorip  ");
Serial.println(digitalRead(6));
if(digitalRead(6)==0)
{
  digitalWrite(12,HIGH);
  delay(3000);
  }
 else{
    digitalWrite(12,LOW);
    }

Serial.print("IRSensorip  ");
Serial.println(digitalRead(5));
if(digitalRead(5)==0)
{
  digitalWrite(11,HIGH);
  delay(3000);
  }
 else{
    digitalWrite(11,LOW);
    }

Serial.print("IRSensorip  ");
Serial.println(digitalRead(4));
if(digitalRead(4)==0)
{
  digitalWrite(10,HIGH);
  delay(3000);
  }
 else{
    digitalWrite(10,LOW);
    }

Serial.print("IRSensorip  ");
Serial.println(digitalRead(3));
if(digitalRead(3)==0)
{
  digitalWrite(9,HIGH);
  delay(3000);
  }
 else{
    digitalWrite(9,LOW);
    }    
}
