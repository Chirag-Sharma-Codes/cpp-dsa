#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string sumofstrno(string str1,string str2){
    int i=str1.size()-1;
    int j=str2.size()-1;
    string result="";
    int carry=0;
    while (i>=0||j>=0||carry>0)
    {
        int sum=carry;
        if(i>=0){
            sum+=str1[i]-'0';
            i--;
        }
        if(j>=0){
            sum+=str2[j]-'0';
            j--;
        }
        carry=sum/10;
        result.push_back((sum%10)+'0');
    }
    reverse(result.begin(), result.end());
    return result;
}
int main(){
    string str1="2346213561";
    string str2="36455465115365";
    cout<<"sum is"<<sumofstrno(str1,str2);
}