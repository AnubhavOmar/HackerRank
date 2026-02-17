// Solution of LeetCode Problem 
// Special Multiple 
// Solution in CPP 

// Appraoch - 1

string solve(int n) {

    queue<long long >que ;
    que.push(9);
    long long ans = que.front() ;
    while(que.front()%n !=0 )
    {
        que.push(que.front()*10) ;
        que.push((que.front()*10+9));
        que.pop();
        ans = que.front();
    }
    
    string anss = to_string(ans);
    return anss ;
}