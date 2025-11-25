// Solution of Hackerrank Problem Jim and the Orders 
// Solution in Cpp

// Approach - 1  

vector<int> jimOrders(vector<vector<int>> orders) {
        vector<pair<int,int>> del_info ;
        int n = orders.size();
        for(int i = 0 ; i<n ; i++)
        {
            int custom_num = i +1 ;
            int del_time = orders[i][0] + orders[i][1];
            del_info.push_back({del_time , custom_num});
        }
        sort(del_info.begin(),del_info.end());
        vector<int> result ;
        for(auto a : del_info)
        {
            result.push_back(a.second);
        }
        return result ;
}