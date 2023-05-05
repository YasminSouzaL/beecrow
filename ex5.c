#include <stdio.h>
#include <stdlib.h>
int main() {
  int X;
  float y,cons=0;
  scanf("%d",&X);
  scanf("%f",&y);
  cons = X/y;
  printf("%2.f km/l",cons);
  return 0;
}