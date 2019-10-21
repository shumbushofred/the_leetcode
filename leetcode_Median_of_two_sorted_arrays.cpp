
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int sizee=(nums1.size() + nums2.size());
        int num[sizee];
        int i=0;
        int j =0;
        int f=0;
        
        while(i < nums1.size() && j < nums2.size())
        {
            if(nums1[i] < nums2[j])
            {
                num[f] = nums1[i];
                    i++;
                f++;
            }
            else
            {
                num[f] = nums2[j];
                    j++;
                f++;
            }
        }
        
        while(i< nums1.size())
        {
            num[f] = nums1[i];
                    i++;
                f++;
        }
       while(j < nums2.size())
       {
            num[f] = nums2[j];
                j++;
                f++;
       }
        if((sizee % 2) == 1)
        {
            int d = (sizee/2);
            return num[d];
        }
        else
        {
            int w =(sizee / 2);
            double fi =num[w];
            double se =num[w - 1];
            double zz =(fi + se) / 2;
            return zz;
        }
        
      //  return sizee;
    }
};