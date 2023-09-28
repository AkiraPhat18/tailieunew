#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// int islower(char c)
// int isupper(char c)
// int isalpha(char c)
// int isdigit(char c)

// char tolower(char c)
// char toupper(char c)

// int strlen(char c[]) : tra ve chieu dai cua 1 xau
// int strcmp(char c[], char d[])
// c<d : -1
// c=d : 0
// c>d : 1
// char* strrev(char c[])
// char* strlwr(char c[])
// char* strupr(char c[])
// char* strcpy(char c[], char d[])
// char* strcat(char c[], char d[])

//int atoi(char c[]) : tra ve so int cua xau ban dua
//long long atoll(char c[]) : tra ve so long long xau ban dau



int main (){
	char c[100], d[100];
	gets(c);
	gets(d);
	strcat(c,d);
	printf("%s",c);
}
