#include <bits/stdc++.h>
using namespace std;

double halfDecider(double x, long long n)
{
    if (n % 2 == 0)
    {
        long long mid = n / 2;
        double p1 = pow(x, mid);

        return p1 * p1;
    }
    else
    {
        long long mid1 = n / 2;
        // long long mid2=n-n/2;
        double p1 = pow(x, mid1);
        // long long p2= pow(x, mid2);

        // return mid1*p1*p1;
        return x * p1 * p1;
    }
}

double pow(double x, long long n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n < 0)
    {
        // return 1/x*(halfDecider(x, n));
        return 1 / (halfDecider(x, -n));
    }

    else
    {
        return (halfDecider(x, n));
    }
}

// int main()
// {
// double main(double x, int n)
// {

//     long long N = n;
//     return pow(x, N);
// }
// }

int main()
{
    double x = 2;
    int n = -5;

    long long N = n;

    cout << pow(x, N);

    return 0;
}
