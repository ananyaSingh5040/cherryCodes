// 1
// 2 3
// 3 4 5
// 4 5 6 7
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       int b=i;
        for(int j=1;j<=i;j++)
        {
            cout<<b;
            b++;
        }
        cout<<endl;
    }

    return 0;
}