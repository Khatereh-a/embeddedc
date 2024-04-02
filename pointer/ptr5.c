#include <stdio.h>

void Read(char [7][4] , float[2][7]);
void Print(char [7][4] ,float [2][7]);
void Calculate(float [2][7] ,int * ,int*);

int main(void){

  float temp[2][7];
  char days[7][4] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
  int indxmin,indxmax;
  
  Read(days,temp);
  Print(days,temp);
  //Print(daynighttemp);
  Calculate(temp, &indxmin,&indxmax);
  //Print(minmax);
  return 0;	
}

void Read(char d[7][4], float t[2][7])
{
  	
   for(int i=0;i<7;i++)
   {
   	printf("Enter %s day/night temp respectively: ", d[i]);
    scanf("%f%f%*c", &(t[0][i]), &(t[1][i]));
   }
   
}

void Print(char d[7][4], float t[2][7])
{

	for(int i=0;i<7;i++){	
		
	  printf(   "    %s   \n",d[i]);
	  printf("Day    %f   \n",t[0][i]);	  
	  printf("Night  %f   \n",t[1][i]);		
	}               
	
 	
}

void Calculate(float t[2][7] ,int *min ,int*max)
{
	for(int j=0;j<7;j++)
	{
	   for (int i=0;i<7;i++)
	   {
	   	 if(t[j][i] < *min);
	   	  {  	 	
	   	 	*min = t[j][i];
	        location = c + 1;
		  }   	    	
	   }		
	}
}