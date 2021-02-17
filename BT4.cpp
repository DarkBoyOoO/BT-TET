#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
int a[255],n,i,max,min;
printf("nhap kich thuoc chuoi ki tu: n = ");
scanf("%d",&n);
printf("\nnhap chuoi: ");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
max = a[0];
min = a[0];
for(i=0;i<n;i++){
	max = max<a[i]?a[i]:max;
	min = min>a[i]?a[i]:min;
	}
printf("max = %d va min = %d",max,min);
}

