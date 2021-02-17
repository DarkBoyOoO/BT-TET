#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void swap(int *a, int *b){
	int tam = *a;
	*a=*b;
	*b=tam;
	}
int main(){
int i,j;
int a[] = {1,2,0,5,3,1,0,9};	//nhap chuoi tai day
int n = sizeof(a)/sizeof(int); 
for(i=0; i<n-1 ;i++)
	for(j=0; j<n-i-1 ;j++)
		if(a[j] > a[j+1])
			swap(&a[j],&a[j+1]);

		printf("\nchuoi sau khi sap xep la:");
		for(i=0; i<n ;i++)
		printf(" %d ",a[i]);
}

