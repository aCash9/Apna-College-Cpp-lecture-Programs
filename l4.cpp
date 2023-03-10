#include <iostream>
using namespace std;

void primeSieve(int n)
{
    int tag[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (tag[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                tag[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (tag[i] == 0 )
            cout << i << "\t";
    }
}
int main()
{
    int n;
    cin >> n;
    primeSieve(n);
    return 0;
}