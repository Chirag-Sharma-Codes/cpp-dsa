#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,4,11,17,25,29};
    int subtract=8;
    int fpointer=0,lpointer=1;
    while (lpointer<6)
    {
        if (arr[lpointer]-arr[fpointer]==subtract)
        {
            cout<<arr[lpointer]<<","<<arr[fpointer];
            return 0;
        }
        else if (arr[lpointer]-arr[fpointer]<subtract)
        {
            lpointer++;
        }
        else
        {
            fpointer++;
        }
        
    }
    cout<<"-1";
}