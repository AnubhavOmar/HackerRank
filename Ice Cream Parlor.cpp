// Solution of Hackerrank problem Ice Cream Parlor
//  Solution in Cpp 

// Appraoch 2 (hash map) Optimal approach
vector<int> icecreamParlor(int m, vector<int>& arr) {
    unordered_map<int,int> mp;
    for(int i = 0; i < arr.size(); i++) {
        int need = m - arr[i];
        if(mp.count(need)) 
            return {mp[need] + 1, i + 1};
        mp[arr[i]] = i;
    }
    return {};
}



// Approach 1 Brute Force 
vector<int> icecreamParlor(int m, vector<int> arr) {
   
    for(int i = 0 ;i<int(arr.size());i++)
       {
           for(int j = i+1;j<int(arr.size());j++)
           {
               if((arr[i]+arr[j])==m ) return {i+1,j+1};
           }
       }
   
    return  {-1};
}