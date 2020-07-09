#ifndef DRAWROUTINES
#define DRAWROUTINES

struct routine
{
  int routineNumber;
  int amountOfColors;
  int color[];
};

int colorMap[] = {0x03E0, 0x001F};

// A routine needs an integer assigment, the amount of pixels, and an array of pixels mapped to the color map
struct routine Routines = {0, 11, {1, 1, 1, 0, 2, 1, 2, 1, 0, 2, 0}};

void drawRoutine(volatile unsigned short vram[], int routineNumber)
{
  int i = 0;
  int z = 0;
  int x = 0;
  int y = 0;

  for (i = 0; i < sizeof(Routines) / sizeof(struct routine); i++)
  {
    if (routineNumber == Routines.routineNumber)
    {
      for (z = 0; z < Routines.amountOfColors; z++)
      {
        if (Routines.color[z] == 0)
        {
          x = 0;
          y++;
        }
        else
        {
          place(vram, x, y, colorMap[Routines.color[z] - 1]);
          x++;
        }
      }
    }
  }
}

#endif
