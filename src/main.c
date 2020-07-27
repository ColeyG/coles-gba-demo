#include <stdlib.h>
#include "drawing.h"
#include "drawRoutines.h"

#define MEM_IO 0x04000000
#define REG_DISPLAY (*((volatile uint32 *)(MEM_IO)))
#define REG_DISPLAY_VCOUNT (*((volatile uint32 *)(MEM_IO + 0x0006)))

typedef unsigned int uint32;

// Gross Globals Area
int width = 240;
int height = 160;
int initialized = 0;

// Called once on the start of the application
void initialize(volatile unsigned short vram[])
{
  // Initializer Function called on game start
  clearRoutine(vram, 0x739c);
  drawRoutine(vram, 0, 10, 10);
  addDontDraw(10, 10, 77, 30);
}

// Called consistently
void update(volatile unsigned short vram[])
{
  // line(vram, rand() % width, rand() % height, rand() % width, rand() % height, rand());
}

int main(void)
{
  volatile unsigned char *ioram = (unsigned char *)0x04000000;
  ioram[0] = 0x03;
  ioram[1] = 0x04;

  volatile unsigned short *vram = (unsigned short *)0x06000000;

  srand(0);

  while (1)
  {
    while (REG_DISPLAY_VCOUNT >= 160)
      ;
    while (REG_DISPLAY_VCOUNT < 160)
    {
      if (initialized == 0)
      {
        initialize(vram);
        initialized = 1;
      }

      update(vram);
    }
  }

  return 0;
}
