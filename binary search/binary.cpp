#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,3,4,5,6,7};
    int mid,start=0,end=5,target=7;
    while (start<=end)
    {
        mid=(start+end)/2;
        if (arr[mid]==target)
        {
            cout<<"element found at place : "<<mid+1<<endl;
            return 0;
        }
        else if (target>arr[mid])
        {
            start=mid+1;
            mid=(start+end)/2;
        }
        else
        {
            end=mid-1;
            mid=(start+end)/2;
        }
        
    }
    

}