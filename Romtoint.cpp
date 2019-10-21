class Solution {
public:
    int romanToInt(string s) {
        
      string rom = s;
        int tz = 0;
        int cu = 0;
        int cu1 = 1;
        int temp =0;
        int temp1 =0;
        int fin =0;
        string gg;
       // int count =  - 1;
        while (tz < s.length())
        {
            cu = whichnum(s[tz]);
            cu1 = whichnum(s[tz + 1]);
            if (cu < cu1)
            {
                gg = s.substr(tz,2);
                temp = nums(gg);
              tz = tz + 2;
                if(temp > 0)
                {
                    temp = temp;
                }
                else
                {
                    temp = -temp;
                }
            }
            else
            {
                // gg = s.substr(tz,1);
                temp = whichnum(s[tz]);
                tz++;
                 if(temp > 0)
                {
                    temp = temp;
                }
                else
                {
                    temp = -temp;
                }
            }
            fin =  fin + temp;
                
        }        
        return fin;
    }
    int whichnum(char q)
 {
        int num;
        
         if (q == 'M')
         {
             return num = 1000;
         }
          if (q == 'D')
         {
             return num = 500;
         }
          if (q == 'C')
         {
             return num = 100;
         }
          if (q == 'L')
         {
             return num = 50;
         }
          if (q == 'X')
         {
             return num = 10;
         }
          if (q == 'V')
         {
             return num = 5;
         }
          if (q == 'I')
         {
             return num = 1;
         }
         return 0;
 }
int nums(string q)
{
   char k = q[0];
   char z = q[1];
    int thenum1 =0;
    int thenum2 =0;
    thenum1 = whichnum(k);
    thenum2 = whichnum(z);
    int rturn = thenum2 - thenum1;
     
    return rturn;
}
};
 