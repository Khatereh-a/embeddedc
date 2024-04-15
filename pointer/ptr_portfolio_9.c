#include "stdio.h" //printf
//Youtube - Portfolio Courses - c programming tutorial - pass by reference to functions 
//array and pointer

int main(void) 
{
	int matrix[3][5]=
	{
		{1,2,3 },{4,5,6,7},{8,9,10,11}
	};
	
	//point to first element of row[0]
	printf("   matrix[0]: %p\n",matrix[0]);
	printf(" matrix[0]+1: %p\n",matrix[0]+1);
	printf(" *matrix[0]+1: %d\n",*(matrix[0]+1));
	
	// point to entire row[0]
	printf("  &matrix[0]: %p\n",&matrix[0]);	
	printf("&matrix[0]+1: %p\n",&matrix[0]+1);
	
	//point to first array of matrix
	printf("   matrix: %p\n",matrix);
	printf(" matrix+1: %p\n",matrix+1);
	
	//point to entire matrix
	printf("  &matrix: %p\n",&matrix);		
	printf("&matrix+1: %p\n",&matrix+1);
	
	return 0;
}