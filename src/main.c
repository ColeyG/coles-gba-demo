#include <stdlib.h>
#include "drawing.h"

// Called once on the start of the application
void initialize(volatile unsigned short vram[])
{
  // place(vram, rand() % 240, rand() % 160, rand());
}

int x = 0;
// Called consistently
void update(volatile unsigned short vram[])
{
  // refresh();
  line(vram, 20, x, 60, 40, rand());
  x++;
  if (x == 241)
  {
    x = 0;
  }
}

int main(void)
{
  // Write into the I/O registers, setting video display parameters.
  volatile unsigned char *ioram = (unsigned char *)0x04000000;
  ioram[0] = 0x03; // Assign our "game to video mode 3"
  ioram[1] = 0x04; // Enable BG2 (BG0 = 1, BG1 = 2, BG2 = 4, ...)

  // Write pixel colours into VRAM
  volatile unsigned short *vram = (unsigned short *)0x06000000;

  srand(0);

  initialize(vram);

  while (1)
  {
    update(vram);
  }

  return 0;
}
