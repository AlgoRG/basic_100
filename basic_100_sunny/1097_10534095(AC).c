#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int n,x,y;
    int p[19][19]={0};
    for(int i=0;i<19;i++)
        for(int j=0;j<19;j++)
            scanf("%d",&p[i][j]);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        for(int j=0;j<19;j++){
            if(p[x-1][j]==1)  p[x-1][j]=0;
            else    p[x-1][j]=1;
        }
        for(int j=0;j<19;j++){
            if(p[j][y-1]==1)  p[j][y-1]=0;
            else    p[j][y-1]=1;
        }
    }
    for(int i=0;i<19;i++){
        for(int j=0;j<19;j++){
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
