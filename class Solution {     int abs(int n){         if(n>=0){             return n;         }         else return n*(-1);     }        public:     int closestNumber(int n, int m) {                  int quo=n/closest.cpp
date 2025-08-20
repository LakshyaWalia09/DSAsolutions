class Solution {
    int abs(int n){
        if(n>=0){
            return n;
        }
        else return n*(-1);
    }
    
  public:
    int closestNumber(int n, int m) {
        
        int quo=n/m;
        int num1=quo*m;
        int num2=(n*m>0)?num1+m:num1-m;
        if(abs(n-num1)>abs(n-num2)){
            return num2;
        }
        else if(abs(n-num1)<abs(n-num2))
            return num1;
        else{
            return(abs(num1)>abs(num2)?num1:num2);
        }
    }
};
