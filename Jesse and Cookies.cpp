// Solution of Hackerrank Problem 
// Jesse and Cookies
// Solution in CPP 

// Approach - 1   (Using Min Heap)

int cookies(int k, vector<int> A) {

    priority_queue<int, vector<int>, greater<int>> pq(A.begin(), A.end());

    int count = 0;

    while (pq.size() >= 2 && pq.top() < k) {
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();

        int newCookie = first + 2 * second;
        
        pq.push(newCookie);

        count++;
    }

    if (pq.top() >= k) return count;
    return -1;
}