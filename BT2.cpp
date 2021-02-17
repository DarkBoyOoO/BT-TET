#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
float a,b,c,delta;
	printf("nhap a = ");
	scanf("%f",&a);
	printf("\nnhap b = ");
	scanf("%f",&b);
	printf("\nnhap c = ");
	scanf("%f",&c);
if(a==0){
	if(b==0){
		if(c==0)
			printf("phuong trinh vo so nghiem");
		else
		printf("phuong trinh vo nghiem");
	}
	else
		printf("phuong trinh co 1 nghiem x = %f",-c/b);
}
else{	
delta = b*b - 4*a*c;
if(delta > 0)
	printf("phuong trinh co 2 nghiem la x1 = %f va x2 = %f",(-b+sqrt(delta))/2*a,(-b-sqrt(delta))/2*a);
else if(delta == 0)
	printf("phuong trinh co nghiem kep la x1 = x2 = %f",-b/2*a);
else
	printf("phuong trinh vo nghiem");
}
}
