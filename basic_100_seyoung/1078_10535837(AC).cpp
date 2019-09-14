#include <iostream>

using namespace std;

int main(){
    int sum = 0;
    int input;
    int i=1;
    cin>>input;
    
    while(i<=input){
        if(i%2==0){
            sum = sum + i;
        }
        i++;
    }
    
    cout<<sum;
}

