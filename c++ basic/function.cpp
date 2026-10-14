#include<iostream>
using namespace std;
void checkprime(int num=5){
    for (int i = 2; i <= num-1; i++)
    {
        if (num%i==0)
        {
            cout<<num<<" is not prime";
            return;
        }
        
    }
    cout<<num<<" is prime";
    
}
int main(){
    int num;
    cin>>num;
    checkprime(num);
}