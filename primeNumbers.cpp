class Solution {
  public:
    vector<int> primeFac(int n) {
        // code here
        vector<int>sol;
        
        if(n%2==0) 
            sol.push_back(2);
        while(n%2==0)
            n/=2;
        for(int i=3;i<=sqrt(n);i+=2)
        {
            if(n%i==0)
            { 
            sol.push_back(i);
            while(n%i==0) n/=i;
            }
        }
        
        if(n>2)
        {
            sol.push_back(n);
        }
        return sol;
    }
};



//OLD TRIES, WENT TOO CLOSE YET HAD TO CHECK SOLUTION (BRUTE WORKED, TIME COMPLEXITY NHI HO PAYA)

// class Solution {
//   public:
//       vector<int> primeFac(int n) {
//           vector<int>ans;
//           if(n%2==0){
//               ans.push_back(n);
//           }
           
//           n/=2;
           
//           for(int i=2; i*i<=n; i+=2){
//               if (n%i==0) ans.push_back(i);
//           }
//                 return ans;
//       }};
       
    // vector<int> primes(n)
    // {
    //     vector<bool>arr(n,true)
    //     vector<int>arr;
    //     for(int i=2;i<n;i++){
    //         if(arr[i]==true){
    //             arr.push_back(i);
    //             for(j=i*i;j<n;j+i){
    //                 arr[j]=false;
    //             }
    //         }
    //     }
    //     return arr;
    // }
    
    
    // vector<int> primeFac(int n) {
    //     // code here
        
    //     // vector<int> sol;
    //     // for
    //     vector<bool>arr1(n,true);
    //     vector<int>arr2;
    //     for(int i=2;i*i<=n;i++){
    //         if(arr1[i]==true){
    //             if(n%i==0)
    //                 arr2.push_back(i);
    //             for(int j=i*i;j<n;j+i){
    //                 arr1[j]=false;
    //             }
    //         }
    //     }
    //     return arr2;
        
    // vector<int> sol;
    // vector<bool>vec(n,true);
    // for(int i=2;i*i<n;i++){
    //     if(n%i!=0)
    //         vec[i]=false;
    //     if(vec[i])
    //         sol.push_back(i);
    //     for(int j = i*i;j<=n;j+=i){
    //         vec[j]=false;
    //     }
    // }
        
    // return sol;
        
    // }
