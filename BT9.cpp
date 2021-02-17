#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int gt(int n){
	if(n<=1)
	return 1;
	else
	return n*gt(n-1);
	}
int hammu(int n){
	if(n<=1)
	return 2;
	else
	return 2*hammu(n-1);
	}
int main(){
	int n=10;
float x = 1.0;
for(int i=1;i<=n;i++)
	x = x + (float) hammu(i)/gt(i);
	printf("e^2 = %f",x);
}

