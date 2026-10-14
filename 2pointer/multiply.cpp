#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,4,11,17,25,29};
    int multiply=187;
    int fpointer=0,lpointer=5;
    for (int i = 0; i < 6; i++)
    {
        if ((arr[fpointer]*arr[lpointer])==multiply)
        {
            cout<<arr[fpointer]<<","<<arr[lpointer];
            return 0;
        }
        else if ((arr[fpointer]*arr[lpointer])<multiply)
        {
            fpointer++;
        }
        else
        {
            lpointer--;
        }
        
    }
}