#include <stdio.h>
#include <math.h>

void Read(int *,int *); 

float add(int, int);
float subtract(int, int);
float multiply(int, int);
float division(int, int); 

float Choose( int, int, int);

int main(void)
 {
  	int num1,num2;
  	float result;
  	 	
  	int choice;
    float(*fptr[4])(int, int)= { add, subtract, multiply, division };
    
    Read(&num1,&num2);
    while(1)
    {
	
	    printf("Choose an operand:\n");
	    printf("\t0:\taddition\n\t1:\tsubtraction\n\t2:\tmultiplication\n\t3:\tdivision\n");
	    scanf("%d%*c", &choice);
	    if((choice>=0) & (choice<4)) 
		{ 		
		result=(*fptr[choice])( num1, num2); 
		//result= Choose(num1, num2, fptr[choice]);
		printf("The result of this operation is: %f\n\n", result); 
		break;}
    }
 }
 
void Read(int *a,int *b) 
{
	printf("Enter 2 integer numbers: ");
    scanf("%d %d%*c", a, b); 
}

float Choose(int a, int b,float(*fptr[ch])(int int))
 {
 return (*fptr[ch])(a,b);
 }


float add(int x, int y) 
 {
 return x + y;
 }

 float subtract(int x, int y) 
 {
 return x - y;
 } 
 
 float multiply(int x, int y) 
 {
 return x * y;
 }
 
  float division(int x, int y) 
 {
 return (float)x / (float) y;
 }