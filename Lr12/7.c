#include <stdio.h>

enum chess_pieces
{
    KING,
    QUEEN,
    ROOK,
    BISHOP,
    KNIGHT,
    PAWN,
    PIECE_COUNT
};
// a
const int piece_value_a[PIECE_COUNT] = {200, 9, 5, 3, 3, 1};
// b
const int piece_value_b[PIECE_COUNT] =
{
    [KING]   = 200,
    [QUEEN]  = 9,
    [ROOK]   = 5,
    [BISHOP] = 3,
    [KNIGHT] = 3,
    [PAWN]   = 1
};
struct ChessFigure
{
    enum chess_pieces type;
    char name[20];
    int value;
};

void printFigures(struct ChessFigure figures[], int n);
void simulateGame(struct ChessFigure figures[], int n);

int main()
{
    struct ChessFigure figures[PIECE_COUNT] =
    {
        {KING, "King", piece_value_b[KING]},
        {QUEEN, "Queen", piece_value_b[QUEEN]},
        {ROOK, "Rook", piece_value_b[ROOK]},
        {BISHOP, "Bishop", piece_value_b[BISHOP]},
        {KNIGHT, "Knight", piece_value_b[KNIGHT]},
        {PAWN, "Pawn", piece_value_b[PAWN]}
    };

    printf("Шахові фігури та їх значення:\n");
    printFigures(figures, PIECE_COUNT);

    printf("\nІмітація гри:\n");
    simulateGame(figures, PIECE_COUNT);

    return 0;
}
void printFigures(struct ChessFigure figures[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s - %d\n", figures[i].name, figures[i].value);
    }
}
void simulateGame(struct ChessFigure figures[], int n)
{
    int choice;

    printf("Оберіть фігуру:\n");
    printf("0 - King\n");
    printf("1 - Queen\n");
    printf("2 - Rook\n");
    printf("3 - Bishop\n");
    printf("4 - Knight\n");
    printf("5 - Pawn\n");
    printf("Введіть номер фігури: ");

    scanf("%d", &choice);

    printf("Ви обрали фігуру: %s з вартістю %d\n", figures[choice].name, figures[choice].value);
}