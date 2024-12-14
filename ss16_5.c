#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int a[]={1,65,12,34,45,12,6},gt,vt;
void insert(int a[], int *ptr, int vt){
    *(a+vt)=*ptr;
}
int main(){
    scanf("%d%d",&gt,&vt);
    insert(a,&gt,vt);
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)printf("%d ",*(a+i));
}
