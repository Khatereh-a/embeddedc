#include <stdio.h>

 int main(void)
 {
 int numbers[5], *point;

 point = numbers; 
 *point = 10;

 point++;
 *point = 20;

 point = &numbers[2];
 *point = 30;

 point = numbers + 3;
 *point = 40;

 point = numbers;
 *(point+4) = 50;

 for(int n=0; n<5; n++)
 printf("%d\t",numbers[n]);

 return 0;
 }