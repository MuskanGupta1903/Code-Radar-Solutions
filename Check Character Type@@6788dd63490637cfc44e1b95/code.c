// Your code here...
#include <stdio.h>
int main(){
    char v[] = " a , e , i , o , u";
    char a;
    scanf("%c", &a);
    if(a>='a' || a<='z'){
        printf("Consonant");}

    else if (a == v){
        printf("Vowel");

    }
    else if (a>=1 || a<=9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}