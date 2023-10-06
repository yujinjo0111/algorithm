#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"};
string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"};
string check_board[50];

int wb_cnt(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (check_board[x + i][y + j] != WB[i][j])
                cnt++;
        }
    }
    return cnt;
}
int bw_cnt(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (check_board[x + i][y + j] != BW[i][j])
                cnt++;
        }
    }
    return cnt;
}
int main()
{

    int min_val = 1000;
    int num1, num2;
    cin >> num1 >> num2;
    for (int i = 0; i < num1; i++)
        cin >> check_board[i];
    for (int i = 0; i + 8 <= num1; i++)
    {
        for (int j = 0; j + 8 <= num2; j++)
        {

            int tmp;
            tmp = min(wb_cnt(i, j), bw_cnt(i, j));
            if (tmp < min_val)
            {
                min_val = tmp;
            }
        }
    }
    cout << min_val;
    return 0;
}
