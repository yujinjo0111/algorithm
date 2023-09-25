#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> M >> N >> "\n";
    char input[100][100];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; i < M; j++)
        {
            cin >> input[i][j];
        }
    }

    char chesscheck[8][8] = {
        {"W", "B", "W", "B", "W", "B", "W", "B"},
        {"B", "W", "B", "W", "B", "W", "B", "W"},
        {"W", "B", "W", "B", "W", "B", "W", "B"},
        {"B", "W", "B", "W", "B", "W", "B", "W"},
        {"W", "B", "W", "B", "W", "B", "W", "B"},
        {"B", "W", "B", "W", "B", "W", "B", "W"},
        {"W", "B", "W", "B", "W", "B", "W", "B"},
        {"B", "W", "B", "W", "B", "W", "B", "W"}};

    char chesschesk1[8][8] = {
        {"B", "W", "B", "W", "B", "W", "B", "W"},
        {"W", "B", "W", "B", "W", "B", "W", "B"},
        {"B", "W", "B", "W", "B", "W", "B", "W"},
        {"W", "B", "W", "B", "W", "B", "W", "B"},
        {"B", "W", "B", "W", "B", "W", "B", "W"},
        {"W", "B", "W", "B", "W", "B", "W", "B"},
        {"B", "W", "B", "W", "B", "W", "B", "W"},
        {"W", "B", "W", "B", "W", "B", "W", "B"}
    }
}
