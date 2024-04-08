#include <iostream>
using namespace std;
int i;
int j = 0;
// void swap
void movezero(int arr[], int n)
{
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
int main()
{

    int arr[6] = {1, 0, 3, 0, 0, 0};
    int n = 6;
    movezero(arr, 6);
    display(arr, 6);
}