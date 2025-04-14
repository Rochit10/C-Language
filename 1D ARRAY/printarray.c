#include<stdio.h>
int main(){
    int a[10],i;
    printf("enter the 10 elements of array:\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}