#include <iostream>
using namespace std;
void getminmax(int arr[], int n,int *min,int *max)
{
    *min = arr[0], *max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= *min)
        {
            *min = arr[i];
        }
        else if(arr[i]>*max)
        {
            *max = arr[i];
        }
    }
    // return min,max;
}
int main(void)
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min,max;
    getminmax(arr,n,&min,&max);
    cout<<min<<" "<<max;
    return 0;
}