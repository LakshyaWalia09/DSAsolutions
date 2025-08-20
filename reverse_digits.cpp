//ignore weird snippets am just trying new things here and there

class Solution
{

    int numberOfDigits(int n)
    {
        int i = 1;
        while (n / i != 0)
        {
            i++;
            n /= 10;
        }
        return i;
    }

    int reverse(int n, int dig)
    {
        int temp = 0;
        for (int i = 0; i < dig; i++)
        {
            temp += (n % 10) * (pow(10, i));
            n /= 10;
        }
        return temp;
    }

public:
    int reverseDigits(int n)
    {

        int temp = 0;
        int i = 0;
        while (n != 0)
        {
            temp *= 10;
            temp += n % 10;
            // temp+=(n%10)*pow(10,i);
            n /= 10;
            i++;
        }

        return temp;

        // int rev=0;
        // int dig=numberOfDigits(n);
        // while(int i=1;i<dig;i++){
        //     rem
        //     rev+=
        // }

        // return reverse(n,numberOfDigits(n));
    }
};