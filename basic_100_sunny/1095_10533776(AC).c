#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int n;
    int a[10000]={0};
    int min=24;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(min>a[i])
            min=a[i];
    }
    printf("%d",min);
    return 0;
}
