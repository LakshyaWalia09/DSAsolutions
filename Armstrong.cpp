// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int temp=0;
        int m=n;
        // code here
        while(m){
            temp+=pow((m%10),3);
            m/=10;
        }
        return (temp==n)?true:false;
    }
};
