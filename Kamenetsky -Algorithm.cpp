/* Author: Remon Hasan
   Problem: 1045 lightoj - Digits of Factorial
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll findDigits(int n, int b)
{
    if (n < 0)
        return 0;
    if (n <= 1)
        return 1;

    // Use Kamenetsky formula to calculate
    // the number of digits
    double x = ((n * log10(n / M_E) +
                 log10(2 * M_PI * n) /
                 2.0)) / (log10(b));

    return floor(x) + 1;
}

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int a,b;
        cin>>a>>b;
        printf("Case %d: %lld\n",i,findDigits(a,b));
    }
    return 0;
}

