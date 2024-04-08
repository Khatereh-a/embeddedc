#include <stdio.h>

 int main(void)
 {
 int a = 5;
 int *p = NULL;
 p = &a;
 printf("The address of the variable a: %x\n", &a);
 printf("The content of the variable p: %x\n", p);
 printf("The content of the variable a: %d\n", a);
 printf("The content of the variable p points to: %d\n", *p);
 printf("The address of the pointer variable: %x\n\n", &p);
 return 0;
 }