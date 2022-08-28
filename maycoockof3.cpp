#include <iostream>
using namespace std;
int main(void)
{
    int arr[101][101];
    for (int i = 1; i < 101; i++)
    {
        arr[i][1] = i * (i + 1) / 2;
        for (int j = 2; j < 101; j++)
        {
            arr[i][j] = arr[i][j - 1] + (j - 1) + (i - 1);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        while (y1 < y2)
        {
            sum += arr[y1][x1];
            y1++;
        }
        while ((x1+1) <= x2)
        {
            sum += arr[y1][x1];
            x1++;
        }
        cout << sum;
    }

    return 0;
}