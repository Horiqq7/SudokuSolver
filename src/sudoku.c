#include "sudoku.h"

int UNSOLVED = 81;
int SIZE_ROWS = 9;
int SIZE_COLUMNS = 9;

int main()
{
    int ** puzzle;
    int progress = 0;
    Sudoku * sudoku;


    puzzle = createPuzzle();

    sudoku = setUpPuzzle(puzzle);

    printPuzzle(sudoku->squares);
    printf("\n");

    while(UNSOLVED > 0) {
        progress = checkPuzzle(sudoku->squares, sudoku->boxes);
        if (progress == 0) {
            printf("failed to solve the puzzle!\n");
            break;
        }
    }

    printf("Solution to the puzzle is:");
    printPuzzle(sudoku->squares);
    return 0;
}
