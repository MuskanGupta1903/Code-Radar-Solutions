// Your code here...
#include <stdio.h>
int main(){
    int a , b, d;
    char c;
    scanf("%d %d %d", &a , &b, &d);
    scanf("%c", &c);
    switch (c){
        case '+':
        d = a+b;
        printf("%d",d);
        break;
        case '-':
        d = a-b;
        printf("%d",d);
        break;
        case '*':
        d = a*b;
        printf("%d",d);
        break;
        case '/':
        d = a/b;
        printf("%d",d);
        break;
    }
    return 0;

}