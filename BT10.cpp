#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main(){
char chuoikt[255];
int en,de,n;
printf("nhap chuoi ki tu: ");
gets(chuoikt);
printf("\nnhap he so dich chuyen: n = ");
scanf("%d",&n);
printf("\nchuoi ki tu encode la: ");
for(int i=0;i<strlen(chuoikt);i++){
en=chuoikt[i];
if(en==32)
;
else if((en>47)&&(en<58)){
en=en+n;
while(en>57)
en=en-10;
}
else{
en=en+n;
en=en>122?en-26:en;
en=(en>90)&&(en<97)?en-26:en;
}
printf("%c",en);
}
printf("\nchuoi ki tu decode la: ");
for(int i=0;i<strlen(chuoikt);i++){
de=chuoikt[i];
if(de==32)
;
else if((de>47)&&(de<58)){
de=de-n;
while(de<48)
de=de+10;
}
else{
de=de-n;
de=de<97&&de>90?de+26:de;
de=(de<65)&&(de>57)?de+26:de;
}
printf("%c",de);
}
}
