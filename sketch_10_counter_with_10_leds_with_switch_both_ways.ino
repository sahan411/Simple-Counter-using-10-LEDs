int value;
int valueA=1;
int temp=1;
int temp2;
int count=0;
int led=0;
int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;

void setup() {
    pinMode(a,OUTPUT);
    pinMode(b,OUTPUT);
    pinMode(c,OUTPUT);
    pinMode(d,OUTPUT);
    pinMode(e,OUTPUT);
    pinMode(f,OUTPUT);
    pinMode(g,OUTPUT);
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  value = digitalRead(9);
  valued = digitalRead(10);
  rst = digitalRead(11);

  if(rst == 1){
    count = 0;
  }
  
  if(value==valueA){
    if(value==1){
      count = count + 1;
      if(count>9){
        count = 0;
      }
        delay(50);
        Serial.println(led-2); 
        if(led==1){
          one();
        }
        if(led==2){
          two();
        }
        if(led==3){
          three();
        }
        if(led==4){
          four();
        }
        if(led==5){
          five();
        }
        if(led==6){
          six();
        }
        if(led==7){
          seven();
        }
        if(led==8){
          eight();
        }
        if(led==9){
          nine();
        }
        if(led>9){
          led = 0;
        }
        temp = !temp;
      }
    }
    valueA = !value;
  }
}

void one(){
  digitalWrite(a, 1);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
}

void two(){
  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 0);
}

void three(){
  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 0);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 0);
}

void four(){
  digitalWrite(a, 1);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
}

void five(){
  digitalWrite(a, 0);
  digitalWrite(b, 1);
  digitalWrite(c, 0);
  digitalWrite(d, 0);
  digitalWrite(e, 1);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
}

void six(){
  digitalWrite(a, 1);
  digitalWrite(b, 1);
  digitalWrite(c, 0);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
}

void seven(){
  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 1);
}

void eight(){
  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
}

void nine(){
  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 0);
  digitalWrite(g, 0);
}
