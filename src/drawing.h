#ifndef DRAWING
#define DRAWING

#include "helpers.h"

void place(volatile unsigned short vram[], int x, int y, int color)
{
  vram[y * 240 + x] = color;
}

void clearRoutine(volatile unsigned short vram[])
{
  int x = 0;
  int y = 0;

  for (y = 0; 160 > y; y++)
  {
    for (x = 0; 240 > x; x++)
    {
      place(vram, x, y, 0x0000);
    }
  }
}

// This uses [Bresenham's Line Algo](https://en.wikipedia.org/wiki/Bresenham%27s_line_algorithm) for drawing
void line(volatile unsigned short vram[], int x1, int y1, int x2, int y2, int color)
{
  int x, y, dx, dy, dx1, dy1, px, py, xe, ye, i;
  dx = x2 - x1;
  dy = y2 - y1;
  dx1 = absoluteDouble(dx);
  dy1 = absoluteDouble(dy);
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

void rect(volatile unsigned short vram[], int x, int y, int width, int height, int color)
{
  line(vram, x, y, x + width, y, color);
  line(vram, x + width, y, x + width, y + height, color);
  line(vram, x, y, x, y + height, color);
  line(vram, x, y + height, x + width, y + height, color);
}

#endif
