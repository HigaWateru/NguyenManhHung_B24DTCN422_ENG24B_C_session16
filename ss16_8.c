#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
char iStr[100005],rStr[100005];
int main(){
    fgets(iStr,100000,stdin);
    char *ptrIS=iStr;
    char *ptrRS=rStr;
    ptrIS+=strlen(iStr)-1;
    for(int i=0;i<strlen(iStr);i++){
        *ptrRS=*ptrIS;
        ptrRS++;
        ptrIS--;
    }
    printf("%s",rStr);
}
