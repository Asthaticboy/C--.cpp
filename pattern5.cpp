#include<iostream>
using namespace std;
int main(){
     cout << "The triangular pattern" << endl;
    int n,m;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    // cin>>m;
    for (int i = 1; i <=n; i++)
    {
        for(int j = i;j <=n;j++){
            cout<<j;
        }
        for (int j = 1; j <=i-1; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}