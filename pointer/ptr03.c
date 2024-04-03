#include <stdio.h>
 #define SIZE 10

 int function(int, int[]);

 int main(void)
 {
 int i, n, res;
 int b[SIZE];

 n = 5;
 for (i = 0; i < SIZE; ++i)
 b[i] = i;

 printf("Before the function call: n = %d\n", n);
 printf("and the array b contains: ");
 for (i = 0; i < SIZE; ++i)
 printf("%4d", b[i]);

 res = function(n, b);

 printf("\n\nAfter the function call: n = %d,\n", n);
 printf("the array b contains: ");
 for (i = 0; i < SIZE; ++i)
 printf("%4d", b[i]);

 printf("\nand res = %d\n", res);

 return 0;
 }

 int function(int x, int y[])
 {
 int i;

 x = x * x;

 for (i = 0; i < SIZE; ++i)
 y[i] = i * i;

 return x;
 }
