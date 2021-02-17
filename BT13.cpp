#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	int mt[255][255];
	int hang;
	int cot;
	} matran;

matran nhap(){
	matran tam;
printf("nhap kich thuoc ma tran:\nso hang: ");
scanf("%d", &tam.hang);
printf("so cot: ");
scanf("%d", &tam.cot);
printf("nhap ma tran: ");
	for(int i=0; i<tam.hang; i++)
		for(int j=0; j<tam.cot; j++)
		scanf("%d", &tam.mt[i][j]);
return tam;
}

void xuat(matran kq){
	for(int i=0;i<kq.hang;i++){
		for(int j=0;j<kq.cot;j++)
		printf(" %d ",kq.mt[i][j]);
		printf("\n");
}
}

matran chuyenvi(matran a){
	matran kq;
	kq.hang = a.cot;
	kq.cot = a.hang;
	for(int i=0; i<kq.hang; i++)
	for(int j=0; j<kq.cot; j++)
		kq.mt[i][j] = a.mt[j][i];
	return kq;
	}
	
int main(){
	matran a;
	a = nhap();
	a = chuyenvi(a);
	printf("ma tran chuyen vi la:\n");
	xuat(a);
}

