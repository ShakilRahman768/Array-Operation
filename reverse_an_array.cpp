#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int j = n - 1;
    for (int i = 0; i < j; i++)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
