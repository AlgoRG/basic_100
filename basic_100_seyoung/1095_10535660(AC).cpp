#include <iostream>

using namespace std;

int main(){
    int a[10001]={};
    int count, input, min;
    cin>>count;
    min = 10001;
    
    for (int i=1; i<count+1; i++){
        cin>>input;
        if(input<min){
            min = input;
        }
    }
    
    cout<<min;

}


