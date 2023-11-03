#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;
bool comp(string s1, string s2)
{
    return s1 < s2;
}
int main(void)
{
    int n, m;
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<string> v1, v2, result;
    unordered_set<string> u;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        v1.push_back(temp);
    }
    for (int j = 0; j < m; j++)
    {
        string temp;
        cin >> temp;
        v2.push_back(temp);
        u.insert(temp);
    }
    int cnt = 0;
    for (int i = 0; i < v1.size(); i++)
    {

        if (u.find(v1[i]) != u.end())
        {
            cnt++;
            result.push_back(v1[i]);
        }
    }
    cout << cnt << "\n";
    sort(result.begin(), result.end(), comp);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << "\n";
    }
}