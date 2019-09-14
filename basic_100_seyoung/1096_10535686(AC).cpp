#include <iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    int a[20][20]={0};
    int x, y;
    
    for(int i=0; i<num; i++){
        cin>>x>>y;
        a[x][y] = 1;
    }
    
    for(int i=1; i<20; i++){
        for(int j=1; j<20; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}


