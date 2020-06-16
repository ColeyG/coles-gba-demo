#include <time.h>
#include <stdlib.h>

void place(volatile unsigned short vram[], int x, int y, int color)
{
  vram[y * 240 + x] = color;
}

int main(void)
{
  // Write into the I/O registers, setting video display parameters.
  volatile unsigned char *ioram = (unsigned char *)0x04000000;
  ioram[0] = 0x03; // Use video mode 3 (in BG2, a 16bpp bitmap in VRAM)
  ioram[1] = 0x04; // Enable BG2 (BG0 = 1, BG1 = 2, BG2 = 4, ...)

  // Write pixel colours into VRAM
  volatile unsigned short *vram = (unsigned short *)0x06000000;
  // vram[80 * 240 + 115] = 0x001F; // X = 115, Y = 80, C = 000000000011111 = R
  // vram[80 * 240 + 120] = 0x03E0; // X = 120, Y = 80, C = 000001111100000 = G
  // vram[80 * 240 + 125] = 0x7C00; // X = 125, Y = 80, C = 111110000000000 = B

  // place(vram, 10, 10);
  // place(vram, 11, 10);
  // place(vram, 12, 10);
  // place(vram, 13, 10);

  srand(time(NULL));
  // place(vram, rand() % 240, rand() % 160);

  // Wait forever
  while (1)
  {
    place(vram, rand() % 240, rand() % 160, 0x001F);
    place(vram, rand() % 240, rand() % 160, 0x03E0);
    place(vram, rand() % 240, rand() % 160, 0x7C00);
  }

  return 0;
}
