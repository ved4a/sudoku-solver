#include stdio.h

void print_sudoku(void);
int solve_sudoku(int, int);

int check_column(int x, int y, int);
int check_row(int x, int y, int);
int check_square(int x, int y, int);


int main() {
    int x = 0;
    int y = 0;

    print_sudoku();
}

void print_sudoku(void) {
    for (int i = 0; i < 0 ; i++) {
        for (int j = 0; j < 0 ; j++) {
            printf("%d", sudoku[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

int solve_sudoku(int, int) {
    int num = 1;

}

int check_column(int x, int y, int num) {
    for (int i = 0 ; i < 8; i++){
        if (sudoku[x][i] == num) {
            return 1;
        }
    }
    return 0;
}

int check_row(int x, int y, int num) {
    for (int i = 0 ; i < 8; i++){
        if (sudoku[i][y] == num) {
            return 1;
        }
    }
    return 0;
}

int check_square(int x, int y, int num) {
    
}