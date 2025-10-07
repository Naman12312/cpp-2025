#include <iostream>
#include "./headerfileTest.cpp"
using namespace std;
int main(){
    // Assignment operators : =
    int a;
    int b;
    a = 3;
    b =4;
    char d = 'd';
    cout<<"arithmetic operators:";
    cout<<(a+b)<<endl;
    cout<<(a-b)<<endl;
    cout<<(a*b)<<endl;
    cout<<(a/b)<<endl;
    cout<<(a%b)<<endl;
    cout<<(a--)<<endl;
    cout<<(a++)<<endl;
    cout<<(--a)<<endl;
    cout<<(++a)<<endl;
    cout<<"comparison operators:";
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a<=b)<<endl;
    cout<<(a>b)<<endl;
    cout<<(a<b)<<endl;
    cout<<"logical operators:";
    cout<<((a==b) && (a!=b))<<endl;
    cout<<((a>=b) || (a!=b))<<endl;
    cout<<(!(a==b))<<endl;
    return 0;
}