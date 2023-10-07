// 팰린드롬수
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
string re(int num)
{
    string numstr = to_string(num);
    reverse(numstr.begin(), numstr.end());
    return numstr;
}
int main()
{
    int temp;
    int cnt;
    vector<int> v;
    while (1)
    {
        cin >> temp;
        if (temp != 0)
        {
            v.push_back(temp);
            cnt++;
        }
        else
            break;
    }

    for (int i = 0; i < v.size(); i++)
    {
        int revernum = stoi(re(v[i]));

        if (revernum == v[i])
        {
            cout << "yes" << endl;
        }
        else
            cout << "no" << endl;
    }
    return 0;
}
