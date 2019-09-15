#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
    int n,t;
    int s[23]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        s[t-1]+=1;
    }
    for(int i=0;i<23;i++){
        printf("%d ",s[i]);
    }    
}

