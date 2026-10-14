#include<iostream>
using namespace std;
int main(){
    int arr[7]={4,5,6,7,0,1,2};
    int start=0,end=6,index;
    while (start<end)
    {
        int mid=start+(end-start)/2;
        if (arr[mid]>arr[end])
            start=mid+1;
        else
        {
            index=mid;
            end=mid;
        }
        
    }
    cout<<"The arr is rotated "<<index<<" times\n";
}