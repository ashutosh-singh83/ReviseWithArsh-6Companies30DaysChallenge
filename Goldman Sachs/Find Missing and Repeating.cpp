class Solution
{
public:
    vector<int> findTwoElement(vector<int> arr, int n)
    {
        // code here
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }
        vector<int> ans;
        int sum = 0;
        for (auto ele : freq)
        {
            if (ele.second == 2)
            {
                ans.push_back(ele.first);
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (freq.find(i) == freq.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};