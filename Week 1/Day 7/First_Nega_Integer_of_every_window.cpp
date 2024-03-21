vector<long long> printFirstNegativeInteger(long long int a[],
                                            long long int n, long long int k)
{
    vector<long long> v;
    list<long long> li;
    long long l = 0, r = 0;
    while (r < n)
    {
        if (a[r] < 0)
        {
            li.push_back(a[r]);
        }
        if (r - l + 1 < k)
            r++;
        else if (r - l + 1 == k)
        {
            v.push_back(li.front());
            if (li.front() == a[l])
            {
                li.pop_front();
            }
            l++, r++;
        }
    }
    return v;
}