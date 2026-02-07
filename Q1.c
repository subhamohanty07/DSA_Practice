#include<stdio.h>
int main(){
    int integer = 5;
    char character = 'A';
    char *string = "Subham";
    printf("%p\n", &integer);
    printf("%p\n",&character);
    printf("%p\n", &string);
    return 0;
}