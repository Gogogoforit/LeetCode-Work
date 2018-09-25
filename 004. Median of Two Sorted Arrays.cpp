class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //先派出有空的情况
        if(nums1.size() == 0)
            return (nums2.size()%2==0)?((float)(nums2[nums2.size()/2]+nums2[nums2.size()/2-1])/2):nums2[(nums2.size()-1)/2];
        if(nums2.size() == 0)
            return (nums1.size()%2==0)?((float)(nums1[nums1.size()/2]+nums1[nums1.size()/2-1])/2):nums1[(nums1.size()-1)/2];
        
        int cur1=0;
        int cur2=0;
        int m = nums1.size();
        int n = nums2.size();
        //以(m+n)的奇偶性来讨论
        if((m+n)%2==0) {
            int aim = (m+n)/2;
            float now = 0;
            float next = 0;
            while(cur1<m && cur2<n) {
                if(nums1[cur1]<=nums2[cur2]) {
                    now=nums1[cur1];
                    cur1++;
                }
                else if(nums1[cur1]>nums2[cur2]) {
                    now=nums2[cur2];
                    cur2++;
                }
                if(cur1+cur2==aim){
                    if(cur1==m)
                        next = nums2[cur2];
                    else if(cur2==n)
                        next = nums1[cur1];
                    else
                        next = (nums1[cur1]<=nums2[cur2])?nums1[cur1]:nums2[cur2];
                    return (now+next)/2;
                }
            }
            
            if(cur1<m) {
                if(m%2==1) 
                    return (float)(nums1[(m-n-2)/2]+nums1[(m-n-2)/2+1])/2;         
                else
                    return (float)(nums1[(m-n)/2-1]+nums1[(m-n)/2])/2;   
            }
            else if(cur2<n){
                if(n%2==1) 
                    return (float)(nums2[(n-m-2)/2]+nums2[(n-m-2)/2+1])/2;
                else
                    return (float)(nums2[(n-m)/2-1]+nums2[(n-m)/2])/2;                
            } 
        }
        else if((m+n)%2==1) {
            int aim = (m+n+1)/2;
            int now = 0;
            while(cur1<m && cur2<n) {
                if(nums1[cur1]<=nums2[cur2]) {
                    now=nums1[cur1];
                    cur1++;
                }
                else if(nums1[cur1]>nums2[cur2]) {
                    now=nums2[cur2];
                    cur2++;
                }
                if(cur1+cur2==aim){
                    return (float)now;
                }
            }
            if(cur1<m) {
                return (float)(nums1[(m-n-1)/2]);
            }
            else if(cur2<n){
                return (float)(nums2[(n-m-1)/2]);
            } 
        }
    }
};
