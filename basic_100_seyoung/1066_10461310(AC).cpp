#include <iostream>

using namespace std;

void figureNum(int);

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    
    figureNum(a);
    figureNum(b);
    figureNum(c);
    return 0;
}

void figureNum(int num){
    if(num%2==0){
        cout<<"even"<<endl;
    } else{
        cout<<"odd"<<endl;
    }
}
