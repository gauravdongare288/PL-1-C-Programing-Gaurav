#include <stdio.h>

float area Triangle(float base, float height)
{
  return 0.5 * base * height;
}

int main()
{
  float base, height, area;

  printf("Enter base: “);
  scanf("%f" &base);
  printf("Enter height: “);
  scanf("%f", &height);

  area = areaTriangle(base, height);

  printf("Area of Triangle :%f", area);

  return O;
}
