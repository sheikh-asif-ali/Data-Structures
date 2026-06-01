// Print without using loop
#include <stdio.h>
int num=1;
void printname(char ch[]){
    printf("%d %s \n",num, ch);
    num++;
    if(num<=100)
         printname(ch);
}
int main() {
    char ch[] = "Asif";
    printname(ch);
    return 0;
}