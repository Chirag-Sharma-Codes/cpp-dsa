#include<iostream>
using namespace std;
int main(){
    string str="testsample";
    int arr[26];
    int index=0,highfreq=0;
    for (int i = 0; i < 26; i++)
        arr[i]=0;
    for (int i = 0; i < str.size(); i++)
    {
        int index=str[i]-'a';
        arr[index]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i]>highfreq){
            highfreq=arr[i];
            index=i;
        }
    }
    char highocc='a'+index;
    cout<<endl<<highocc<<" with frequency of "<<highfreq;
}