#include <stdio.h>
 int main(){
    int num[5];
    num[0]=5;
    num[1]=65;
    num[2]=238;
    num[3]=1234;
    num[4]=123345;
    printf("my numbers\n");
    for (int i = 0; i <5; i++)
    {
        printf("%d ",num[i]);
    }
    
        printf("\n");

    int numb[]={12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
    int length=sizeof(numb)/sizeof(numb[0]);
    printf("Next numbers\n");
    for (int i = 0; i <length; i++)
    {
        printf("%d ",numb[i]);
    }
    
        printf("\n");


    return 0;
 }
