#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
unsigned char buff[100];
int main(){

    int i;
    FILE * fp;

    if ((fp = fopen("test.wav", "r")) == NULL){
        printf("File khong dung!");
        exit(1);
    }
    
    fread(buff,sizeof(int),1024,fp);
    
    printf("Samplerate la: %d Hz",buff[24] + buff[25]*256 + buff[26]*256*256 + buff[27]*256*256*256);
    printf("\nBitsPerSample la: %d bit/s",buff[22]*buff[34]*(buff[24] + buff[25]*256 + buff[26]*256*256 + buff[27]*256*256*256));
    printf("\nso Channels la: %d channel",buff[22]);
    
    fclose(fp);
}
