#include <iostream>
using namespace std;
int removeduplicate(int arr[], int n, int arrresult[])
{
    int k = 0;
    arrresult[k] = arr[0];
    k++;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arrresult[k] = arr[i];
            k++;
        }
    }
    return k;
}
int main()
{
    int arr1[] = {1, 2, 2, 3, 4,25,36,38,39,46,47,49,85,92,96};
    int arr2[] = {1, 2, 3, 3, 4,55,55,55,65,75,85,95,102,102,105};
    int n1 = 15, n2 = 15;
    int arrresult1[15];
    int arrresult2[15];
    int unique1 = removeduplicate(arr1, n1, arrresult1);
    int unique2 = removeduplicate(arr2, n2, arrresult2);
    int unionarr[30];
    int i= 0;
    int j= 0;
    int k= 0;
    while (i < unique1 && j < unique2)
    {
        if (arrresult1[i] == arrresult2[j])
        {
            unionarr[k] = arrresult1[i];
            i++, j++, k++;
        }
        else if (arrresult1[i] < arrresult2[j])
        {
            unionarr[k] = arrresult1[i];
            i++, k++;
        }
        else
        {
            unionarr[k] = arrresult2[j];
            j++, k++;
        }
    }
    while (i < unique1)
    {
        unionarr[k] = arrresult1[i];
        i++;
        k++;
    }
    while (j < unique2)
    {
        unionarr[k] = arrresult2[j];
        j++;
        k++;
    }
    cout << "Union : ";
    for (int x = 0; x < k; x++)
    {
        cout << unionarr[x] << " ";
    }
    return 0;
}