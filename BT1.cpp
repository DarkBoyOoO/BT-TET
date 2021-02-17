#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
int n,h,c;			//n la chieu cao,h la hang,c la cot
printf("Nhap input: n= ");
scanf("%d",&n);
printf("\n");
for(h=0;h<n;h++){
	for(c=1;c<2*n;c++){
	if((c <= (n+h)) && (c >= (n-h)))
		printf("#");
		else
		printf(" ");
	}
	printf("\n");
	}
}

