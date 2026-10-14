#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str1="bcadeh";
    string str2="hea";
    int count=0;
    vector<int>arrchar;
    int arr[26]={0};
    for (int i = 0; i < str1.size(); i++){
        arr[str1[i]-'a']++;
    }
    for (int i = 0; i < str2.size(); i++){
        arr[str2[i]-'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]!=0){
        count++;
        arrchar.push_back(i);
        }
    }
    cout<<endl<<"need to remove "<<count<<" char";
    cout<<endl<<"char to remove ";
    for (int i = 0; i < arrchar.size(); i++)
    {
        char c=arrchar[i]+'a';
        cout<<c;
    }
}