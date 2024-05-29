// Incluindo bibliotecas nécessarias, como a do LCD e a do Servo Motor
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

// Definindo as entradas do Ultrassonic
#define trig 7
#define echo 6

// Definindo portas dos Led's e do Buzzer
#define red 4
#define yellow 3
#define green 2
#define buzzer 5

// Definindo a entrada do Servo Motor
#define m1 9
#define servoPin 9

// Configurando tela LCD
LiquidCrystal_I2C lcd(0x27,16,2);
Servo gate;


void gL(){ //Ativa o Led Verde
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
}

void yL(){ //Ativa o Led Amarelo
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
}

void rL(){ //Ativa o Led Vermelho
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
}

void beep(){ //Definindo informações básicas do buzzer
  for(int i = 0; i < 3; i++){ //Definindo que o som toque 3 vezes por segundo
      tone(buzzer,440);
      delay(100);
      noTone(buzzer);
      delay(100);
    }
}

//Configurando a posição que os Servos Motores vão iniciar e quantos graus irão girar
void noTurn(){
  gate.write(0);
}

void openD(){
  gate.write(180);
}

void setup()
{ //Configurações básicas do Void Setup
  pinMode(trig, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(m1, OUTPUT);
  pinMode(echo, INPUT);
  gate.attach(servoPin);
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
}

void loop()
{
  //Trigger do Ultrassónico
  digitalWrite(trig, HIGH);
  delay(100); 
  digitalWrite(trig, LOW);
  
  //Echo do Ultrassónico
  int duration = pulseIn(echo,HIGH);
  int distance = (duration/2)/29.1;
  
  //display das informações de distância no serial monitor
  Serial.print(distance);
  Serial.println("cm");
  
  //Distancia do objeto até o ponto de coleta
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Object Distance:");
  lcd.setCursor(0,1);
  lcd.print(distance);
  
  
  //Definindo quando os Led's devem ser ligados
   if (distance > 50){ //Led Verde
    noTone(7);
    noTurn();
    gL();
  }
  else if (distance > 10 && distance < 50){ //Led Amarelo
    noTone(7);
    noTurn();
    yL();    
  }
  else if(distance < 10){ //Led Vermelho, Zona de coleta
    beep();
    rL();
    openD(); //Ativa o servo Motor para a coleta
  }
  
}
