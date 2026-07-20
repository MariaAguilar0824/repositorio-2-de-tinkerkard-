# 🕹️ Ejercicio: Control de LED RGB mediante Pulsadores (C++)
### 🎓 Elaborado por: Lic. Carlos M. Galdamez
### ⚙️ Plataforma: Tinkercad / Arduino UNO

Este proyecto consiste en un sistema de control interactivo en tiempo real donde se manipulan los canales de color individuales (**Rojo, Verde y Azul**) de un componente RGB mediante el uso de tres pulsadores independientes configurados en modo Pull-Down.

---

## 📂 Archivos del Ejercicio

*   **`guia_de_ejercicio_de_tinkerkard_dellunes_201.ino`**: Código fuente estructurado en C++ embebido para Arduino.
*   **`Captura de pantalla (325).png`**: Vista de la simulación interactiva y el cableado físico en la protoboard.
*   **`guia de ejercicio de tinkerkard dellunes 20.pdf`**: Diagrama esquemático electrónico detallado exportado desde Tinkercad.
*   **`bom (1).csv`**: Listado de componentes electrónicos (*Bill of Materials*) con sus respectivas tolerancias y valores (Resistencias de 220Ω y 10kΩ).

---

## 🛠️ Arquitectura y Lógica de Software (C++)

El script está diseñado bajo un enfoque de **mapeo directo de E/S digitales** y evaluación de estados lógicos mediante condicionales booleanos:

*   **Variables Globales de Asignación:** Definición explícita de pines fijos para optimizar la lectura del compilador.
*   **Configuración de Modos (`pinMode`):** Configuración explícita de los pines de los canales como salidas (`OUTPUT`) y los pines de los botones como entradas (`INPUT`).
*   **Bucle de Muestreo Continuo (`loop`):** Evaluación del estado lógico (`HIGH` / `LOW`) en los pines de entrada para replicar instantáneamente el nivel de voltaje en el pin de salida asociado.

```cpp
// Asignación de pines para Canales RGB
int rojo = 9;   // Pin Digital PWM 9
int verde = 10; // Pin Digital PWM 10
int azul = 11;  // Pin Digital PWM 11

// Asignación de pines para Pulsadores
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
  // Evaluación del canal Rojo
  if (digitalRead(botonRojo) == HIGH) {
    digitalWrite(rojo, HIGH);
  } else {
    digitalWrite(rojo, LOW);
  }

  // Evaluación del canal Verde
  if (digitalRead(botonVerde) == HIGH) {
    digitalWrite(verde, HIGH);
  } else {
    digitalWrite(verde, LOW);
  }

  // Evaluación del canal Azul
  if (digitalRead(botonAzul) == HIGH) {
    digitalWrite(azul, HIGH);
  } else {
    digitalWrite(azul, LOW);
  }
}
```

---

## 🔌 Conexiones de Hardware

| Componente | Pin Arduino | Tipo de Señal | Notas de Conexión |
| :--- | :---: | :---: | :--- |
| **LED RGB (Canal Rojo)** | `9` | Salida Digital (PWM) | Conectado en serie con resistencia de 220Ω |
| **LED RGB (Canal Verde)**| `10` | Salida Digital (PWM) | Conectado en serie con resistencia de 220Ω |
| **LED RGB (Canal Azul)** | `11` | Salida Digital (PWM) | Conectado en serie con resistencia de 220Ω |
| **Pulsador Rojo** | `2` | Entrada Digital | Configuración Pull-Down con resistencia de 10kΩ |
| **Pulsador Verde** | `3` | Entrada Digital | Configuración Pull-Down con resistencia de 10kΩ |
| **Pulsador Azul** | `4` | Entrada Digital | Configuración Pull-Down con resistencia de 10kΩ |

---

## 🚀 Instrucciones de Ejecución

1. Importa el diagrama de la protoboard o abre el circuito en **Tinkercad**.
2. Copia el bloque de código C++ provisto en `guia_de_ejercicio_de_tinkerkard_dellunes_201.ino` dentro del editor de código.
3. Inicia la simulación interactiva. 
4. Presiona uno o varios botones en paralelo para interactuar con la mezcla de colores lógicos del LED RGB.

---
*Guía técnica de ejercicios para desarrollo de lógica de programación en sistemas embebidos.*
