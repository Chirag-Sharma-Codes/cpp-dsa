#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // int digit=1;
    // int num=10;
    // for (int i = 1; i > 0; i++)
    // {
    //     if (n/num==0)
    //     {
    //         cout<<"Number is of "<<digit<<" digit ";
    //         return 0;
    //     }
    //     num*=10;
    //     digit++;
        
    // }

    int digit = 0;
    while (n!=0)
    {
        digit++;
        n/=10;
    }
    cout<<digit;
    return 0;
    
}