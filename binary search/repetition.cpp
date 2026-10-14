#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,1,2,2,3,9,9,10};
    int index=0;
    int number=0;
    // int newarr[10]={};
    // for (int i = 0; i < 10; i++)
    // {
    //     if (arr[i]!=number)
    //     {
    //         newarr[index]=arr[i];
    //         index++;
    //         number=arr[i];
    //     }
        
    // }
    // for (int i = 0; i < index; i++)
    // {
    //     cout<<newarr[i];
    // }
    
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]!=number)
        {
            arr[index]=arr[i];
            index++;
            number=arr[i];
        }
        
    }
    for (int i = 0; i < index; i++)
    {
        cout<<arr[i];
    }
    
}