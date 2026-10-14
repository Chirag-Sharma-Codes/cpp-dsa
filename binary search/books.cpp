#include <iostream>
using namespace std;
int main(){
    int arr[4]={10,20,10,30};
    int start=30,end=70,n=3,m=2,ans;
    while (start<=end)
    {
        int mid=(start+end)/2;
        int sum=0,count=1;
        for (int i = 0; i < n; i++)
        {
            sum+=arr[i];
            if (sum>mid)
            {
                count++;
                sum=arr[i];
            }
        }
        if (count<=m)
        {
            end=mid-1;
            ans=mid;
        }
        else
        start=mid+1;
        
    }
    cout<<ans;
}