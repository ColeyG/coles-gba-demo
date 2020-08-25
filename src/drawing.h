#ifndef DRAWING
#define DRAWING

#include "helpers.h"

struct dontDraw
{
  int x;
  int y;
  int width;
  int height;
};

int dontDrawSize = 0;
// NOTE: The don't draw array limit won't cross the array's max size
struct dontDraw dontDraw[1] = {};

int isDontDraw(int x, int y)
{
  if (dontDrawSize > 0)
  {

    int i;
    for (i = 0; i < dontDrawSize; i++)
    {
      if (
          dontDraw[i].x <= x &&
          dontDraw[i].x + dontDraw[i].width > x &&
          dontDraw[i].y <= y &&
          dontDraw[i].y + dontDraw[i].height > y)
      {
        return 1;
      }
    }
  }

  return 0;
}

void addDontDraw(int x, int y, int width, int height)
{
  dontDraw[dontDrawSize].x = x;
  dontDraw[dontDrawSize].y = y;
  dontDraw[dontDrawSize].width = width;
  dontDraw[dontDrawSize].height = height;
  dontDrawSize++;
}

void place(volatile unsigned short vram[], int x, int y, int color)
{
  if (!isDontDraw(x, y))
  {
    vram[y * 240 + x] = color;
  }
}

void clearRoutine(volatile unsigned short vram[], int color)
{
  int x = 0;
  int y = 0;

  for (y = 0; 160 > y; y = y + 2)
  {
    for (x = 0; 240 > x; x++)
    {
      place(vram, x, y, color);
    }
  }

  for (y = 161; 0 < y; y = y - 2)
  {
    for (x = 0; 240 > x; x++)
    {
      place(vram, x, y, color);
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
