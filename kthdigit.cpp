class Solution {
  public:
    int kthDigit(int a, int b, int k) {
        // code here
        long sol=pow(a,b);
        
        int ans=0;
        
        for(int i=0;i<k;i++){
            ans = sol%10;
            sol = sol/10;
        }
        return ans;
    }
};
