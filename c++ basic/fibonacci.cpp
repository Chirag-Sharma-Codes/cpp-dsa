#include<iostream>
using namespace std;
int main(){
    int n=3;
    // cout<<"Enter which number to find out in fibonacci : ";
    // cin>>n;
    
    int first = 0;
    int second = 1;
    int current;
    for (int i = 0; i <= n; i++)
    {
        current = first+second;
        first=second;
        second=current;
    }
    cout<<current;
    return 0;
}