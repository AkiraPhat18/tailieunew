#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(){
	char c[1005];
	gets(c);
	int i;
	int cnt1 =0, cnt2 =0;
	//fgets(c,1005,stdin)
	for(i=0; i<strlen(c);i++){
		c[i] = tolower(c[i]);// chuyen cac ky tu thanh dang in thuong
		if(isalpha(c[i])) ++cnt2;
		else if(isdigit(c[i])) +cnt2;
	}
	printf("%s", c);
	printf("%d %d %d",cnt1, cnt2, strlen(c)-cnt1-cnt2);
}
