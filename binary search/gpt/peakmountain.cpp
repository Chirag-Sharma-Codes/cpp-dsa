#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,6,8,9,4,2};
    int start=0,end=5,mid;
    while(start<end)
    {
        mid=start+(end-start)/2;
        if (arr[mid]<arr[mid+1])
            start=mid+1;
        else
            end=mid;
        
    }
    cout<<"Mountain at index : "<<start<<endl;
    
}