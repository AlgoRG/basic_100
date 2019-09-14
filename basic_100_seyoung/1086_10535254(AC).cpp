#include <iostream>

using namespace std;

int main(){
    int w, h, b;
    double MB;
    cin>>w>>h>>b;
    MB = (double)w*(double)h*(double)b/8/1024/1024;
    
    cout<<fixed;
    cout.precision(2);
    
    cout<<MB<<" MB"<<endl;
    
}

