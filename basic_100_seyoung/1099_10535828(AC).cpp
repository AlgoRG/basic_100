#include <iostream>

using namespace std;

int main(){

    int a[11][11]={0};
    int x, y;
    bool finish=false;
    int i=2, j=2;
    
    // 상자 구조와 먹이 위치 입력 
    for(int i=1; i<11; i++){
        for(int j=1; j<11; j++){
            cin>>a[i][j];
        }
    }
    
    for(i; i<10; i++){
        
        for(j; j<10; j++){
            
            if(a[i][j]==2){
                a[i][j]=9;
                finish=!finish;
                break;
                
            }
            
            a[i][j]=9;
            
            if(a[i][j+1]==0||a[i][j+1]==2) continue;
            else break;
        }
        
        if(finish){
            break;
        }
    }
    
    for(int i=1; i<11; i++){
        for(int j=1; j<11; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}




