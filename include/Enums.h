#ifndef CHESS_ENUMS_H
#define CHESS_ENUMS_H

enum Piece_type {
    PAWN,
    ROOK,
    KNIGHT,
    BISHOP,
    QUEEN,
    KING
};

enum game_state {
    NORMAL,
    CHECK,
    CHECK_MATE
};

enum color {
    BLACK,
    WHITE
};

#endif //CHESS_ENUMS_H
