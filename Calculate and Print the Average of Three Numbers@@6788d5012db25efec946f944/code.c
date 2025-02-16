// Your code here...
#include <stdio.h>
int main(){
    float a, b, c;
    scanf("%.0f %.0f %.0f", a, b, c);
    float d = a +b +c;
    float e = d/3;
    printf("Average: %.2lf", e);
    return 0;
}