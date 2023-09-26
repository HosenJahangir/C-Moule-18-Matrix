#include <stdio.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int ary[row][column];
    int total_Elements = row * column;

    // scanf Start
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &ary[i][j]);
        }
    }
    // scanf End

    int flag = 1;

    if (row != column)
    {
        flag = 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i + j != 2)
            {
                if (ary[i][j] != 0)
                {
                    flag = 0;
                }
            }
        }
    }

    if (flag == 1)
    {
        printf("Secondary Diagonal");
    }
    else
    {
        printf("Not Diagonal");
    }

    return 0;
}