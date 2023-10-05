
// These is the naive approach of solving prime number

// important:- 0,1 is not a prime number and 2 is the smallest prime number

class Solution
{
public:
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    int countPrimes(int n)
    {
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (isPrime(i))
            {
                c++;
            }
        }
        return c;
    }
};
