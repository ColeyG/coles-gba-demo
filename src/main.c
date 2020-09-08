#include <stdlib.h>
#include "drawing.h"
#include "drawRoutines.h"

#define MEM_IO 0x04000000
#define REG_DISPLAY (*((volatile uint32 *)(MEM_IO)))
#define REG_DISPLAY_VCOUNT (*((volatile uint32 *)(MEM_IO + 0x0006)))
#define REG_KEY_INPUT (*((volatile uint32 *)(MEM_IO + 0x0130)))

#define KEY_A 0x0001
#define KEY_B 0x0002

#define KEY_SELECT 0x0004
#define KEY_START 0x0008

#define KEY_RIGHT 0x0050
#define KEY_LEFT 0x0060
#define KEY_UP 0x0070
#define KEY_DOWN 0x0080

// #define KEY_R 0x0100
// #define KEY_L 0x0100

#define KEY_ANY 0x03FF

typedef unsigned int uint32;

// Gross Globals Area
int width = 240;
int height = 160;
int initialized = 0;
int started = 0;
int time = 0;

// Called once on the start of the application
void initialize(volatile unsigned short vram[])
{
  // Initializer Function called on game start
  clearRoutine(vram, 0x739c);
  drawRoutine(vram, coleRoutine, sizeof(coleRoutine) / sizeof(coleRoutine[0]), coleMap, 10, 10);
  drawRoutine(vram, lnr, sizeof(lnr) / sizeof(lnr[0]), lnrMap, 100, 100);
  addDontDraw(10, 10, 77, 30);
}

// Called consistently
void update(volatile unsigned short vram[], int keyStates)
{
  time++;
  // line(vram, rand() % width, rand() % height, rand() % width, rand() % height, rand());
  if (keyStates & KEY_A)
  {
    if (keyStates & KEY_B)
    {
      started = 1;
      srand(time);
    }
  }

  if (started == 1)
  {
    line(vram, rand() % width, rand() % height, rand() % width, rand() % height, rand());
  }
}

int main(void)
{
  volatile unsigned char *ioram = (unsigned char *)0x04000000;
  ioram[0] = 0x03;
  ioram[1] = 0x04;

  volatile unsigned short *vram = (unsigned short *)0x06000000;
  uint32 keyStates = 0;

  srand(0);

  while (1)
  {
    // TODO: Currently only works with Vblank, add Hblank
    while (REG_DISPLAY_VCOUNT >= 160)
      ;
    while (REG_DISPLAY_VCOUNT < 160)
    {

      if (initialized == 0)
      {
        initialize(vram);
        initialized = 1;
      }

      keyStates = ~REG_KEY_INPUT & KEY_ANY;

      update(vram, keyStates);
    }
  }

  return 0;
}
