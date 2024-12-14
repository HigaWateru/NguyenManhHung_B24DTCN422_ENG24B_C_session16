#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int a=15,b=34,kq;
int sum(int *ptr1, int *ptr2){
    return *ptr1 + *ptr2;
}
int main(){
    int kq=sum(&a,&b);
    printf("%d",kq);
}
