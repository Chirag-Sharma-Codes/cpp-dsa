#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {1, 3, 5, 6};
    int left = 0, right = 3, target = 8;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            cout << "element at place : " <<mid;
            return 0;
        }
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    cout << "element should be at : " <<left;
    return 0;
}