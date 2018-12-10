#pragma once
#include "API/Enums.h"
namespace Chess
{
	class Piece;
	class Cell
	{
	public:
		Cell(unsigned int x, unsigned int y);
		MoveError MovePieceTo(Chess::Cell& cell);
		Piece* const GetPiece()const;
		~Cell();
	private:
		//bool CaptureNearPieces(Cell &cell);
		unsigned int m_X;
		unsigned int m_Y;
		Piece *m_piece;
	};
}