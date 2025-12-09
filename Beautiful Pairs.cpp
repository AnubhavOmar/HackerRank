// Problem of HackerRank 
// Beautiful Pairs 
// Solution in CPP 

// Appraoch - 1  (Brute Force)

int beautifulPairs(vector<int> A, vector<int> B) {
    int count = 0;
    vector<bool> used(B.size(), false);

    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < B.size(); j++) {
            if (!used[j] && A[i] == B[j]) {
                count++;
                used[j] = true;
                break;
            }
        }
    }

    if (count == A.size())
        return count - 1; 
    else
        return count + 1; 
}

// Appraoch - 2 (Using Maps)


int beautifulPairs(vector<int> A, vector<int> B) {
    unordered_map<int, int> freqA, freqB;

    for (int x : A) freqA[x]++;
    for (int x : B) freqB[x]++;

    int count = 0;

    for (auto &p : freqA) {
        int value = p.first;
        count += min(freqA[value], freqB[value]);
    }

    if (count == A.size()) return count - 1;

    return count + 1;
}
