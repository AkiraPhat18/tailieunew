#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int check(char c[]){
	int i;
	for(i=0; i<strlen(c); i++){
		if(isupper(c[i]))
			return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();// doc not phim enter trong bo dem ban phim
	
	int cnt = 0;
	while(t--){
		char c[1000];
		gets(c);
		char *token = strtok(c, " ");
		while(token != NULL){
		//printf("%s\n", token); 
			if(check(token))
				printf("%s", token);
			token = strtok(NULL, " ");
		}
			printf("\n");
	}
}
