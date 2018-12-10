#pragma once
#include "API/Piece.h"
namespace Chess
{
	class Rook : public Piece
	{
		Rook();
		~Rook();
		char Symbol() override;
		unsigned GetPoint() override;
		bool isValidMove(int x1, int y1, int x2, int y2) override;

		
	};
}