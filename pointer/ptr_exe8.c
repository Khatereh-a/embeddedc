#include <stdio.h>
#include <string.h>
 void CalcPrint(int ,int ,int *,int *);
 void Read(int *,int *);
 
 int main(void)
 {
   int number=1,limit=1,oddsum,evensum;

   while ((number!=0) & (limit!=0)){
   Read(&number,&limit);
   //printf(" %d %d \n ", number, limit);
   CalcPrint(number,limit,&oddsum,&evensum);
   
   printf("the sum of the even numbers is %d \n ", evensum); 
   printf("the sum of the odd numbers is %d \n ", oddsum); 
   
   }
 }
 
void Read(int * num,int * lim)
{
	printf("enter the number you want to use for the table of multiplication: ");
    scanf("%d%*c", num);
	
	printf("enter the limit: ");
    scanf("%d%*c", lim);           
}

void CalcPrint(int num,int lim,int *sodd,int *sevn)
{
	*sevn=0;
	*sodd=0;
	
	for(int i=num;i<lim;i+=num)
	{
		printf("%d \n", i); 
		if(i%2==0) { *sevn = i + (*sevn);}
		else *sodd += i;
	}
}