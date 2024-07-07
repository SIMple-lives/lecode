class Solution {
public:
    bool isprimer(int n)
    {
        int i = 0;
       for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    int countPrimes(int n) {
        int count =0;
        for(int i=2;i<n;i++)
        {
            if(isprimer(i))
            {
                count++;
            }
        }
        return count;
    }
};