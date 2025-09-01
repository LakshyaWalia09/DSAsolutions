class Solution
{
public:
    long long largestPrimeFactor(long long n)
    {
        long long ans = 2;

        if (n % 2 == 0)
        {
            while (n % 2 == 0)
            {
                n /= 2;
            }
        }

        for (long long i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
            {
                ans = i;
                while (n % i == 0)
                {
                    n /= i;
                }
            }
        }

        if (n > 2)
            ans = n;

        return ans;
    }
};