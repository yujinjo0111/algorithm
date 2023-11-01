#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m;
    vector<int> v1;
    string str;
    int num;

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> str;

        if (str == "add")
        {
            cin >> num;
            if (find(v1.begin(), v1.end(), num) != v1.end())
                continue;
            else
            {
                v1.push_back(num);
            }
        }
        if (str == "remove")
        {
            cin >> num;
            if (find(v1.begin(), v1.end(), num) == v1.end())
                continue;
            else
            {
                v1.erase(remove(v1.begin(), v1.end(), num), v1.end());
            }
            // remove는 특정 값을 찾아서 완전히 지우는 것이 아닌, 벡터의 뒤로 보내기 때문에 추가로 erase를 해줘야 함
        }
        if (str == "check")
        {
            cin >> num;
            if (find(v1.begin(), v1.end(), num) != v1.end()) // num이 존재함
            {
                cout << "1"
                     << "\n";
            }
            else
                cout << "0"
                     << "\n";
        }
        if (str == "toggle")
        {
            cin >> num;
            if (find(v1.begin(), v1.end(), num) != v1.end())
            {
                v1.erase(remove(v1.begin(), v1.end(), num));
            }
            else
            {
                v1.push_back(num);
            }
        }
        if (str == "all")
        {
            // v1.clear();
            // vector<int>().swap(v1);
            for (int i = 1; i <= 20; i++)
            {
                // int t = 1;

                v1.push_back(i);
            }
        }
        if (str == "empty")
        {
            v1.clear();
        }
    }
}