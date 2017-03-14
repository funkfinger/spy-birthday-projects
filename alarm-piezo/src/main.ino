#define set(x) |= (1<<x)
#define clr(x) &=~(1<<x) 
#define inv(x) ^=(1<<x)

#define PIEZO 13

void setup() {
  pinMode(PIEZO, OUTPUT); // set pc5 to output...
}

uint8_t unlock = 0;

void loop() {
  tone(PIEZO, 500, 400);
  delay(450);
  tone(PIEZO, 1000, 400);
  delay(450);
}
