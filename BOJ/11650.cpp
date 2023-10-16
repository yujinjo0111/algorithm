#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    int n, m, k;
    vector<pair<int, int>> v1;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m >> k;
        v1.push_back(make_pair(m, k));
    }
    stable_sort(v1.begin(), v1.end());
    for (int i = 0; i < n; i++)
    {
        cout << v1[i].first << " " << v1[i].second << "\n";
    }
}