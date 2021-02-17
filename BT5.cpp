#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
int a[255],n,i,tong = 0;
printf("nhap kich thuoc chuoi ki tu: n = ");
scanf("%d",&n);
printf("\nnhap chuoi: ");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	tong = tong + a[i];
}
printf("tong = %d va gia tri trung binh = %f",tong,(float) tong / n);
}

