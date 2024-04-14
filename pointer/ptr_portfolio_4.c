#include "stdio.h" //printf

//Youtube - Portfolio Courses - c programming tutorial 
//function pointer

double add(double x, double y);

int main(void){
	
	double (*fptr)(double,double) = add; //declaration pointer to function
	//fptr = add; //memory address of function
	double a = 4;
	double b = 6;
	//double result = fptr(a,b);
	double result = (*fptr)(a,b); //dereferencing
	//printf("result = %f",(*fptr)(4,6));
	printf("result = %f",result);
}

double add(double x, double y)
{
	
	return x+y;
}