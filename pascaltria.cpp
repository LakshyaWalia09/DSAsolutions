class Solution
{
public:
    vector<int> nthRowOfPascalTriangle(int n)
    {
        // code here
        vector<int> ans;
        ans.push_back(1);

        for (int i = 1; i < n; i++)
        {
            ans.push_back(ans[i - 1] * (n - i));
            ans[i] /= i;
        }
        return ans;
    }
};
