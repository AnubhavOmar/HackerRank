// Solution of Hackerrank problem Counting Valleys
//  Solution in cpp
string happyLadybugs(string b)
{
    unordered_map<char, int> m;
    for (char a : b)
    {
        m[a]++;
    }
    for (auto a : m)
    {
        if (a.second == 1 && a.first != '_')
            return "NO";
    }

    if (m.find('_') != m.end())
    {
        return "YES";
    }
    else
    {

        for (int i = 0; i < b.size(); i++)
        {
            bool left_match = (i > 0 && b[i] == b[i - 1]);

            bool right_match = (i < b.size() - 1 && b[i] == b[i + 1]);

            if (!left_match && !right_match)
                return "NO";
        }
        return "YES";
    }
}