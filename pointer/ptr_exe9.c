#include <stdio.h>
#include <math.h>

void Read(int *,int *); 

float add(int, int);
float subtract(int, int);
float multiply(int, int);
float division(int, int); 

int main(void)
 {
  	int num1,num2;
  	float result;
  	 	
  	int choice;
    float(*fptr)(int, int);
    
    Read(&num1,&num2);
    while(1)
    {
	
	    printf("Choose an operand:\n");
	    printf("\t0:\taddition\n\t1:\tsubtraction\n\t2:\tmultiplication\n\t3:\tdivision\n");
	    scanf("%d%*c", &choice);
	    switch (choice)
	    {
	    	case 0 : fptr = add; 
	    	break;
	    	case 1:  fptr = subtract; 
	    	break;
	    	case 2: fptr = multiply;
	    	break;
	    	case 3: fptr = division;
	    	break;
		}
	    if((choice>=0) & (choice<4)) 
		{ 		
		result=(*fptr)( num1, num2); 
		printf("The result of this operation is: %f\n\n", result); 
		break;}
    }
 }
 
void Read(int *a,int *b) 
{
	printf("Enter 2 integer numbers: ");
    scanf("%d %d%*c", a, b); 
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