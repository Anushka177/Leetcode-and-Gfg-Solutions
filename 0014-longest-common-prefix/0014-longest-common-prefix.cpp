class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string a=strs[0];
        string b=strs[n-1];
        string s="";
        if(strs[0]==strs[n-1]) return strs[0];
        else
        {
            for(int i=0;i<strs[n-1].length();i++)
            {
                if(a[i]==b[i])
                {
s+=a[i];

                }
                else//important 
                {
                    break;
                }

            }
            return s;
        }
return s;
    }
};