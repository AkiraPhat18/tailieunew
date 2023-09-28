#include <stdio.h>
#include <string.h>

//void my_strcat(char x[1], char x[2]){
//	size_t len1 = strlen(x[1]);
//	size_t len2 = strlen(x[2]);
//	size_t sizex1 = sizeof(x1);
//	
//	if(sizex1<len1+len2+1){
//		printf("Error: Loi x1 kich co khong du");
//	}else{
//		int i;
//		for(int i=len1; i<len1+len2; i++){
//			x1[i] = x2[i-len1];
//		}
//		x1[len1+len2]='\0';
//	}
//	
//}

int main(){
	char s_1[100] = "Xin chao";
	char s_2[20] = "Hong Phat";
	
	printf("\ns_1 = %s", s_1);
	printf("\ns_2 = %s", s_2);
	//strcat(s_1, s_2);
	my_strcat(s_1, s_2)
	printf("\ns_1 = %s", s_1);
	
	
}
