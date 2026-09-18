//Solution of Hackerrank problem Stock Maximize
// Solution in cpp


// Solution 2 
pair<int , int> max_price(vector<int> &prices, int index)
{
    int maxx = INT_MIN;
    int maxx_index = -1;
    int n = prices.size();

    for(int i = index; i < n; i++)
    {
        if(maxx < prices[i])
        {
            maxx = prices[i];
            maxx_index = i;
        }
    }

    return {maxx, maxx_index};
}


long stockmax(vector<int> prices) {
    long profit = 0;
    int n = prices.size();

    int max_index = -1;
    int maxx = 0;

    for(int i = 0; i < n; i++)
    {
        if(i == 0 || i == max_index)
        {
            pair<int, int> p = max_price(prices, i + 1);

            maxx = p.first;
            max_index = p.second;
        }

        if(maxx > prices[i])
        {
            profit += maxx - prices[i];
        }
    }

    return profit;
}


// Solution 1 (Brute Force)
long stockmax(vector<int> prices) {
    long profit = 0 ; 
    int n = prices.size() ;
    for(int i = 0 ; i < n ; i++)
    {
        int maxx = prices[i] ;
        for(int j = i + 1 ; j < n ; j++)
        {
            maxx = max(maxx , prices[j]);
        }
        if(maxx != prices[i])
        {
            profit += maxx - prices[i] ;
        }
    }
    return profit ;
}
