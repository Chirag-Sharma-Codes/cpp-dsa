#include<iostream>
using namespace std;
int main(){
    int n=9;
    int height[n]={1,8,6,2,5,4,8,3,6};
    int left=0;
    int right=n-1;
    int maxwater=0;
    while (left<right)
    {
        int width=right-left;
        int h=min(height[left],height[right]);
        int water=width*h;
        if (water>maxwater)
            maxwater=water;
        if (height[left]<height[right])
            left++;
        else
            right--;
    }
    cout<<maxwater;
    return 0;
}