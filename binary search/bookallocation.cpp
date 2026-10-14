#include <iostream>
using namespace std;
bool possible(int arr[], int n, int students, int limit)
{
    int sum = 0;
    int student = 1;
    for (int i = 0; i < n; i++)
    {
        if (sum + arr[i] <= limit) 
            sum = sum + arr[i];   
        else
        {
            student++;
            sum = arr[i];
        }
    }
    return student <= students;
}
int main()
{
    int arr[4] = {12, 34, 67, 90};
    int n = 4;
    int students = 2;
    int start = 90;
    int end = 203;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (possible(arr, n, students, mid))
            end = mid - 1;
        else
            start = mid + 1;
    }
    cout << "Answer = " << start;
    return 0;
}