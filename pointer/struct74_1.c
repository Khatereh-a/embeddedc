#include <stdio.h>
#include <string.h>
// embedded C - struct & function - pass by value 
typedef struct {
	int   number;
	char  description[30];
	int   inventory;
	float purchase;
	float retail;
}Product; //definition

Product adapt(Product x);

int main(void)
 {
 	Product art[100]; //declaration
 	Product art1 = {12, "plasma TV", 35, 245.50, 999.99};
 	
 	art[5] = adapt(art1);
    printf("art[5]: %d, %s, %d, %f , %f\n", art[5].number, art[5].description, art[5].inventory, art[5].purchase,art[5].retail); 	
 	return 0;
 }
 
Product adapt(Product x)
{
	x.number += 1000;
	x.retail *= 1.2;
	return x;
}
