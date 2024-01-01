#include<iostream>
using namespace std;

bool primeornot(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;  // Not a prime number
        }
    }
    return true;  // Prime number
}

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        if (primeornot(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}
