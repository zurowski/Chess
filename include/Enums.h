#ifndef CHESS_ENUMS_H
#define CHESS_ENUMS_H

enum Piece_type { PAWN, ROOK, KNIGHT, BISHOP, QUEEN, KING, ANY };

enum game_state { NORMAL, CHECK, CHECK_MATE, STALE_MATE };

enum color { WHITE, BLACK };

enum special_args {
  NONE,
  PROM_N,
  PROM_B,
  PROM_R,
  PROM_Q,
  SHORT_CASTLE,
  LONG_CASTLE
};

#endif // CHESS_ENUMS_H
