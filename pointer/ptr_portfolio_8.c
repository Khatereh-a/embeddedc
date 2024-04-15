#include "stdio.h" //printf


void function(void);

int main(void){
	
	void (*fptr1)() = function;
	
	(*fptr1)();
	fptr1();
	
	void (*fptr2)() = &function;
	
	(*fptr2)();
	fptr2();
	
	printf("%p\n",fptr1);	
	printf("%p\n",fptr2);	
		return 0;

}

void function(void)
{
 printf("function\n");	
	
}