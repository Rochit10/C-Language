#include<stdio.h>
int main(){
    int i,j,a[3][3];
    int sumofRow,sumofColumn;
    printf("enter the elements in the 2d array:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        sumofRow=sumofColumn=0;
        for(j=0;j<3;j++)
        {
            sumofRow=sumofRow+a[i][j];
            sumofColumn=sumofColumn+a[j][i];
        }
        printf("sumofRow %d =%d\n",i,sumofRow);
        printf("sumofColumn %d =%d\n",i,sumofColumn);
        printf("\n");
    }
}