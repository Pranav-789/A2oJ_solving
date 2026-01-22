#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<char>> &board, int i, int j, int n, int m, char color)
{
    board[i][j] = color;

    char nextColor = (color == 'B') ? 'W' : 'B';

    if (i > 0 && board[i - 1][j] == '.')
        dfs(board, i - 1, j, n, m, nextColor);
    if (i < n - 1 && board[i + 1][j] == '.')
        dfs(board, i + 1, j, n, m, nextColor);
    if (j > 0 && board[i][j - 1] == '.')
        dfs(board, i, j - 1, n, m, nextColor);
    if (j < m - 1 && board[i][j + 1] == '.')
        dfs(board, i, j + 1, n, m, nextColor);
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<char>> board(n, vector<char>(m, '-'));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(board[i][j] == '.'){
                dfs(board, i, j, n, m, 'B');
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
}