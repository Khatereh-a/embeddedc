#include "stdio.h" //printf
#include "stdlib.h" //malloc
//Youtube - Portfolio Courses - c programming tutorial 
//dynamic memory allocation
void memory_hog(int); //memory leak test

int main(void)
 {
   int size = 10;
   //int *a=malloc(10 * sizeof (int));
   int *a=calloc(size , sizeof (int)); //initialize space to zero unlike malloc
   
   printf("a : %p\n",a);
   for(int i=0; i<size;i++)
    {
	a[i]=size-i;
    printf("a[%d]=%d\n",i ,a[i]);
    }
    
    a= realloc (a,sizeof(int) * (size+5));
    for(int i=size; i<(size+5);i++)
    {
	a[i]=11;
    printf("a[%d]=%d\n",i ,a[i]);
    }
    //int *save =a; 
    
    free(a); //memory leak //free(memory) does not change the value. 
    
    /*printf("save : %p\n",save);
    for(int i=0; i<size;i++)
    {
	save[i]=size-i;
    printf("a[%d]=%d\n",i ,save[i]);
    }*/
  
  //while(1) memory_hog(128000);
  
  return 0;
}

void memory_hog(int size)
{
	int *a = malloc (size); //allocate memory without free it
}