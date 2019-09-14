#include <iostream>

using namespace std;

int main(){
    int sum = 0;
    int num;
    cin>>num;
    
    int i=0;
    do{
        i++;
        sum = sum + i;
    }while(sum<num);
    
    cout<<i<<endl;
}
