// Determine if matrix is orthogonal

int orthogonal(int x[MAX_ROWS][MAX_COLS], int a, int b) {
    int transx[MAX_ROWS][MAX_COLS], multiplication[MAX_ROWS][MAX_COLS], i, j, rank_m;

    copy(transx, x, a, b);

    transpose(transx, a, b);

    multiply(multiplication, x, transx, a, b, a);

    rank_m = rank(multiplication, a, a);

    return rank_m == a;
}
