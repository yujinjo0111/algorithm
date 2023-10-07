#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

float change(int num, int max)
{
    float num1 = float(num) / max * 100;
    return num1;
}

int main()
{
    vector<int> v;
    int num = 0;
    float sum, max = 0.0;
    int word;
    cin >> num;
    cin.ignore(); // 엔터 무시
    string line;
    getline(cin, line);
    stringstream ss(line); // line으로 입력받은 것을 띄어쓰기로 잘라서
    while (ss >> word)
    {
        v.push_back(word);
    }

    max = *max_element(v.begin(), v.end());

    for (int i = 0; i < num; i++)
    {
        float score = change(v[i], max);
        sum += score;
    }

    cout << float((float)sum / (float)num) << endl;

    return 0;
}