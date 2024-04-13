#include "stdio.h" //printf
//Youtube - Portfolio Courses - c programming tutorial - pass by reference to functions

void swap(int a, int b); //pass by value
void swap2(int *a, int *b); //pass by reference

int main(void) //calling environment
 {
  	int x = 5;
    int y = 10;
  
    swap(x, y);
    printf("x: %d y: %d\n", x, y);


    swap2(&x, &y);
    printf("x: %d y: %d\n", x, y);
 	
 	return 0 ;
 }


void swap(int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void swap2(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}