#include "stdio.h" //printf
//Youtube - Portfolio Courses - c programming tutorial - pass by reference to functions 
//array and pointer

void add(int x); //pass-by-value

void array_add(int array[]); //pass-by-reference
void array_add_ptr(int *array); //pass-by-reference

int main(void) //calling environment
 {

  int a = 5;
  add(a);

  printf("a: %d\n", a);

  int myarray[5] = {1,2,3,4,5};
  
  array_add_ptr(myarray); //the array "decays to a pointer , array name without an index , memory address
  // array_add(myarray); //myarray : the memory address of the array
  
  
  printf("myarray[0]: %d\n\n", myarray[0]); //value
  
  //point to first element of array 
  printf("  &myarray[0]: %p\n", &myarray[0]);
  printf("&myarray[0]+1: %p\n\n", &myarray[0]+1);
  printf("  myarray: %p\n", myarray); 
  printf("myarray+1: %p\n\n", myarray+1);  
  
  // point to entire array 
  printf("  &myarray: %p\n", &myarray);
  printf("&myarray+1: %p\n", &myarray+1);	
 	return 0 ;
 }
 //  The 'a' variable in main has no relationship to x, it remains unchanged.
void add(int x)
{
  printf("x: %d\n", x);
  x = x + 1;
}

void array_add(int array[])
{

  //printf("array: %p\n", array);

  array[0] = array[0] + 1;
}

// This function is equivalent to the above! 
void array_add_ptr(int *array)
{
  //printf("array: %p\n", array);
  array[0] = array[0] + 1;
} 	