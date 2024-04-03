#include <stdio.h>
#include <string.h>
 void Print(char *);
 void Read(char *);
 int main(void)
 {
 	char *str = Null;
 	Read(str);
 	if(str != '\0')
 	{
 		Print(str); 		
	}
 	
 }
 
 
  void Read(char *str)
 {
	  printf("Enter a word or a series of letters: ");
      scanf("%s%*c", str);     
	  if(strlen(str)<2) 
	{
		str='\0';
	}	    
 }
 
 
  void Print(char *str)
  {
  	    *temp = *str; 
  		*(++temp)=*(str+1);
  		size= strlen(str);
  		
  	while(*str !='\0')
  	{

  		
  		if(*str > *(str+1) ) *(++temp)= *str;
		else *(++temp)= *(str+1);
	}
  }