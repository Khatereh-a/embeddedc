#include "stdio.h" //printf
#include "stdlib.h" //malloc
//Youtube - Portfolio Courses - c programming tutorial - introduction to pointers
//dynamic memory allocation
int main(void)
 {
   //int a[10];
   int *a;
   int length;
   
   printf("enter a length: ");
   scanf("%d%*c", &length);
   
   a = malloc(length * sizeof (int));
   
   printf("a : %p\n",a);
   for(int i=0; i<length;i++)
    {
	a[i]=i;
    printf("a[%d]=%d\n",i ,a[i]);
}
    free(a); //memory leak
  
  return 0;
}