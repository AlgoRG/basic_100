#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin>>str;
    
    string number = str.substr(0, str.find("-")) + str.substr(str.find("-")+1);
    cout<<number<<endl;
    return 0;
}
