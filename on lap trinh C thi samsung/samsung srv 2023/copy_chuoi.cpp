#include <stdio.h>
#include <string.h>

int main (){
	char s_1[50] = "XIN CHAO PHAT";
	char s_2[50];
	
	printf("\ns_1 = %s", s_1);
	printf("\ns_2 = %s", s_2);
	
	strcpy(s_2, s_1);
	printf("\n-----------");
	printf("\ns_1 = %s", s_1);
	printf("\ns_2 = %s", s_2);
}
