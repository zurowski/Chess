#ifndef ROOK_H
#define ROOK_H

#include "King.h"
#include "Piece.h"

class Rook : public Piece {
private:
  bool isCorrect(char x_, char y_) override;

public:
  bool isPossible(char x_, char y_) override;
  Rook(color col_, Board *board_, Square *square_);
  ~Rook();
};

#endif
