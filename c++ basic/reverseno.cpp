#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int num;
    cin>>num;
    while (num)
    {
        int digit = num%10;
        sum = sum*10+digit;
        num/=10;
    }
    cout<<"Reverse of the number is : "<<sum;
    if (num==sum)
    {
        cout<<"this is a pallindrome";
    }
    
    
}