// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    printf("%s\n", ( a & 1) ? "True" : "False");
    return 0;
}