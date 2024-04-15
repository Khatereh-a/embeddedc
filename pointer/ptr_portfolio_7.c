#include "stdio.h" //printf
#include <stdbool.h> //true/false

//Youtube - Portfolio Courses - c programming tutorial 
//function pointers as an function argument

bool freeze_C(int );
bool freeze_F(int );
void is_freezing( bool (*freeze_check)(int) );

int main(void){
	

	// pass the freeze_C function as an argument to is_freezing
	  printf("\nCelsius...\n\n");
	  is_freezing(freeze_C);
	  is_freezing(freeze_C);
	  
	  // pass the freeze_F function as an argument to is_freezing
	  printf("\nFahrenheit...\n\n");
	  is_freezing(freeze_F);
	  is_freezing(freeze_F);
	
	  printf("\n");
	  
	  return 0;
}

// Celsius,
bool freeze_C(int temperature) {
  if (temperature <= 0) return true;
  else return false;
}

// Fahrenheit,
bool freeze_F(int temperature) {
  if (temperature <= 32) return true;
  else return false;
}
 
//  "callback function"
void is_freezing( bool (*freeze_check)(int) ){
  
  int temperature = 0;
  printf("Enter Temperature: ");
  scanf("%d", &temperature);
  
  if (freeze_check(temperature)) printf("It's freezing!\n");
  else printf("It's NOT freezing!\n");
}
