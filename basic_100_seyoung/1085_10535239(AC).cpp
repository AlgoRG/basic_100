﻿#include <iostream>

using namespace std;

int main(){
    int h, b, c, s;
    double MB;
    cin>>h>>b>>c>>s;
    MB = (double)h*(double)b*(double)c*(double)s/8/1024/1024;
    
    cout<<fixed;
    cout.precision(1);
    
    cout<<MB<<" MB"<<endl;
    
}
