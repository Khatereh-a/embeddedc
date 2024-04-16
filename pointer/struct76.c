#include <stdio.h>
#include <string.h>
// embedded C - struct & pointer - pass a structure by reference to a function

typedef struct {
	int   number;
	char  description[30];
	int   inventory;
	float purchase;
	float retail;
}Product; //definition

void read(Product *); //pass by reference
void print(Product);  // pass by value

int main(void)
 {
	Product a; 
	Product *pa; //declaration
	pa = &a;
	
	pa->number = 1023; 
    strcpy(pa->description, "dvd");

    read(&a); //variable a is passed by reference
    print(a); //variable a is passed by value
    
	return 0;
 } 
 
 void read(Product *p)
 {
	 printf("Enter product number : ");
	 scanf("%d%*c", &(p->number));
	
	 printf("Enter product description: ");
	 gets(p->description);
	
	 printf("Enter the product inventory level: ");
	 scanf("%d%*c", &(p->inventory));
	
	 printf("Enter purchase price: ");
	 scanf("%f%*c", &(p->purchase));
	
	 printf("Enter retail price: ");
	 scanf("%f%*c", &(p->retail));
 }
 
 
 void print(Product z)
 {
	 printf("\nProduct number:\t%d\n", z.number);
	 printf("description:\t%s\n", z.description);
	 printf("inventory level:\t%d\n", z.inventory);
	 printf("purchase price:\t%.2f\n", z.purchase);
	 printf("retail price:\t%.2f\n", z.retail);
 }