#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	int dlieu[255];
	int vtdau;
	} stack;
int max;
bool isEmpty(stack a){
	return a.vtdau == 0 ? true : false;
	}
bool isFull(stack a){
	return a.vtdau == max ? true : false;
	}
stack push(stack a,int dl){
	if(isFull(a)){
		printf("stack day");
		}
	else{
		a.dlieu[a.vtdau] = dl;
		a.vtdau++;
		return a;
	}
	}
	
stack pop(stack a){
	if(isEmpty(a)){
		printf("stack rong");
		}
	else{
		a.vtdau--;
		a.dlieu[a.vtdau] = '\0';
		return a;
	}
	}
	
int main(){
stack a;
printf("nhap kich thuoc stack: ");
scanf("%d",&max);

/*cac lenh lam viec voi stack
vd:
a = push(a,5);					dua 5 vao vi tri dau cua stack
a = push(a,20);					dua 20 vao vi tri tiep theo cua stack
a = pop(a);						day so 20 ra khoi vi tri moi dua vao
printf(" %d ",a.dlieu[0]);		in so 5 ra	
*/
}

