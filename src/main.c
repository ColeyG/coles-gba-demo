#include <stdlib.h>
#include "drawing.h"
#include "drawRoutines.h"

int width = 240;
int height = 160;

// Called once on the start of the application
void initialize(volatile unsigned short vram[])
{
  // Initializer Function called on game start
  drawRoutine(vram, 0, 10, 10);
}

// Called consistently
void update(volatile unsigned short vram[])
{
  line(vram, rand() % width, rand() % height, rand() % width, rand() % height, rand());
}

int main(void)
{
  volatile unsigned char *ioram = (unsigned char *)0x04000000;
  ioram[0] = 0x03;
  ioram[1] = 0x04;

  volatile unsigned short *vram = (unsigned short *)0x06000000;

  srand(0);

  initialize(vram);

  while (1)
  {
    update(vram);
  }

  return 0;
}
