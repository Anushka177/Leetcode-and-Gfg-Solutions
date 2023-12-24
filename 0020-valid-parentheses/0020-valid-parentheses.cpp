class Solution {
public:
    bool isValid(string s) {
      stack<char> p;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='{'||s[i]=='('||s[i]=='[')
            p.push(s[i]);
            else
            {
                if(!p.empty()&&(s[i]==']'&&p.top()=='['))
                 p.pop();
                else if(!p.empty()&&(s[i]=='}'&&p.top()=='{'))
                    p.pop();
                else if(!p.empty()&&(s[i]==')'&&p.top()=='('))
                    p.pop();
                else
                    return false;
            }
        }
        if(p.empty())
            return true;
        else
     return false;
    }
   
};