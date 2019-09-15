#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int x=1, y=1;
    int ant[10][10]={0};
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            scanf("%d",&ant[i][j]);
    while(ant[x][y]!=2){
        ant[x][y]=9;
        if(ant[x][y+1]!=1)  y+=1;
        else if(ant[x+1][y]!=1)    x+=1;
        else    break;
    }
    ant[x][y]=9;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
            printf("%d ",ant[i][j]);
        printf("\n");
    }
    return 0;
}
