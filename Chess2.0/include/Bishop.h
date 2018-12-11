#pragma once
#include "API/Piece.h"
namespace Chess
{
	class Bishop : public Piece
	{
	public:
		Bishop(Color color);
		~Bishop();
		char Symbol() override;
		unsigned GetPoint() override;
		bool isValidMove(int x1, int y1, int x2, int y2) override;
	};
}