#include <iostream>

using namespace std;

int main(){
    int a[10001]={};
    int count, input;
    cin>>count;
    
    for (int i=count; i>0; i--){
        cin>>input;
        a[i]=input;
    }
    
    for(int i=1; i<count+1; i++){
        cout<<a[i]<<" ";
    }
}

