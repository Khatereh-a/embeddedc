#include <stdio.h>
#include <string.h>
// embedded C - struct

/*struct product{
	int number;
	char description[30];
	int inventory;
	float purchase;
	float retail;
};*/

//struct product art1, art2, art[100];

typedef struct {
	int   number;
	char  description[30];
	int   inventory;
	float purchase;
	float retail;
}Product; //definition

typedef struct
 {
	 unsigned short day;
	 char month[16];
	 unsigned int year;
 } Date;

typedef struct
 {
	 char name[32];
	 Date DateOfBirth; //Nested structure
 } Person;

int main(void)
 {
 	Product art1, art[100]; //declaration
 	
 	art1.number = 12;
    strcpy(art[20].description, "plasma TV"); 
	   
    Product art2 = {12, "plasma TV", 35, 245.50, 999.99};
    
    art[0] = art1;
                
	printf("number : %d\n", art2.number);
    printf("art2: %s, %d, %f , %f\n", art2.description, art2.inventory, art2.purchase, art2.retail);
	
	//Nested struct
	Person p = { "Mark Twain", { 7, "February", 1871 } };
		 	 	
    printf("name : %s\n", p.name);
    printf("date of birth: %s, %u, %u\n", p.DateOfBirth.month, p.DateOfBirth.day, p.DateOfBirth.year);
 	
 	return 0;
 }
 
 