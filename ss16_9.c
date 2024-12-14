#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int a[]={45,1,2,55,23,4,23,67,0,9},gt,vt,n;
void insertEl(int *a,int *size, int gt, int vt){
    if(vt<0||vt>*size){
        printf("Vi tri nhap vao khong hop le!\n");
        return;
    }
    for(int i=*size;i>vt;i--)a[i]=a[i-1];
    a[vt]=gt;
    *size++;
}
int main(){
    n=sizeof(a)/sizeof(a[0]);
    scanf("%d%d",&gt,&vt);
    insertEl(&a,&n,gt,vt);
    for(int i=0;i<n;i++)printf("%d ",*(a+i));
    free(a);
}
