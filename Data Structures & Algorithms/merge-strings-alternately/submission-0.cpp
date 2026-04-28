class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ret;
        if(word1.empty())
        {
            return word2;
        }
        if(word2.empty())
        {
            return word1;
        }
       

        int l1=word1.length();
        int l2=word2.length();
        int p1=0;
        int p2=0;
        while(p1 < l1 && p2 < l2)
        {
            ret.push_back(word1[p1]);
            ret.push_back(word2[p2]);
            p1++;
            p2++;

        }
        while(p1<l1) ret.push_back(word1[p1++]);
        
        while(p2<l2) ret.push_back(word2[p2++]);
        return ret;
    }
   
};