#include <stdlib.h>
#include <math.h>

// Pixel Placer
void place(volatile unsigned short vram[], int x, int y, int color)
{
  vram[y * 240 + x] = color;
}

// TODO: Refactor this mess. It shouldn't use fabs and externalize it.
void line(volatile unsigned short vram[], int x1, int y1, int x2, int y2, int color)
{
  int x, y, dx, dy, dx1, dy1, px, py, xe, ye, i;
  dx = x2 - x1;
  dy = y2 - y1;
  dx1 = fabs(dx);
  dy1 = fabs(dy);
  px = 2 * dy1 - dx1;
  py = 2 * dx1 - dy1;
  if (dy1 <= dx1)
  {
    if (dx >= 0)
    {
      x = x1;
      y = y1;
      xe = x2;
    }
    else
    {
      x = x2;
      y = y2;
      xe = x1;
    }
    place(vram, x, y, color);
    for (i = 0; x < xe; i++)
    {
      x = x + 1;
      if (px < 0)
      {
        px = px + 2 * dy1;
      }
      else
      {
        if ((dx < 0 && dy < 0) || (dx > 0 && dy > 0))
        {
          y = y + 1;
        }
        else
        {
          y = y - 1;
        }
        px = px + 2 * (dy1 - dx1);
      }
      place(vram, x, y, color);
    }
  }
  else
  {
    if (dy >= 0)
    {
      x = x1;
      y = y1;
      ye = y2;
    }
    else
    {
      x = x2;
      y = y2;
      ye = y1;
    }
    place(vram, x, y, color);
    for (i = 0; y < ye; i++)
    {
      y = y + 1;
      if (py <= 0)
      {
        py = py + 2 * dx1;
      }
      else
      {
        if ((dx < 0 && dy < 0) || (dx > 0 && dy > 0))
        {
          x = x + 1;
        }
        else
        {
          x = x - 1;
        }
        py = py + 2 * (dx1 - dy1);
      }
      place(vram, x, y, color);
    }
  }
}

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
