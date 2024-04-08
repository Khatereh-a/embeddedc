#include <stdio.h>

void Read(char [7][4] , float[2][7]);
void Print(char [7][4] ,float [2][7],int * ,int*);
void Calculate(float [2][7] ,int * ,int*);

int main(void){

  float temp[2][7]={{5,5.5 ,7 ,6 ,7.5 ,8 ,8.5},{ -1.5, -0.5, 0, -1, 0, 1, 1.5}};
  char days[7][4] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
  int indxmin[2]={0},indxmax[2]={0};
  
  //Read(days,temp);
  
  //Print(daynighttemp);
  Calculate(temp, indxmin,indxmax);
  Print(days,temp,indxmin,indxmax);
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

void Print(char d[7][4], float t[2][7],int *minindx ,int*maxindx)
{

	for(int i=0;i<7;i++){	
		
	  printf(   "    %s   \n",d[i]);
	  printf("Day    %f   \n",t[0][i]);	  
	  printf("Night  %f   \n",t[1][i]);		
	}  
	printf("Min:   Day:   %s:%f  Night:  %s:%f   \n",d[*minindx],t[0][*minindx],d[*(minindx+1)],t[1][*(minindx+1)]); 
	printf("Max:   Day:   %s:%f  Night:  %s:%f   \n",d[*maxindx],t[0][*maxindx],d[*(maxindx+1)],t[1][*(maxindx+1)]); 	
    //printf("Min:   %d   \n",*minindx); 	

}

void Calculate(float t[2][7] ,int *minindx ,int*maxindx)
{
	float min=t[0][0];
	float max=t[0][0];
	//printf("Min max: %1f %1f  %d  %d  \n",min , max, *minindx,*maxindx ); 
	for(int j=0;j<2;j++)
	{
	   for (int i=0;i<7;i++)
	   {
	   	 if(t[j][i] < min)
	   	  { 
			//(j=0 ? (*minindx = i):(*(minindx+1) = i)  )	 ;
			min = t[j][i];	
			if(j==0) (*minindx) = i;
			else if (j==1) 	*(minindx+1) = i;  	 	
		  }  
		  
		 if(t[j][i] > max)
	   	  { 
	   	    max = t[j][i];
		//	(j=0 ? (*maxindx = i):(*(maxindx+1) = i)  )	; 
			if(j==0) (*maxindx) = i;
			else if (j==1) 	 *(maxindx+1) = i;		   	 	
		  }    	    	
	   }		
	}
	
	printf("Min max: %1f %1f  %d  %d  %d %d\n",min , max, *minindx,*(minindx+1),*maxindx ,*(maxindx+1)); 
}