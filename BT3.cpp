#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
int tien,a=0,b=0,c=0,d=0;
printf("nhap so tien: ");
scanf("%d",&tien);
if(tien >= 10){
	a = tien / 10;
	tien = tien % 10;
	}
if(tien >=5 && tien < 10){
	b = tien / 5;
	tien = tien % 5;
	}
if(tien >=2 && tien < 5){
	c = tien / 2;
	tien = tien % 2;
	}
if(tien == 1)
	d = 1;
	printf("can %d to tien",a+b+c+d);
}

