#pragma once
#include "API/Piece.h"
namespace Chess
{
	class Queen : public Piece
	{
	public:
		Queen(Color color);
		~Queen();
		char Symbol() override;
		unsigned GetPoint() override;
		bool isValidMove(int x1, int y1, int x2, int y2) override;
	};
}