#ifndef DRAWROUTINES
#define DRAWROUTINES

struct routine
{
  int routineNumber;
  int amountOfColors;
  int color[];
};

colorMap[] = {0x001F, 0x03E0};

struct routine Routines = {0, 2, {0, 1}};

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
        place(vram, x, y, colorMap[Routines.color[z]]);
        x++;
      }
    }
  }
}

#endif
