#include <stdio.h>

// for my own reference, 1 is 'success' and 0 is 'failure'
int is_valid(int[][9], int x, int y, int z);
int solve_sudoku(int[][9]);
int is_empty(int[][9], int *, int *);

int main()
{
    int game[9][9] = {{1, 7, 4, 0, 9, 0, 6, 0, 0},
                      {0, 0, 0, 0, 3, 8, 1, 5, 7},
                      {5, 3, 0, 7, 0, 1, 0, 0, 4},
                      {0, 0, 7, 3, 4, 9, 8, 0, 0},
                      {8, 4, 0, 5, 0, 0, 3, 6, 0},
                      {3, 0, 5, 0, 0, 6, 4, 7, 0},
                      {2, 8, 6, 9, 0, 0, 0, 0, 1},
                      {0, 0, 0, 6, 2, 7, 0, 3, 8},
                      {0, 5, 3, 0, 8, 0, 0, 9, 6}};
    int row = 0;
    int column = 0;

    if (solve_sudoku(game))
    {
        printf("\n+-----+-----+-----+\n");
        for (int i = 0; i < 9; ++i)
        {
            for (int j = 0; j < 9; ++j)
                printf("|%d", game[i][j]);
            printf("|\n");
            if (i % 3 == 2)
                printf("\n+-----+-----+-----+\n");
        }
    }
    else
    {
        printf("\n\nNO SOLUTION FOUND\n\n");
    }

    return 0;
}

int is_empty(int game[][9], int *row, int *column)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (!game[i][j])
            {
                *row = i;
                *column = j;

                return 1;
            }
        }
    }
    return 0;
}

int is_valid(int game[][9], int row, int column, int guess)
{
    int corner_i = row / 3 * 3;
    int corner_j = column / 3 * 3;

    for (int i = 0; i < 9; ++i)
    {
        if (game[row][i] == guess)
            return 0;
        if (game[i][column] == guess)
            return 0;
        if (game[corner_i + (i % 3)][corner_j + (i / 3)] == guess)
            return 0;
    }
    return 1;
}

int solve_sudoku(int game[][9])
{
    int row;
    int column;

    if (!is_empty(game, &row, &column))
        return 1;

    for (int guess = 1; guess < 10; guess++)
    {
        if (is_valid(game, row, column, guess))
        {
            game[row][column] = guess;

            if (solve_sudoku(game))
                return 1;
            game[row][column] = 0;
        }
    }
    return 0;
}