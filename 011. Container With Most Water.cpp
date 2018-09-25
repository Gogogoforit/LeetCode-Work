class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0;
        int i = 0;
        int j = 0;
        while(i<height.size()) {
            j=i+1;
            while(j <height.size()) {
                int h = (height[i]<height[j])?height[i]:height[j];
                int b = j-i;
                int temp = h*b;
                if(temp > max)
                    max= temp;
                j++;
            }
            i++;
        }
        return max;
    }
};
