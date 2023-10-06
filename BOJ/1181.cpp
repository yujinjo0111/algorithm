#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool comp(string a, string b)
{
    if (a.length() == b.length())
        return a < b;               // 문자열을 사전순으로 배열
    return a.length() < b.length(); // 길이가 다르다면 길이가 작은것부터 출력
}
int main()
{
    vector<string> v;
    int n;
    cin >> n;

    while (n > 0)
    {
        string temp;
        cin >> temp;
        v.push_back(temp);
        n--;
    }
    sort(v.begin(), v.end(), comp);
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}