#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int n,gt;
int search(int a[], int size, int gt){
    for(int i=0;i<size;i++)if(gt==*(a+i))return i;
}
int main(){
    int *a=(int*)malloc(1000000000 * sizeof(int));
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",a+i);
    scanf("%d",&gt);
    printf("%d",search(a,n,gt));
}
