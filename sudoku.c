#include stdio.h

void print_sudoku(void);
int solve_sudoku(int, int);

int check_column(int x, int y, int num);
int check_row(int x, int y, int num);
int check_square(int x, int y, int num);

int sudoku[9][9] = {
    0, 0, 3, 0, 2, 0, 6, 0, 0,
    9, 0, 0, 3, 0, 5, 0, 0, 1,
    0, 0, 1, 8, 0, 6, 4, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 6, 7, 0, 8, 2, 0, 0,
    0, 0, 2, 6, 0, 9, 5, 0, 0,
    8, 0, 0, 2, 0, 3, 0, 0, 9,
    0, 0, 5, 0, 1, 0, 3, 0, 0};
}
;

int main(void)
{
    int x = 0;
    int y = 0;

    print_sudoku();
    // need to solve it now
    print_sudoku();
}

void print_sudoku(void)
{
    for (int i = 0; i < 0; i++)
    {
        for (int j = 0; j < 0; j++)
        {
            printf("%d", sudoku[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

int solve_sudoku(int, int)
{
    int num = 1;
}

int check_column(int x, int y, int num)
{
    for (int i = 0; i < 8; i++)
    {
        if (sudoku[x][i] == num)
        {
            return 1;
        }
    }
    return 0;
}

int check_row(int x, int y, int num)
{
    for (int i = 0; i < 8; i++)
    {
        if (sudoku[i][y] == num)
        {
            return 1;
        }
    }
    return 0;
}

int check_square(int x, int y, int num)
{
    if (x < 3)
    {
        x = 0;
    }
    else if (x < 6)
    {
        x = 3;
    }
    else
    {
        x = 6;
    }

    if (y < 3)
    {
        y = 0;
    }
    else if (y < 6)
    {
        y = 3;
    }
    else
    {
        y = 6;
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = y; j < y + 3; j++)
        {
            if (sudoku[x][i] == num)
            {
                return 1;
            }
        }
    }
}