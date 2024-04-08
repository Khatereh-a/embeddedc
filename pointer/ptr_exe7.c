#include <stdio.h>
#include <string.h>
 void Print(char *,char *,char *,char*);
 void Read(char *);
 int main(void)
 {
 	
 	char Str[10],cnvstr[10];
 	char Min,Max;
 	int res=1;	     
        while(res==1)
        {
	        Read(Str);
		 	printf("%s\n", Str);  
		 	if(Str[0] != '\0')
		 	{
		 		Print(Str,cnvstr,&Min,&Max); 
				printf(" %s\n, Min:%c\n, Max:%c", cnvstr,Min,Max); 		
			}
			else printf("Error: word or series of letters is less than 2 chars!/n ");	
			
			memset(Str,0,10);
			memset(cnvstr,0,10);
			printf("\n again? Yes(1) or No (0): ");
            scanf("%d%*c", &res);
		}	 	
 }
 
 
  void Read(char *str)
 {
	  printf("Enter a word or a series of letters: ");
      scanf("%s%*c", str); //address
	   
	  //printf("%s", str);   //value  
	  if(strlen(str)<2) 
	{
		*str='\0';
		printf(" %s ", str); 
	}	    
 }
 
 
  void Print(char *str,char *temp,char *min,char *max)
  {
  	
  	    temp[0] = str[0]; 
  		temp[1] = str[1];
  		*min='z';
  		*max='A';
  		char *check=NULL;
  		//if(temp[0]>temp[1]) temp[2]=temp[0];
  		//else temp[2]=temp[1];
  		
  		int size= strlen(str);
  		check = str;
  		
  		for(int i=0;i<(size-1);i++)
		  {
		    if(*(str+i)> *(str+i+1))  *(temp+i+2) = *(str+i);
			else *(temp+i+2) = *(str+i+1);										   
		  }
		  
	    for(int i=0;i<size;i++)
		  {	
			   printf("%c\n", *check);
				if(*check < *min)
		   	    { 
			  	 *min = *check;		  	 			   		
			    }
				
				if(*check > *max)
		   	    { 
		   	     *max = *check;	   	 	
			    }
				
				check++; 
		   }
  }