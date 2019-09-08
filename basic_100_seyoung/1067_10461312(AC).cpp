#include <iostream>

using namespace std;

void figureNum(int);

int main(){
    long long int a;
    cin>>a;
    
    figureNum(a);

    return 0;
}

void figureNum(int num){
    
    if(num<0){
        cout<<"minus"<<endl;
    }else cout<<"plus"<<endl;
    
    if(num%2==0){
        cout<<"even"<<endl;
    } else{
        cout<<"odd"<<endl;
    }
    
    
}

