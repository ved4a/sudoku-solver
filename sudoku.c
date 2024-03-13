#include <stdio.h>

// for my own reference, 1 is 'success' and 0 is 'failure'
int is_valid(int[][9], int x, int y, int z);
int solve_sudoku(int[][9]);
int is_empty(int[][9], int *, int *);

int game[9][9] =
    {{1, 7, 4, 0, 9, 0, 6, 0, 0},
     {0, 0, 0, 0, 3, 8, 1, 5, 7},
     {5, 3, 0, 7, 0, 1, 0, 0, 4},
     {0, 0, 7, 3, 4, 9, 8, 0, 0},
     {8, 4, 0, 5, 0, 0, 3, 6, 0},
     {3, 0, 5, 0, 0, 6, 4, 7, 0},
     {2, 8, 6, 9, 0, 0, 0, 0, 1},
     {0, 0, 0, 6, 2, 7, 0, 3, 8},
     {0, 5, 3, 0, 8, 0, 0, 9, 6}};

int is_empty(int[][9], int *, int *)
{
}