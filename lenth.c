#include <stdio.h>

int main() {
  int l, b, r,c,d,g,h;

  printf("Enter the length of the rectangle: ");
  scanf("%d", &l);

  printf("Enter the breadth of the rectangle: ");
  scanf("%d", &b);

  printf("Enter the radius of the circle: ");
  scanf("%d", &r);
 c= l * b;
 d= 2 * (l + b);
 g= 3.14 * r * r;
 h= 2 * 3.14 * r;

  // Print the results
  printf("The area of the rectangle is %d\n",c);
  printf("The perimeter of the rectangle is %d\n",d);
  printf("The area of the circle is %f\n",g);
  printf("The circumference of the circle is %f\n",h);
  return 0;
}
