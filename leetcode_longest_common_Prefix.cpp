class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     if (strs.size() == 0)
      {
          return "";
      }
        else
        {
        string thef = strs[0]; 
    for(int i = 0;i < thef.size(); i++)
    {
        char c = thef[i];
        for(int j = 1;j < strs.size(); j++)
        {
            string theE =strs[j]; 
            if ((c!= theE[i])||(i == theE.size()))
                return thef.substr (0,i);
            }    
        
    }    
        return strs[0];
        
        } 
        
        }

};