#include<iostream>
using namespace std;
int main(){
    int a =10,b=20,c=50;
    if (a>=b && a>=c)
    {
        cout<<a;
    }
    else if (b>=a && b>=c)
    {
        cout<<b;
    }
    else
    {
        cout<<c;
    }
    
}