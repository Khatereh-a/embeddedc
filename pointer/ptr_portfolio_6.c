#include "stdio.h" //printf

//Youtube - Portfolio Courses - c programming tutorial 
//returns* a pointer to a function 

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);
int (*select_operation())(int, int);
//int select_operation(void);

int main(void){
	

	int (*fptr)(int,int) = select_operation();
	//int (*fptr)() = select_operation();
	int a =4;
	int b=6;

    int result = fptr(a,b);
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

// A function that *returns* a pointer to a function 
int (*select_operation())(int, int)
//int select_operation(void)
{
  int option = 0;
  printf("Select An Operation: \n");
  printf("1) Subtract\n");
  printf("2) Multiply\n");
  printf("3) Divide\n");
  printf("Enter: ");
  scanf("%d", &option);
  
  // return a function pointer to subtract, multiply or divide (or NULL if
  // invalid input)
  if (option == 1) return subtract;
  else if (option == 2) return multiply;
  else if (option == 3) return divide;
  else return NULL;
}


 