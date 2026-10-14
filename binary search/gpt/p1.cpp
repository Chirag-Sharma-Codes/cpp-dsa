#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,3,5,7,9};
    int start=0,end=4,mid,target;
    cout<<"Enter target value : ";
    cin>>target;
    while (start<=end)
    {
        mid=(start+end)/2;
        if (arr[mid]==target)
        {
            cout<<"target found at index : "<<mid;
            return 0;
        }
        else if (arr[mid]<target)
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
        
    }
    cout<<"Value not present";
    
}