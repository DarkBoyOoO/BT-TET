#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	int mt[255][255];
	int hang;
	int cot;
	} matran;

matran nhap(int x){
	matran tam;
printf("nhap kich thuoc ma tran thu %d:\nso hang: ",x);
scanf("%d", &tam.hang);
printf("so cot: ");
scanf("%d", &tam.cot);
printf("nhap ma tran thu %d: ",x);
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

matran cong(matran a, matran b){
	matran kq;
for(int i=0; i<a.cot; i++)
	for(int j=0; j<a.hang; j++)
		kq.mt[i][j] = a.mt[i][j] + b.mt[i][j];
	return kq;
}

matran tru(matran a, matran b){
	matran kq;
for(int i=0; i<a.hang; i++)
	for(int j=0; j<a.cot; j++)
		kq.mt[i][j] = a.mt[i][j] - b.mt[i][j];
	return kq;
}

matran tich(matran a, matran b){
	matran kq;
	kq.hang = a.hang;
	kq.cot = b.cot;
for(int i=0; i<a.hang;i++)
	for(int j=0; j<b.cot;j++){
		int tong = 0;
		for(int k=0; k<a.cot; k++)
			tong = tong + a.mt[i][k] * b.mt[k][j];
			kq.mt[i][j] = tong;
}
	return kq;
}
int main(){
matran a, b, c;
a = nhap(1);
b = nhap(2);
if((a.hang != b.hang) || (a.cot != b.cot))
printf("khong the cong hoac tru 2 ma tran nay");
else{
	c = cong(a,b);
	printf("\ntong 2 ma tran nay la:\n");
	xuat(c);
	c = tru(a,b);
	printf("\nhieu 2 ma tran nay la:\n");
	xuat(c);
}
if(a.cot == b.hang){
	c = tich(a,b);
	printf("\ntich 2 ma tran nay la:\n");
	xuat(c);
}
else
printf("\nkhong the nhan 2 ma tran nay");
}

