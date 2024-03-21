class Solution
{
public:
    int search(string pat, string txt)
    {
        // code here
        int l = 0, r = 0;

        vector<int> cnt1(26, 0), cnt2(26, 0);
        for (int i = 0; i < pat.size(); i++)
        {
            cnt1[pat[i] - 'a']++;
        }
        int ans = 0;
        while (r < txt.size())
        {

            cnt2[txt[r] - 'a']++;
            if (r - l + 1 == pat.size())
            {
                bool flag = true;
                for (int i = 0; i < 26; i++)
                {
                    if (cnt1[i] != cnt2[i])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                    ans++;
                cnt2[txt[l] - 'a']--;
                l++;
            }
            r++;
        }
        return ans;
    }
};