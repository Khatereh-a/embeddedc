#include <stdio.h>

void ReadValues(float *,float *,float *);
int main(void){
	
	float a, b, c;
	ReadValues(&a,&b,&c);
	printf("a=%f,b=%f,c=%f",a,b,c);
	return 0;
}

void ReadValues(float *x,float *y,float *z)
{	
   printf("Enter 1st int number: ");
   scanf("%f%*c", x);
   printf("Enter 2nd int number: ");
   scanf("%f%*c", y);
   printf("Enter 3rd int number: ");
   scanf("%f%*c", z);	
}