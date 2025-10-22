// Pines del encoder
const int pinA = 2;
const int pinB = 3;

// Variables para el estado del encoder
volatile int contador = 0;
volatile bool sentidoHorario = true;

void setup() {
  pinMode(pinA, INPUT);
  pinMode(pinB, INPUT);
  attachInterrupt(digitalPinToInterrupt(pinA), leerEncoder, RISING);
  Serial.begin(9600);
}

void loop() {
  // Mostrar el contador y sentido de giro
  Serial.print("Contador: ");
  Serial.print(contador);
  Serial.print(" | Sentido: ");
  Serial.println(sentidoHorario ? "Horario" : "Antihorario");
  delay(200);
}

void leerEncoder() {
  // Leer el estado del canal B para determinar el sentido
  if (digitalRead(pinB) == HIGH) {
    contador++;
    sentidoHorario = true;
  } else {
    contador--;
    sentidoHorario = false;
  }
}