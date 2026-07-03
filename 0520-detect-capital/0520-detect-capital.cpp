class Solution {
public:
    bool detectCapitalUse(string word) {
        int Uppercase=0;
        for(int i=0;i<word.length();i++){
            if(isupper(word[i])){
                Uppercase++;
            }
        }
        return Uppercase == word.length()
            || Uppercase ==0
            || Uppercase == 1 && isupper(word[0]);
        
    }
};