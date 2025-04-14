//DEMONSTRATION OF CALL BY VALUE.
#include<stdio.h>
// function declaration
void display(int n);

int main(){
    int marks[]={22,25,36,45,50};
    int i;
    for(i=0;i<5;i++){
        // function call
        display(marks[i]);
    }
    return 0;
}
// function definition
void display(int n)
{
    printf("%d\t",n);
}
