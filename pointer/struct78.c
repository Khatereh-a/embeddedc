#include <stdio.h> //FILE fread fwrite fopen
#include <stdlib.h>
#include <string.h>

// embedded C - struct & file - read write
// Structures can be written to a binary file or read from a binary file as a whole using fread and fwrite
 
/*typedef struct
 {
	 unsigned short day;
	 char month[16];
	 unsigned int year;
 } Date;

typedef struct
 {
	 char name[32];
	 Date DateOfBirth; //Nested structure
 } Person;*/

#define FILENAME "phone.dat"

 typedef struct {
 char name[20];
 char phoneNr[12];
 } Phone;
 
void printPhone(Phone *); //pass by reference

 int main()
 {
 	/*struct Person pers;
 	
    fread(&pers, sizeof(pers), 1, fptr); //read data from 1 person from the file referred to by fptr, into the variable pers.
    
    struct Person person[20];
    
    fread(person, sizeof(person[0]), 20, fptr);*/

	Phone phone;
	FILE* fp;
	//FILE * fopen(const char * _Filename,const char *);
	 if ((fp = fopen(FILENAME, "rb")) == NULL) 
	 {
	 printf("\"%s\" cannot be opened\n", FILENAME);
	 exit(1);
	 }
	 
	//size_t fread(void * _DstBuf,size_t _ElementSize,size_t _Count,FILE * _File);
	while (fread(&phone, sizeof(Phone), 1, fp) >0)
	 //fread(&phone, sizeof(Phone), 1, fp);
	 printPhone(&phone);
	
	fclose(fp);
	 
 return 0;
 }

 void printPhone(Phone *pa)
 {
 printf(" %-20s %-12s\n", pa->name, pa->phoneNr);
 }






