#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,4,11,17,25,29};
    int sum=40;
    /* time complexity is of n**2
    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            if (arr[i]+arr[j]==sum)
            {
                cout<<"yes";
                return 0;
            }
            
        }
        
    }
    */
    int fpointer=0,lpointer=5;
    //can use any type of loop
    // for (int i = 0; i < 6; i++)
    while(fpointer<lpointer)
    {
        if (arr[fpointer]+arr[lpointer]==sum)
        {
            cout<<arr[fpointer]<<","<<arr[lpointer];
            return 0;
        }
        else if (arr[fpointer]+arr[lpointer]<sum)
        {
            fpointer++;
        }
        else
        {
            lpointer--;
        }
        
    }
    
}