class Solution {
public:
    /**
     * @param height: A list of integer
     * @return: The area of largest rectangle in the histogram
     */
    int largestRectangleArea(vector<int> &height) {
        if (height.size() == 0) {
            return 0;
        }
        
        stack<int> s;
        int best = 0;
        
        for (int i = 0; i <= height.size(); i++) {
            int curr = (i == height.size()) ? -1 : height[i];
            while (!s.empty() && curr <= height[s.top()]) {
                int h = height[s.top()];
                s.pop();
                int w = s.empty() ? i : i - s.top() - 1;
                best = max(best, h * w);
            }
            s.push(i);
        }
        
        return best;
    }
};

