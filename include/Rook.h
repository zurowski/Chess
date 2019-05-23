#ifndef ROOK_H
#define ROOK_H

#include "Piece.h"
#include "King.h"

class Rook : public Piece{
private:
    bool isCorrect(char x_, char y_) override;
    bool isPossible(char x_, char y_) override;
public:
    Rook(color col_, Board* board_, Square* square_);
    ~Rook();
};

#endif
