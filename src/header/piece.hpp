// Piece.hpp
#ifndef PIECE_HPP
#define PIECE_HPP
#include <string>
using namespace std;

class Piece {

protected:
    char symbole;
    bool blanc;

public:
    Piece(char symbole, bool estBlanc);
    char getSymbole() const;
    virtual bool estPieceBlanche() const = 0; // Dans la classe Piece
    virtual bool estDeplacementValide(int departX, int departY, int arriveeX, int arriveeY, string& raisonInvalide) const = 0;
    
virtual bool estDame() const {
    return false; // Une pièce ordinaire n'est pas une dame
}
    
};

#endif // PIECE_HPP
