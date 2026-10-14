#include<iostream>
using namespace std;
// Wrong answer need to change method 
// can use operator to directly solve an dcan use string method in this
int main(){
    int sum = 0;
    int num;
    cin>>num;
    while (num!=0)
    {
        int rem = num%10;
        num/=10;
        if (rem==1)
        {
            rem = 0;
        }
        else if (rem==0)
        {
            rem = 1;
        }
        sum=sum+rem;
    }
    cout<<sum;
}