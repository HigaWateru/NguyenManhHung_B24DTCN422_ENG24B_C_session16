#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int a, *ptr;
int main(){
    scanf("%d",&a);
    ptr=&a;
    printf("%d, %d\n",a,&a);
    printf("%d, %d",*ptr,ptr);
}
