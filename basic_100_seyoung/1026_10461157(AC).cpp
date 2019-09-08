#include <iostream>

using namespace std;

int main(){
    string time;
    cin>>time;
    string minute = time.substr(time.find(":")+1, 2);
    if(minute[0]=='0'){
        minute= minute[1];
    }
    cout<<minute<<endl;
    return 0;
    
}
