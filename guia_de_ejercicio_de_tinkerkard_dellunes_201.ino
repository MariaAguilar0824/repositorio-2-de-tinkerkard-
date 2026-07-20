int rojo = 9;
int verde = 10;
int azul = 11;

int botonRojo = 2;
int botonVerde = 3;
int botonAzul = 4;

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  
  pinMode(botonRojo, INPUT);
  pinMode(botonVerde, INPUT);
  pinMode(botonAzul, INPUT);
}

void loop() {
  if (digitalRead(botonRojo) == HIGH) {
    digitalWrite(rojo, HIGH);
  } else {
    digitalWrite(rojo, LOW);
  }

  if (digitalRead(botonVerde) == HIGH) {
    digitalWrite(verde, HIGH);
  } else {
    digitalWrite(verde, LOW);
  }

  if (digitalRead(botonAzul) == HIGH) {
    digitalWrite(azul, HIGH);
  } else {
    digitalWrite(azul, LOW);
  }
}