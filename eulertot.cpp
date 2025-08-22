

class Solution
{
public:
    vector<int> uniPriF(int n)
    {
        vector<int> ans;
        if (n % 2 == 0)
        {
            ans.push_back(2);
            while (n % 2 == 0)
                n /= 2;
        }
        for (int i = 3; i * i <= n; i++)
        {
            if (n % i == 0)
                ans.push_back(i);
            while (n % i == 0)
                n /= i;
        }
        if (n > 2)
            ans.push_back(n);
        return ans;
    }
    int etf(int n)
    {
        vector<int> primes = uniPriF(n);
        int ans = n;
        for (int i = 0; i < primes.size(); i++)
        {
            // ans*=(primes[i]-1)/primes[i];
            ans = ans / primes[i] * (primes[i] - 1);
        }
        return ans;
    }
};

// class Solution {
//   public:
//     int etf(int n) {

//     int ans=n;
//     if(n%2==0){
//         ans*=((n-1)/n);

//         while(n%2==0) n/=2;
//     }
//     for(int i=3;i*i<=n;i++){
//         if(n%i==0) ans*=((i-1)/i);
//         while(n%i==0) n/=i;
//     }
//         ans.push_back(n);
//     }
// };

// ONE OF MY APPROACH: (BRUTE)
//  class Solution {
//    public:
//      int gcd(int a,int b){
//          while(a>0&&b>0)
//          {
//              if(a>b){
//                  a%=b;
//              }
//              else
//                  b%=a;
//          }
//          if(a==0) return b;

//         else return a;
//     }
//     int etf(int n) {
//         vector<int> ans;
//         for(int i=1;i<=n;i++){
//              if(gcd(i,n)==1)4{
//              ans.push_back(i);
//             }
//         }
//         return ans.size();
//     }
// };