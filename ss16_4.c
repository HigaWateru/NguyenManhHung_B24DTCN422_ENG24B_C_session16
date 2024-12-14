#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int a[]={1,65,12,34,45,12,6},n=7;
void xuat(int a[],int size){
    for(int i=0;i<size;i++)printf("%d ",*(a+i));
}
int main(){
    xuat(a,n);
}
