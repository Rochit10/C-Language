#include<stdio.h>
int main(){
    int a[5],b[5], sumarr[5];
    int i;
    printf("enter 5 elements of the first array:\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("enter 5 elements of the second array:\n");
    for(i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        sumarr[i]=a[i]+b[i];
        printf("the sum array elements at index %d is %d\n",i,sumarr[i]);
    }
    for(i=0;i<5;i++){
        printf("%d\t",sumarr[i]);
    }  
    return 0;
    }