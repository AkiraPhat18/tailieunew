#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//int check(char c[]){
//	int i;
//	for(i=0; i<strlen(c); i++){
//		if(isupper(c[i]))
//			return 0;
//	}
//	return 1;
//}

void sx(char a[][50], int n ){
	int i;
	for(i =0; i<n; i++){
		int min = i;
		int j;
		for(j=i+1; j<n; j++){
			if(strcmp(a[j], a[min]) < 0) min = j;
		}
		char tmp[100];
		strcpy(tmp, a[min]);
		strcpy(a[min], a[i]);
		strcpy(a[i], tmp);
	}
}

int main(){
	char c[1000];
	gets(c);
	char a[20][50];
	int n, i;
	char *token = strtok(c, " ");
	while(token != NULL){
		strcpy(a[n], token);
		++n;
		token = strtok(NULL, " ");
	}
	sx(a, n);
	for(i =0; i<n; i++){
		printf("%s", a[i]);
	}
	printf("\n");
	
}
