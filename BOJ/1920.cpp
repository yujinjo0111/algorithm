#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;
int n, m;
int temp;

vector<int> v;
void binarySearch(int key);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    cin >> m;
    for (int i = 0; i < m; i++)
    {

        cin >> temp;
        binarySearch(temp);
    }
}
void binarySearch(int key)
{
    int start = 0;
    int end = v.size() - 1;
    int mid;

    while (end >= start)
    {
        mid = (start + end) / 2;
        if (v[mid] == key)
        {
            cout << 1 << "\n";
            return;
        }
        else if (v[mid] > key)
        {
            end = mid - 1;
        }
        else if (v[mid] < key)
        {
            start = mid + 1;
        }
    }
    cout << 0 << "\n";
}
