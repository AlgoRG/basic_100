#include <iostream>

using namespace std;

int main(){
    int num, sum=0;
    cin>>num;
    int i=0;
    do{
        i++;
        sum= sum +i;
    }while(sum<num);

    cout<<sum;
}
