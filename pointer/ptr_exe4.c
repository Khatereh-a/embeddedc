#include <stdio.h>
void convfun(int,int*,int*,int*,int*,int*);

int main(void){
	
	int a,hun,fif,twe,fiv,one;
	printf("Enter an amount of money: ");
    scanf("%d%*c", &a);
    
    convfun(a,&hun,&fif,&twe,&fiv,&one);
    printf("hundred=%d,fifty=%d,twenty=%d,five=%d,one=%d",hun,fif,twe,fiv,one);
	return 0;
}

void convfun(int x,int *h,int *f,int *t,int*fv,int*o)
{
	
	*h=x/100;
	*f=(x%100)/50;
	*t=((x%100)%50)/20;
	*fv=(((x%100)%50)%20)/5;
	*o=(((x%100)%50)%20)%5;
}