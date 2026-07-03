class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> hima;
        priority_queue<pair<int,int>> p;
        for(int i=0;i<arr.size();i++){
            if(p.size()<k){
                p.push({abs(arr[i]-x),arr[i]});
                continue;
            }
            if(p.top().first>abs(arr[i]-x)|| p.top().first==abs(arr[i]-x)&&p.top().second>arr[i]){
                p.pop();
                p.push({abs(arr[i]-x),arr[i]});
            }
        }
        while(!p.empty()){
            hima.push_back(p.top().second);
            p.pop();
        }
        sort(hima.begin(),hima.end());
        return hima;


        
    }
};