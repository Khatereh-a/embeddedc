#include <stdio.h>
 #include <string.h>
 #define MAXSTRING 100
 void print_string(char *c);
 int main(void)
 {
 char s1[MAXSTRING], s2[MAXSTRING];
 strcpy(s1, "Mary, Mary, quite contrary.\n");
 strcpy(s2, "How does your garden grow?\n");
 print_string(s1);
 print_string(s2);
 strcat(s1, s2);
 print_string(s1);
 }

 void print_string(char *c)
 {
 	while(*c != '\0')
 	{
	 putchar(*c);
     c++;
	}       
 }