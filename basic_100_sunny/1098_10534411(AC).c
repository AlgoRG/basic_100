#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int h,w,n,l,d,x,y;
    int p[100][100]={0};
    scanf("%d %d",&h,&w);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d",&l,&d,&x,&y);
        x-=1;
        y-=1;
        if(d==1){
            for(int i=0;i<l;i++){
                p[x++][y]=1;
            }
        }
        if(d==0){
            for(int i=0;i<l;i++){
                p[x][y++]=1;
            }
        }
    }
    
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}
