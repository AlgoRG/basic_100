﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int n,x,y;
    int p[19][19]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        p[x-1][y-1]=1;
    }
    for(int i=0;i<19;i++){
        for(int j=0;j<19;j++){
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}
