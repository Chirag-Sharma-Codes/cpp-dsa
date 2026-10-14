#include<iostream>
using namespace std;
int main(){
    string str="ATQBGD";
    int arr[26];
    for (int i = 0; i < 26; i++)
        arr[i]=0;
    for (int i = 0; i < str.size(); i++)
    {
        int index=str[i]-'A';
        arr[index]++;
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j< arr[i]; j++)
        {
            char c='A'+i;
            cout<<c;
        }
        
    }
    
    
}