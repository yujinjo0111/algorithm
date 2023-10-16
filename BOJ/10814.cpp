#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <string>

using namespace std;
bool compare(pair<int, string> a, pair<int, string> b)
{
    return (a.first < b.first);
}
int main()
{
    int n, m;
    string temp;
    vector<pair<int, string>> v1;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m >> temp;
        v1.push_back(make_pair(m, temp));
    }
    stable_sort(v1.begin(), v1.end(), compare);
    for (int i = 0; i < n; i++)
    {
        cout << v1[i].first << " " << v1[i].second << "\n";
    }
    return 0;
}