class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        int len=arr.size();
        if(arr.size()<2)
            return 0;
        int i=0,sum=0;
        vector<int> st;
        st.push_back(INT_MAX);
        for(int i=0;i<len;i++)
        {
            while(st.back()<=arr[i])
            {
                int t=st.back();
                st.pop_back();
                sum+=t*min(st.back(),arr[i]);
            }
            st.push_back(arr[i]);
        }
        
        for(int i=2;i<st.size();i++)
            sum+=st[i]*st[i-1];
        return sum;
    }
};
