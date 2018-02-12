#include <bool.h>

char diacritics[] = {"_", "(", ")", "/", "\\", "=", "|" };

int isDiacritic(char a)
{
  for (int i = 0; i < NUM_DIACRITICS; i++)
  {
    if (a == diacritics[i])
    {
      return i;
    }
  }
  return -1;
}

void normalize_betacode(char *a)
{
  while (a++)
  {
    char *start = NULL;
    int diacritic = 0;
    while (a && (diacritic = isDiacritic(a) > -1)
    {
      if (start == NULL)
      {
        start = a;
      }
      if (a ==)
      a++;
    }
    if (start)
    {
      char *end = a - 1;

    }
  }

}

int main()
{
  char a[10];
  normalize_betacode(a);
}
