// Définition des broches
const int rouge1 = 2;
const int jaune1 = 3;
const int vert1  = 4;

const int rouge2 = 5;
const int jaune2 = 6;
const int vert2  = 7;

void setup() {
  pinMode(rouge1, OUTPUT);
  pinMode(jaune1, OUTPUT);
  pinMode(vert1, OUTPUT);

  pinMode(rouge2, OUTPUT);
  pinMode(jaune2, OUTPUT);
  pinMode(vert2, OUTPUT);
}

void loop() {

  // 1) FEU 1 VERT / FEU 2 ROUGE
  digitalWrite(vert1, HIGH);
  digitalWrite(jaune1, LOW);
  digitalWrite(rouge1, LOW);

  digitalWrite(vert2, LOW);
  digitalWrite(jaune2, LOW);
  digitalWrite(rouge2, HIGH);

  delay(10000);

  // 2) FEU 1 ORANGE / FEU 2 ROUGE
  digitalWrite(vert1, LOW);
  digitalWrite(jaune1, HIGH);
  // rouge2 reste HIGH

  delay(3000);

  // 3) TOUT ROUGE (sécurité)
  digitalWrite(jaune1, LOW);
  digitalWrite(rouge1, HIGH);

  digitalWrite(jaune2, LOW);
  digitalWrite(rouge2, HIGH);

  delay(5000);

  // 4) FEU 2 VERT / FEU 1 ROUGE
  digitalWrite(vert2, HIGH);
  digitalWrite(jaune2, LOW);
  digitalWrite(rouge2, LOW);

  digitalWrite(vert1, LOW);
  digitalWrite(jaune1, LOW);
  digitalWrite(rouge1, HIGH);

  delay(10000);

  // 5) FEU 2 ORANGE / FEU 1 ROUGE
  digitalWrite(vert2, LOW);
  digitalWrite(jaune2, HIGH);
  // rouge1 reste HIGH

  delay(3000);

  // 6) TOUT ROUGE (sécurité)
  digitalWrite(jaune2, LOW);
  digitalWrite(rouge2, HIGH);

  digitalWrite(jaune1, LOW);
  digitalWrite(rouge1, HIGH);

  delay(5000);
}


