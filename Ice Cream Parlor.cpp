// Solution of Hackerrank problem Ice Cream Parlor
//  Solution in Cpp 



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