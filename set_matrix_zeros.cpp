#include <iostream>
#include <vector>
using namespace std;

// code studio code
void setZeros(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    int col0 = 1;

    // traverse the entire matrix
    for (int i = 0; i < rows; i++)
    {
        if (matrix[i][0] == 0)
        {
            col0 = 0;
        }
        for (int j = 1; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = matrix[0][j] = 0;
            }
        }
    }

    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = cols - 1; j >= 1; j--)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
        if (col0 == 0)
        {
            matrix[i][0] = 0;
        }
    }
} // code studio code

int main()
{

    return 0;
}