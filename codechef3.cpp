#include <iostream>
using namespace std;
int main(void)
{
    int arr[10001][10001];
    for (int i = 1; i < 10001; i++)
    {
        arr[i][1] = i * (i + 1) / 2;
        for (int j = 2; j < 10001; j++)
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
        while (x1 != x2)
        {
            sum += arr[x1][y1];
            x1++;
        }
        while (y1 != y2)
        {
            sum += arr[x1][y1];
            y1++;
        }
        cout << sum;
    }

    return 0;
}