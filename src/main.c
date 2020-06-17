#include <time.h>
#include <stdlib.h>

// Pixel Placer
void place(volatile unsigned short vram[], int x, int y, int color)
{
  vram[y * 240 + x] = color;
}

void line()
{
  // TODO: Create line drawer
}

// Called once on the start of the application
void initialize(volatile unsigned short vram[])
{
  place(vram, rand() % 240, rand() % 160, rand());
}

// Called consistently
void update(volatile unsigned short vram[])
{
  // place(vram, rand() % 240, rand() % 160, rand());
}

int main(void)
{
  // Write into the I/O registers, setting video display parameters.
  volatile unsigned char *ioram = (unsigned char *)0x04000000;
  ioram[0] = 0x03; // Assign our "game to video mode 3"
  ioram[1] = 0x04; // Enable BG2 (BG0 = 1, BG1 = 2, BG2 = 4, ...)

  // Write pixel colours into VRAM
  volatile unsigned short *vram = (unsigned short *)0x06000000;

  srand(time(NULL));

  initialize(vram);

  while (1)
  {
    update(vram);
  }

  return 0;
}
