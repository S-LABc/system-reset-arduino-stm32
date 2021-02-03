#define LED PC13

int count = 0;

void setup() {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);
  
  delay(1000);
  digitalWrite(LED, LOW);
  delay(3000);
}

void loop() {
  if (count == 20) {
    //NVIC_SystemReset(); // Официальное https://github.com/stm32duino/Arduino_Core_STM32
    nvic_sys_reset(); // rogerclarkmelbourne https://github.com/rogerclarkmelbourne/Arduino_STM32
  }
  digitalWrite(LED, !digitalRead(LED));
  delay(200);
  ++ count;
}
