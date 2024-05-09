class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> q;
        int n=score.size();
        for(int i=0;i<n;i++){
            q.push({score[i],i});
        }
        vector<string> ans(n);
        int cnt=1;
        string rank[3]={"Gold Medal","Silver Medal","Bronze Medal"};
        while(!q.empty()){
            auto tp=q.top();
            if(cnt<=3)
                ans[tp.second]=rank[cnt-1];
            else
                ans[tp.second]=to_string(cnt);
            cnt++;
            q.pop();
        }
        return ans;
    }
};
