#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<pair<string, string>> v1;

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        v1.push_back(make_pair(to_string(i + 1), temp));
    }
    for (int i = 0; i < m; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < n; j++)
        {
            if (str == v1[j].first)
            {
                cout << v1[j].second << "\n";
            }
            else if (str == v1[j].second)
            {
                cout << v1[j].first << "\n";
            }
        }
    }
}
// map을 사용해서 풀자, map은 key와 value 가 쌍으로 지정되는 컨테이너로 균형 이진트리
// find()를 사용하여 for문 없이 빠르게 값을 찾을 수 있다.
