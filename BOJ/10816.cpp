#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, temp, m, cnt;
    vector<int> v1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v1.push_back(temp);
    }
    sort(v1.begin(), v1.end());

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        cnt = upper_bound(v1.begin(), v1.end(), temp) - lower_bound(v1.begin(), v1.end(), temp);
        cout << cnt << " ";
    }
}
// 이분탐색을 사용한..
//  - upper_bound : 찾고자 하는 값의 다음 값이 최초로 나타나는 위치
// - lower_bound : 찾고자 하는 값 이상이 처음 나타나는 위치
// 사용조건 : 벡터가 오름차순 정렬되어야 함
