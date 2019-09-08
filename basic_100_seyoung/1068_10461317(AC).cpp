#include <iostream>

using namespace std;

void figureScore(int);

int main(){
    int a;
    cin>>a;
    
    figureScore(a);

    return 0;
}

void figureScore(int num){
    
    if(num>=90){
        cout<<"A"<<endl;
    }else if(num>=70&&num<=89){
        cout<<"B"<<endl;
    }else if(num>=40&&num<=69){
        cout<<"C"<<endl;
    }else if(num>=0&&num<=39){
        cout<<"D"<<endl;
    }

}


