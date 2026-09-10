class Solution {
public:
    string minWindow(string s, string t) {

        int need[128] = {0};

        // Frequency of characters required from t
        for(int i = 0; i < t.size(); i++){
            need[t[i]]++;
        }
        int left = 0;
        int count = t.size();

        int minLen = INT_MAX;
        int start = 0;

        for(int right = 0; right < s.size(); right++) {

            // If this character is still needed
            if(need[s[right]] > 0) {
                count--;
            }

            need[s[right]]--;

            // Current window contains all characters of t
            while(count == 0) {

                int len = right - left + 1;

                if(len < minLen) {
                    minLen = len;
                    start = left;
                }

                // Remove left character
                need[s[left]]++;

                if(need[s[left]] > 0) {
                    count++;
                }

                left++;
            }
        }

        if(minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};