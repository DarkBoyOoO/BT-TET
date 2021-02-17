#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	float thuc;
	float ao;
	} sophuc;
sophuc cong(sophuc a, sophuc b){
	sophuc c;
	c.thuc = a.thuc + b.thuc;
	c.ao = a.ao + b.ao;
	return c;
	}
	
sophuc hieu(sophuc a, sophuc b){
	sophuc c;
	c.thuc = a.thuc - b.thuc;
	c.ao = a.ao- b.ao;
	return c;
	}
	
sophuc tich(sophuc a, sophuc b){
	sophuc c;
	c.thuc = a.thuc*b.thuc - a.ao*b.ao;
	c.ao = a.thuc*b.ao + a.ao*b.thuc;
	return c;
	}
	
sophuc ktra(sophuc kq){
if(kq.ao>=0)
	printf(" 2 so phuc la: %f + %fi", kq.thuc, kq.ao);
else
	printf(" 2 so phuc la: %f %fi", kq.thuc, kq.ao);
}

int main(){
sophuc thu1, thu2, kq;
printf("nhap so phuc thu nhat:\nphan thuc: ");
scanf("%f",&thu1.thuc);

printf("phan ao: ");
scanf("%f",&thu1.ao);

printf("\nnhap so phuc thu hai:\nphan thuc: ");
scanf("%f",&thu2.thuc);

printf("phan ao: ");
scanf("%f",&thu2.ao);

kq=cong(thu1, thu2);
printf("\ntong");
ktra(kq);

kq=hieu(thu1, thu2);
printf("\nhieu");
ktra(kq);

kq=tich(thu1, thu2);
printf("\ntich");
ktra(kq);
}

