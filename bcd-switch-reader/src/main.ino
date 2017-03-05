#define set(x) |= (1<<x)
#define clr(x) &=~(1<<x) 
#define inv(x) ^=(1<<x)

#define digit1 ((PINB ^ 0b11111111) & 0x0F)
#define digit2 ((PINB ^ 0b11111111) >> 4)
#define digit3 ((PIND ^ 0b11111111) & 0x0F)
#define digit4 ((PIND ^ 0b11111111) >> 4)
#define digit5 ((PINC ^ 0b11111111) & 0x0F)

#define LED PC5

void setup() {
  DDRB = 0b11111111; // port b as input...
  PORTB = 0b11111111; // turn on port b pull-ups...

  // lower nibble of port c is input with pull-ups...
  pinMode(PC0, INPUT_PULLUP);
  pinMode(PC1, INPUT_PULLUP);
  pinMode(PC2, INPUT_PULLUP);
  pinMode(PC3, INPUT_PULLUP);
  
  DDRD = 0b11111111; // port d as input...
  PORTD = 0b11111111; // turn on port d pull-ups...

  pinMode(LED, OUTPUT); // set pc5 to output...
  
  // // port c first byte...
  // pinMode(23, INPUT_PULLUP);
  // pinMode(24, INPUT_PULLUP);
  // pinMode(25, INPUT_PULLUP);
  // pinMode(26, INPUT_PULLUP);
  
}

uint8_t unlock = 0;

void loop() {
  unlock = 0;

  if (
      // (digit5 == 6) &&
      // (digit4 == 3) &&
      (digit3 == 1) &&
      (digit2 == 1) &&
      (digit1 == 5)
  ) {
    unlock = 1;
  }

  unlock == 1 ? PORTC set(LED) : PORTC clr(LED);  
  _delay_ms(500);
}

// byte getLowerByte(uint8_t b) {
//   b = b << 4;
//   return(b >> 4);
// }
//
// byte getUpperByte(uint8_t b) {
//   return(b >> 4);
// }
