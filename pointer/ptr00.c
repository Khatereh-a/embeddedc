#include <stdio.h>

 float OneThird(float);
 float OneFifth(float);

 int main()
 {
 float(*pf)(float);
 pf = OneThird;
 printf("%f\n", (*pf)(3.0));
 return 0;
 }

 float OneThird(float x)
 {
 return x / 3;
 }

 float OneFifth(float x)
 {
 return x / 5;
 } 