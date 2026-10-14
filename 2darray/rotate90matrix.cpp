#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
        //transpose
        for(int i=0;i<3;i++){
            for(int j=i+1;j<3;j++){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
        //reverse row
        for(int i=0;i<3;i++){
            int leftcol=0;
            int rightcol=3-1;
            while(leftcol<rightcol){
                int temp=arr[i][leftcol];
                arr[i][leftcol]=arr[i][rightcol];
                arr[i][rightcol]=temp;
                leftcol++;
                rightcol--;
            }
        }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}