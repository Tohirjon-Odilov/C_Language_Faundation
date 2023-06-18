#include <stdio.h>

int main()
{

  int x1, x2, x3, x4, x5, x6, x7;

  printf("7ta son kiriting: ");
  scanf("%d %d %d %d %d %d %d", &x1, &x2, &x3, &x4, &x5, &x6, &x7);

  if (x1 > x2)
  { // 2
    if (x1 > x3)
    { // 3
      if (x1 > x4)
      { // 4
        if (x1 > x5)
        { // 5
          if (x1 > x6)
          { // 6
            if (x1 > x7)
            {
              printf("Maxsimal son: %d", x1);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
          else
          {
            if (x6 > x7)
            {
              printf("Maxsimal son: %d", x6);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
        }
        else
        {
          // x5
          if (x5 > x6)
          {
            if (x5 > x7)
            {
              printf("Maxsimal son: %d", x5);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
          else
          {
            if (x6 > x7)
            {
              printf("Maxsimal son: %d", x6);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
        }
      }
      else
      {
        // x4
        if (x4 > x5)
        {
          if (x4 > x6)
          { //
            if (x4 > x7)
            { //
              printf("Maxsimal son: %d", x4);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
          else
          {
            if (x6 > x7)
            {
              printf("Maxsimal son: %d", x6);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
        }
        else
        {
          if (x5 > x6)
          {
            if (x5 > x7)
            {
              printf("Maxsimal son: %d", x5);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
          else
          {
            if (x6 > x7)
            {
              printf("Maxsimal son: %d", x6);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
        }
      }
    }
    else
    {
      // x3
      if (x3 > x4)
      {
        if (x3 > x5)
        { // 5
          if (x3 > x6)
          { // 6
            if (x3 > x7)
            { // 7
              printf("Maxsimal son: %d", x3);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
          else
          {
            if (x6 > x7)
            {
              printf("Maxsimal son: %d", x6);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
        }
        else
        {
          if (x5 > x6)
          { // 6
            if (x5 > x7)
            { // 7
              printf("Maxsimal son: %d", x5);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
          else
          {
            if (x6 > x7)
            {
              printf("Maxsimal son: %d", x6);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
        }
      }
      else
      {
        if (x4 > x5)
        {
          if (x4 > x6)
          { // 6
            if (x4 > x7)
            { // 7
              printf("Maxsimal son: %d", x4);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
          else
          {
            if (x6 > x7)
            {
              printf("Maxsimal son: %d", x6);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
        }
        else
        {
          if (x5 > x6)
          {
            if (x5 > x7)
            {
              printf("Maxsimal son: %d", x5);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
          else
          {
            if (x6 > x7)
            {
              printf("Maxsimal son: %d", x6);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
        }
      }
    }
  }
  else
  {
    // x2
    if (x2 > x3)
    {
      if (x2 > x4)
      { // 4

        if (x2 > x5)
        { // 5

          if (x2 > x6)
          { // 6

            if (x2 > x7)
            { // 7
              printf("Maxsimal son: %d", x2);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
          else
          {
            if (x6 > x7)
            {
              printf("Maxsimal son: %d", x6);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
        }
        else
        {
          if (x5 > x6)
          {
            if (x5 > x7)
            { // 7
              printf("Maxsimal son: %d", x5);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
          else
          {
            if (x6 > x7)
            {
              printf("Maxsimal son: %d", x6);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
        }
      }
      else
      {
        if (x4 > x5)
        {
          if (x4 > x6)
          { // 6
            if (x4 > x7)
            { // 7
              printf("Maxsimal son: %d", x4);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
          else
          {

            if (x6 > x7)
            {
              printf("Maxsimal son: %d", x6);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
        }
        else
        {
          if (x5 > x6)
          {
            if (x5 > x7)
            {
              printf("Maxsimal son: %d", x5);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
          else
          {
            if (x6 > x7)
            {
              printf("Maxsimal son: %d", x6);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
        }
      }
    }
    else
    {
      if (x3 > x4)
      { // 4
        if (x3 > x5)
        { // 5
          if (x3 > x6)
          { // 6
            if (x3 > x7)
            { //
              printf("Maxsimal son: %d", x3);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
          else
          {
            if (x6 > x7)
            {
              printf("Maxsimal son: %d", x6);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
        }
        else
        {
          if (x5 > x6)
          { // 6
            if (x5 > x7)
            { // 7
              printf("Maxsimal son: %d", x5);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
          else
          {
            if (x6 > x7)
            {
              printf("Maxsimal son: %d", x6);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
        }
      }
      else
      {
        if (x4 > x5)
        { // 5
          if (x4 > x6)
          { // 6
            if (x4 > x7)
            { // 7
              printf("Maxsimal son: %d", x4);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
          else
          {
            if (x6 > x7)
            {
              printf("Maxsimal son: %d", x6);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
        }
        else
        {
          if (x5 > x6)
          {
            if (x5 > x7)
            {
              printf("Maxsimal son: %d", x5);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
          else
          {
            if (x6 > x7)
            {
              printf("Maxsimal son: %d", x6);
            }
            else
            {
              printf("Maxsimal son: %d", x7);
            }
          }
        }
      }
    }
  }
  return 0;
}