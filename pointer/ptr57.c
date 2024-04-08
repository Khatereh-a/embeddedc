#include <stdio.h>
 #include <math.h>

 double inverse(double);
 double SumOfSquare(double(*)(double), double, double);

 int main(void)
 {
 double start, end, res;
 start = 1;
 end = 3;

 res = SumOfSquare(sqrt, start, end);

 printf("The squares of the square root function add up to: %lf\n", res);

 res = SumOfSquare(inverse, start, end);

 printf("The squares of the inverse function add up to: %lf\n\n", res);
 return 0;
 }

 double inverse(double x)
 {
 return 1.0 / x;
 }

 double SumOfSquare(double(*fptr)(double), double m, double n)
 {
 int k;
 double sum = 0;
 for (k = m; k < n; k++)
 {
 sum += (*fptr)(k) * (*fptr)(k);
 }
 return sum;
 }
