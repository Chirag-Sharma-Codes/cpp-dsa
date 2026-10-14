#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int mul = 1;
    int num;
    cout<<"Enter binary no to convert into decimal : ";
    cin>>num;
    while (num)
    {
        int digit = num%10;
        sum+=digit*mul;
        num/=10;
        mul*=2;
    }
    cout<<sum;
}