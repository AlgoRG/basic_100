#include <iostream>

using namespace std;

int main(){
    int w, h, n, l, d, x, y;
    cin>>w>>h;
    cin>>n;
    
    int a[101][101]={0};
    
    for(int i=0; i<n; i++){
        cin>>l>>d>>x>>y;
        
    
        if(d==0){
           for(int k=y; k<y+l; k++){
               a[x][k]=1;
           } 
        }

        else{
            for(int j=x; j<x+l; j++){
                a[j][y]=1;
            }
        }
    }
    
    for(int i=1; i<w+1; i++){
        for(int z=1; z<h+1; z++){
            cout<<a[i][z]<<" ";
        }
        cout<<endl;
    }
}
