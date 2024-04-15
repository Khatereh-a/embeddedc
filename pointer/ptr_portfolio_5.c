#include "stdio.h" //printf

//Youtube - Portfolio Courses - c programming tutorial 
//array of function pointers


int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);


int main(void){
	
	int (*fptr[])(int,int) = {add,subtract,multiply,divide}; 
	
	int a =4;
	int b=6;

	int result = (*fptr[0])(a,b); 
    
	printf("result = %d",result);
    //printf("result: %d\n", (*fptr)(4,6));
}

int add(int x, int y)
{
	
	return x+y;
}

int subtract(int x, int y)
{
	return x-y;
}
int multiply(int x, int y)
{
	return x*y;
}
int divide(int x, int y)
{
	return x/y;
}




 