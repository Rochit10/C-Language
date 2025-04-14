//DEMONSTRATION OF CALL BY REFERENCE
#include<stdio.h>
// function declaration
void display(int *n);
int main(){
    int marks[]={22,25,36,45,50};
    int i;
    for(i=0;i<5;i++){
        // function call
        display(&marks[i]);
    }
    return 0;
}
void display(int *n){
    printf("Value: %d\n",*n);
}
// This program demonstrates the concept of call by reference in C.
