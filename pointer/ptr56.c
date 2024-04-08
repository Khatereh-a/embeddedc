#include <stdio.h>
//Function pointers as function argument
 int add(int, int);
 int subtract(int, int);
 int domath(int(*)(int, int), int, int);

 int main(void)
 {
 int a, b;

 a = domath(add, 10, 2);
 printf("Add with function pointer gives: %d\n", a);

 b = domath(subtract, 10, 2);
 printf("Subtract with function pointer gives: %d\n", b);

 return 0;
 }

 int add(int x, int y) {
 return x + y;
 }

 int subtract(int x, int y) {
 return x - y;
 }

 // run the function pointer with inputs
 int domath(int(*mathop)(int, int), int x, int y) {
 return (*mathop)(x, y);
 }
