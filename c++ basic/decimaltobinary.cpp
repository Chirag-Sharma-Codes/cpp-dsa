#include<iostream>
using namespace std;
// method 1
// int main(){
//     int number = 0;
//     int inputnum;
//     cout<<"Enter no to convert into binary : ";
//     cin>>inputnum;
//     while (inputnum)
//     {
//         int digit = inputnum%2;
//         inputnum/=2;
//         number = number*10+digit;
//     }
//     cout<<number<<endl;
//     inputnum=number;
//     number=0;
//     while (inputnum)
//     {
//         int digit = inputnum%10;
//         number = number*10+digit;
//         inputnum /=10;
//     }
//     cout<<number;
//     return 0;
    
// }
// method 2
int main(){
    long sum=0;
    int num;
    cin>>num;
    int mul =1;
    while (num)
    {
        int digit = num%2;
        sum = sum+digit*mul;
        num/=2;
        mul*=10;
    }
    cout<<sum;
}