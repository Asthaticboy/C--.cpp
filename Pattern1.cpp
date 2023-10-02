#include <iostream>
using namespace std;
int main()
{
    cout << "The rectangular pattern" << endl;
    int n, m;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    cout << "Enter the number of columns" << endl;
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}