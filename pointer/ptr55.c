#include <stdio.h>
//array of function pointers
 int add(int, int);
 int subtract(int, int);

 int main(void)
 {
 int a, choice;
 int(*fptr[2])(int, int)= { add, subtract };
 
 printf("Enter your choice:\n");
 printf("\t0:\taddition (10 + 2)\n\t1:\tsubtraction (10 - 2)\n");
 scanf("%d%*c", &choice);

 a=(*fptr[choice])( 10, 2);

 printf("The requested operation gives: %d\n", a);
 return 0;
 }

 int add(int x, int y) 
 {
 return x + y;
 }

 int subtract(int x, int y) 
 {
 return x - y;
 }