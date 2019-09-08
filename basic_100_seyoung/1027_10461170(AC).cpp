#include <iostream>

using namespace std;

int main(){
    string date="";
    
    getline(cin, date);
    
    string year = date.substr(0, 4);
    string month = date.substr(5, 2);
    string day = date.substr(8);
    
    cout<<day<<"-"<<month<<"-"<<year;
}
