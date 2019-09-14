#include <iostream>

using namespace std;

int main(){
    int num ;
    
    cin >>num;
    
    for (int i =1; i<num+1; i++){
        if(i==3||i==6||i==9){
            cout<<"X"<<" ";
        }else{
            cout<<i<<" ";
        }
    }
}
