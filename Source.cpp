#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int rowNums;
    int colNums;
    cin >> rowNums;
    cin >> colNums;
    int** arr = new int* [rowNums];
    for (int i = 0; i < rowNums; i++)
    {
        int n;
        cin >> n;
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < colNums; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << arr[x][y] << endl;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}