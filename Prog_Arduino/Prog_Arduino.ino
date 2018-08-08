#include <TimerOne.h>
#include <AccelStepper.h>

AccelStepper stepper(1, 13, 12); // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5

String leitura = "D";
int velocidade = 0, cont = 0;

void setup() {
  Serial.begin(9600);

  pinMode(2, INPUT);
  pinMode(3, INPUT);

  stepper.setAcceleration(1);
  stepper.setMaxSpeed(1000000);
  stepper.setSpeed(10);

  //Timer1.initialize(150000);
  Timer1.attachInterrupt(aceleracao);
  Timer1.initialize(20000);
}

void loop() {
  if (Serial.available() > 0) {
    leitura = Serial.readStringUntil('\n');
    if (leitura.substring(0, 1) == "V") {
      velocidade = leitura.substring(1).toInt();

      //  stepper.setSpeed(velocidade);

      Serial.println(velocidade);
    }
  }

  if (leitura == "D") {
    cont++;
    if(cont >= 1000){
      cont = 0;
      int sentido = 0;
      
      if (digitalRead(2)) {
        sentido = -1;
      } else if (digitalRead(3)) {
        sentido = 1;
      }
      velocidade = map(analogRead(A0), 0, 1023, 0, 10000) * sentido;
    }
  }

  stepper.runSpeed();
}

void aceleracao() {
  if (velocidade !=  stepper.speed()) {
    if (velocidade > stepper.speed()) {
      stepper.setSpeed(stepper.speed() + 1);
    } else {
      stepper.setSpeed(stepper.speed() - 1);
    }
  }
}

