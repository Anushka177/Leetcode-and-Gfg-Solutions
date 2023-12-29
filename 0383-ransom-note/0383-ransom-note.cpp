class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    int m = ransomNote.size();
    int n = magazine.size();
    
    if(n<m){
        return false;
    }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[magazine[i]]++;
    }
    for(int i=0;i<m;i++){
        if(mp[ransomNote[i]]>0){
            mp[ransomNote[i]]--;
        }
        else{
            return false;
        }
    }
    return true;

        
        
        
    }
};