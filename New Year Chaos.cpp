// Solution of Hackerrank Problem New year chaos 
// Solution in Cpp

// Approach - 1 

void minimumBribes(vector<int> q) {
    int n = q.size();
    int total_bribes = 0;

    for (int i = 0; i < n; i++) {
       

        if (q[i] - (i + 1) > 2) {
            cout << "Too chaotic" << endl;
            return;
        }

        int start_index_check = max(0, q[i] - 2);
       
        for (int j = start_index_check; j < i; j++) {
            if (q[j] > q[i]) {
                total_bribes++;
            }
        }
    }
   
    cout << total_bribes << endl;
}