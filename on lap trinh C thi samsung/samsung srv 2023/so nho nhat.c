#include <stdio.h>

void nhap(float &a) 
{
	printf("Nhap a: ");
	scantf("%f", &a);
}

float MAX(float a, float b, float c){
	float M = a;
	if (b<M) M = b;
	if (c<M) M = c;
	return M;
}

float MIN(float a, float b, float c){
	float M = a;
	if (b<M) M = b;
	if (c<M) M = c; 
	return M;
}

int main () {
	float a, b, c, d, e;
	nhap(a);
	nhap(b);
	nhap(c);
	float T = MAX(a, b, c);
	float P = MIN(a, b, c);
	printf("So lon nhat trong day 3 so la: %f\n", T);
	printf("So nho nhat trong day 3 so la: %f\n", P;
	nhap(d), nhap( e);
	printf("So lon nhat trong day 5 so la: %f\n", T);
	printf("So lon nhat trong day 5 so la: %f\n", P);
}
