#include <iostream>

using namespace std;

int main(){
    int a[23]={0};
    int count, input;
    cin>>count;
    
    for (int i=0; i<count; i++){
        cin>>input;
        a[input-1]++;
    }
    
    for(int i=0; i<23; i++){
        cout<<a[i]<<" ";
    }
}
