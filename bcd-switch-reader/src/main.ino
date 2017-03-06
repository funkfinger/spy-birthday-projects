#define set(x) |= (1<<x)
#define clr(x) &=~(1<<x) 
#define inv(x) ^=(1<<x)

#define digit1 ((PINB ^ 0b11111111) & 0x0F) // lower nibble of port b inversed
#define digit2 ((PINB ^ 0b11111111) >> 4)   // upper nibble of port b inversed
#define digit3 ((PINC ^ 0b11111111) & 0x0F) // lower nibble of port c inversed
#define digit4 ((PIND ^ 0b11111111) & 0x0F) // lower nibble of port d inversed
#define digit5 ((PIND ^ 0b11111111) >> 4)   // upper nibble of port d inversed

#define LED PC5

void setup() {
  DDRB = 0b00000000; // port b as input...
  PORTB = 0b11111111; // turn on port b pull-ups...

  // lower nibble of port c as input...
  DDRC clr(DDC0);
  DDRC clr(DDC1);
  DDRC clr(DDC2);
  DDRC clr(DDC3);

  /// turn on port c lower nibble pull-ups...
  PORTC set(PC0);
  PORTC set(PC1);
  PORTC set(PC2);
  PORTC set(PC3);
  
  DDRD = 0b00000000; // port d as input...
  PORTD = 0b11111111; // turn on port d pull-ups...
  
  pinMode(LED, OUTPUT); // set pc5 to output...
}

uint8_t unlock = 0;

void loop() {
  unlock = 0;

  // secret code is 63115
  if (
      (digit5 == 6) &&
      (digit4 == 3) &&
      (digit3 == 1) &&
      (digit2 == 1) &&
      (digit1 == 5)
  ) {
    unlock = 1;
  }

  unlock == 1 ? PORTC set(LED) : PORTC clr(LED);  
  _delay_ms(500);
}
