// To understand the type conversion of various data types


# include<iostream>

using namespace  std;

int main() {


    bool b = 42;
    int i = b;
    i = 3.14;

    double pi = i;

    unsigned char c = -1;
    cout<<c<<endl;
    signed char ch = 256;


    cout<<b<<endl;
    cout<<i<<endl;

    cout<<pi<<endl;
    cout<<ch<<endl;



    return 0;

}