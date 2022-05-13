#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
int sieve[100000];
bool prime(int n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i <=sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    cout<<"Upper Bound:";
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, n, d,ctr=0;
    n = 50000;
    cin>>n;
    auto start = high_resolution_clock::now();
    memset(sieve, 0, sizeof(sieve));
    for (i = 4; i <= n; i += 2)
    {
        sieve[i] = -1;
    }
    for (i = 3; i <= sqrt(n); i += 2)
    {
        if (sieve[i] == 0)
            for (d = i + 2; d <= n; d += 2)
            {
                if (d % i == 0)
                    sieve[d] = -1;
            }
    }
    cout << 2<<" ";
    for (i = 3; i <= n; i ++)
    {
        if (sieve[i] == 0)
            {cout << i << " ";ctr++;}
    }
    cout<<"\n\n"<<ctr;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << endl<< endl<< endl<< duration.count() << " microseconds";
    return 0;
}
