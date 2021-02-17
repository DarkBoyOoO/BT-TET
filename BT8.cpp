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
int i,j,tam;
int a[] = {0,1,2,2};	//nhap chuoi tai day
int n = sizeof(a)/sizeof(int); 
for(i=0; i<n-1 ;i++){
	tam=i;
	for(j=i+1; j<n ;j++){	
	tam=a[tam]<a[j]?j:tam;
			}
			swap(&a[i],&a[tam]);
			}
		printf("\nchuoi sau khi sap xep la:");
		for(i=0; i<n ;i++)
		printf(" %d ",a[i]);
}

