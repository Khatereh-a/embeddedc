#include <stdio.h>
void convfun(int,int*,int*,int*);

int main(void){
	
	int a,hr,min,sec;
	printf("Enter a time in seconds: ");
    scanf("%d%*c", &a);
    
    convfun(a,&hr,&min,&sec);
    printf("hour=%d,min=%d,sec=%d",hr,min,sec);
	return 0;
}

void convfun(int x,int *h,int *m,int *s)
{
	
	*h=x/3600;
	*m=(x%3600)/60;
	*s=(x%3600)%60;
}