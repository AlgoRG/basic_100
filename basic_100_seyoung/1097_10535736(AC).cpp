#include <iostream>

using namespace std;

int main(){
    int num;

    int a[20][20]={0};
    int x, y;

    for(int i=1; i<20; i++){
        for(int j=1; j<20; j++){
            cin>>a[i][j];
        }
    }

    cin>>num;
    
    for(int i=0; i<num; i++){
        cin>>x>>y;
        
        for(int h=1; h<20; h++){
            if(a[x][h]==0) a[x][h]=1;
            else a[x][h]=0;
        }
        
        for(int w=1; w<20; w++){
            if(a[w][y]==0) a[w][y]=1;
            else a[w][y]=0;
        }
        
    }
    
    for(int i=1; i<20; i++){
        for(int j=1; j<20; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}



