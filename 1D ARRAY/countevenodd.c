#include<stdio.h>
int main(){
    int a[10],i;
    int even=0,odd=0;
    printf("Enter 10 numbers:\n"); 
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            even++;
    else
            odd++;
    }
    printf("number of even elements are = %d\n",even);
    printf("number of odd elements are = %d",odd);
    return 0;
}