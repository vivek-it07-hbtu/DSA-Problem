class Solution {
public:
    int characterReplacement(string s, int k) {

        int low = 0;
        int ans = 0;

        unordered_map<char, int> f;

        int maxFreq = 0;

        for(int high = 0; high < s.size(); high++) {
            // Add current character
            f[s[high]]++;

            // Maximum frequency in current/past window
            maxFreq = max(maxFreq, f[s[high]]);

            int len = high - low + 1;

            // Characters that need replacement
            int diff = len - maxFreq;

            while(diff > k) {

                f[s[low]]--;
                low++;

                len = high - low + 1;
                diff = len - maxFreq;
            }

            ans = max(ans, high - low + 1);
        }

        return ans;
    }
};