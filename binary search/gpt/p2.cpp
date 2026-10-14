#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,3,5,8,10};
    int start=0,end=5,target;
    cout<<"Enter target value : ";
    cin>>target;
    while (start<end)
    {
        int mid=start+(end-start)/2;
        if (arr[mid]>=target)
            end=mid;
        else
            start=mid+1;
    }
    
    cout<<start;

}