#include<stdio.h>
int main(){
    //char is the only datatype used for string.
    char name[10]="i'm jinny";
    printf("%s\n",name);
    //string always ends with a null character i.e. '\0'
    char name1[]= {'i',' ','a','m',' ','j','i','n','n','y','\0'};
    printf("%s\n",name1);

    char name2[50];
    printf("enter the name2: ");
    scanf("%s",name2); // function "scanf" will only read the first word 
    // input - jinny rathore
    // output - jinny
    printf("%s\n",name2);

    char name3[]="12345";
    printf("%s\n",name3);

    char name4[]="H No-126, Gurgaon";
    printf("%s\n",name4);

    char name5[10]="jinny rathore";
    //instead of less size of string, it will give output
    //with some garbage values or other addresses values
    printf("%s\n",name5);

    // now to print the full string including white spaces
    //we will use gets() function
    char name6[50];
    printf("enter the name6: \n");
    gets(name6);
    printf("%s\n",name6);
    //HEHE IT IS WORKING

    //CONCEPT OF BUFFER OVERFLOW WITH BOTH SCANF AND GETS 

    char name7[5];// even with the size of 5 
    //it will print the whole string
    printf("enter the name7: ");
    scanf("%s",name7);
    printf("%s\n",name7);

    char name8[5];
    printf("enter the name8:\n");
    gets(name8);
    printf("%s",name8);


    return 0;
}