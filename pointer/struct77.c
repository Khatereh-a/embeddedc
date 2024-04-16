#include <stdio.h> //FILE fread fwrite fopen
#include <stdlib.h>
#include <string.h>
// embedded C - struct & file - read write
// Structures can be written to a binary file or read from a binary file as a whole using fread and fwrite

#define FILENAME "phone.dat"

 typedef struct {
 char name[20];
 char phoneNr[12];
 } Phone;
 
int readPhone(Phone *);

 int main(void)
 {
 Phone phone;
 FILE* fp;

 if ((fp = fopen(FILENAME, "wb")) == NULL)
 {
 printf("\"%s\" cannot be opened\n", FILENAME);
 exit(1);
 }

 while (readPhone(&phone))
 //size_t fwrite(const void * _Str,size_t _Size,size_t _Count,FILE * _File);
 fwrite(&phone, sizeof(Phone), 1, fp);

 fclose(fp);
 return 0;
 }

 int readPhone(Phone *pa)
 {
 printf("Enter name (<enter> to stop): ");
 gets(pa->name);

 if (pa->name[0] == '\0')
 return 0;

 printf("Enter phone number : ");
 gets(pa->phoneNr);
 return 1;
 }
