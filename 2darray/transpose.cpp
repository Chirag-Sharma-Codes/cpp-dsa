#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    //transpose of general case 
    //3*3 we canuse different method only 
    //upper triangle use tranpose
    int arrtrans[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arrtrans[j][i]=arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arrtrans[i][j] << " ";
        }
        cout << endl;
    }
}
/*transpose of square matrix
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
*/