// Solution of Hackerrank problem Picking Numbers
//  Solution in Cpp

// Appraoch  - 1

int pickingNumbers(vector<int> a)
{
    map<int, int> m;
    vector<int> key;
    vector<int> freq;
    for (int i = 0; i < int(a.size()); i++)
    {
        m[a[i]]++;
    }
    if (m.size() == 1)
        return a.size();
    for (auto a : m)
    {
        key.push_back(a.first);
        freq.push_back(a.second);
    }
    int maxx = 0;
    for (int i = 0; i < key.size(); i++)
    {
        maxx = max(maxx, freq[i]);

        if (i < key.size() - 1 && key[i] == key[i + 1] - 1)
        {
            maxx = max(maxx, freq[i] + freq[i + 1]);
        }
    }
    return maxx;
}

// Appraoch 2 

int pickingNumbers(vector<int> a) {
    vector<int> freq(101, 0);

    for (int x : a) {
        freq[x]++;
    }

    int maxx = 0;
    for (int i = 1; i <= 99; i++) {
        maxx = max(maxx, freq[i] + freq[i+1]);
    }

    return maxx;
}
