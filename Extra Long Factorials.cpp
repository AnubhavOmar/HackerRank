// Solution of Hackerrank problem Extra Long Factorials
// Solution of in CPP

// Appraoch - 1 

void extraLongFactorials(int n) {
    vector<int> ans;
    ans.push_back(1);

    for(int x = 2; x <= n; x++) {
        int carry = 0;
        for(int i = 0; i < ans.size(); i++) {
            int val = ans[i] * x + carry;
            ans[i] = val % 10;
            carry = val / 10;
        }
        while(carry > 0) {
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }

    for(int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i];
    }
}
