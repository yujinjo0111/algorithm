#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void)
{
    int n;
    float cnt = 0;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {

        cnt += v[i];
    }
    cout << round((float)(cnt / n)) << "\n";
    sort(v.begin(), v.end());
    cout << v[((n + 1) / 2) - 1] << "\n";
    // 최빈값
    int arr[8001];
    for (int i = 0; i < n; i++)
    {
        arr[v[i] + 4000]++;
    }
    int count = 0;
    vector<int> mode;
    int flag;
    for (int i = 0; i <= 8000; i++)
    {
        if (arr[i] > count)
        {
            count = arr[i];
            flag = i;
        }
    }
    for (int i = flag + 1; i < 8001; i++)
    {
        if (arr[i] == count)
        {
            flag = i;
            break;
        }
    }
    cout << flag - 4000 << "\n";
    // vector<pair<int,int>> st;

    // for (int i = 0; i < v.size(); i++)
    //{
    // }
    //  cout << (*max_element(v.begin(), v.end())) - *min_element(v.begin(), v.end()) << "\n";
    cout << v[n - 1] - v[0] << "\n";
}
/// 실패