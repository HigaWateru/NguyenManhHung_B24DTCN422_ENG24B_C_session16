#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int a[]={1,7,54,2,34,5,76,34,22,0,9},n;
void swap(int *ptr1, int *ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
void selectionSort(int *a, int *size){
    for(int i=0;i<*size-1;i++){
        int x=i;
        for(int j=i+1;j<*size;j++)if(a[j]<a[x])x=j;
        swap(&a[x],&a[i]);
    }
}
int main(){
    n=sizeof(a)/sizeof(a[0]);
    selectionSort(&a,&n);
    for(int i=0;i<n;i++)printf("%d ",*(a+i));
}
