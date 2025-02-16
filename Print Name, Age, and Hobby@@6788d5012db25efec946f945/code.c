// Your code here...
#include <stdio.h>
int main(){
    char a[100] , c[100];
    char b;
    scanf("%s  %s" , &a, &c);
    scanf("%c",&b);
    printf("Name: %s\n" , a);
    printf("Age: %c\n" , b);
    printf("Hobby: %s\n ",c);
    return 0;

}