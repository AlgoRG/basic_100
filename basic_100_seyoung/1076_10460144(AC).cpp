#include <iostream>

using namespace std;

int main(){
    char a;
    char start = 'a';
    cin>>a; // f가 들어왔음 
    
    do{
        cout<<start<<" ";
        start++;
    } while(start<=a);
    
    return 0;
}
