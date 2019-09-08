#include <iostream>

using namespace std;

int main(){
    int number;
    
    cin>>number;
    
    for(int div=10000; div>0; div=div/10){
        cout<<"["<<(number/div)*div<<"]"<<endl;
        number = number - (number/div)*div;
    }
    return 0;
}
