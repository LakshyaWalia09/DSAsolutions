class Solution {
  public:
    int josephus(int n, int k) {
    
    vector<int>v1(n);
    
    for(int i=1 ; i<=n;i++)
        v1[i-1] = i;
    
    int i=0;
    
    while(v1.size()>1)
    {
        i+=k-1;
        if(i>=v1.size())
            i=i%v1.size();
        v1.erase(v1.begin() + i);
    }
    return v1[0];
    }
};