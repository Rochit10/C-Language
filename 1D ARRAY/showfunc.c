#include<stdio.h>
// function declaration
void display(int *n);
void show(int **n);
void anothershow(int ***n);
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
    show(&n);
}
void show(int **n){
    anothershow(&n);
}
void anothershow(int ***n){
    printf("Value: %d\n",***n);
}