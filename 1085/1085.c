#include <stdio.h>

int main(){
	long long int  h, b, c, s;
	double i = 0;
	scanf("%lld %lld %lld %lld", &h, &b, &c, &s);
	i = (h * b * c * s)/8.0/1024/1024;
	printf("%.1f MB", i);
}