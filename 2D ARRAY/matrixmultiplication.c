#include<stdio.h>
#define N 40
int main(){
    int a[N][N],b[N][N],c[N][N];
    int m,n,p,q,i,j,k;
    int sum=0;
    // declaring first matrix
    printf("enter the no. of rows and columns of matrix a:\n");
    scanf("%d %d",&m,&n);
    printf("enter the elements of matrix a:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
     // declaring second matrix
    printf("enter the no. of rows and columns of matrix b:\n");
    scanf("%d %d",&p,&q);
    printf("enter the elements of matrix b:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    // printing first matrix.
    printf("first matrix is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    // printing second matrix.
    printf("second matrix is :\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    // now matrix multiplication and inserting 
    //multiplicated elements in matrix c
    // first checking condition if the matrices are multiplicable or not
    
    if(n!=p)
    printf("these matrices can't be multipliable\n");
    else{
        printf("the multiplicated matrix is:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++){
                sum=0;
                
                for(k=0;k<m;k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
                c[i][j]=sum;
            }
        }
    }

    //multiplicated matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }    
    return 0;
}