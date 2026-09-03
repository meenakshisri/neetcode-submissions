class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int l1 = 0, l2 =0;
        string word3 = "";

        while(l1<word1.length() && l2<word2.length())
        {
            word3 = word3 + word1[l1] +word2[l2];
            l1++;
            l2++;
        }

        while(l1<word1.length())
        {
            word3 = word3 + word1[l1];
            l1++;
        }
        while(l2<word2.length())
        {
            word3 = word3 + word2[l2];
            l2++;
        }
        return word3;
    }
};