#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
int i,tu=1,chu,dem,j;
char name[255];
printf("nhap chuoi ki tu: ");
gets(name);
for(i=0;i<strlen(name);i++){
	if(name[i] == ' ')
	tu = tu + 1;
}
if(strlen(name)==0)
printf("so tu la 0");
else
printf("so tu la %d",tu);
for(i=0;i<strlen(name);i++){
	if(name[i]== ' ')
	;
	else{
		dem=1;
	for(j=i+1;j<strlen(name);j++)
	if(name[i]==name[j]){
	dem++;
	name[j]= ' ';
	}
	printf("\nco %d chu %c",dem,name[i]);
	}
	}
}

