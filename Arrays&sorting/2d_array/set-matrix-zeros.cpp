#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> creatematrix()
{

    vector<vector<int>> matrix;

    int n;
    cout << "eneter number of rows" << endl;
    cin >> n;

    int m;
    cout << "enter number of colums" << endl;
    cin >> m;

    cout << "enter elements";

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }

    return matrix;
}

void printvect(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void setmatrixzeros(vector<vector<int>> &matrix)
{

    bool row = false;
    bool col = false;

    for (auto val : matrix[0])
    {
        if (val == 0)
            ;
        row = true;
        break;
    }
    for (auto val : matrix)
    {
        if (val[0] == 0)
            ;
        col = true;
        break;
    }

    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[0].size(); j++)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }

    if (row)
    {
        for (int i = 0; i < matrix[0].size(); i++)
        {
            matrix[0][i] = 0;
        }
    }

    if (col)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            matrix[i][0] = 0;
        }
    }
}

int main()
{

    vector<vector<int>> matrix = creatematrix();

    printvect(matrix);

    return 0;
}