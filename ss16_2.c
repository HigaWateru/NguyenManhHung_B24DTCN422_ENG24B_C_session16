#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int a=15,b=34;
void swap(int *ptr1, int *ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
int main(){
    swap(&a,&b);
    printf("%d %d",a,b);
}
