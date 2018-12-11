#include "include/Rook.h"
#include "API/GameVariables.h"

namespace Chess
{
	Rook::Rook(Color color) :Piece()
	{
		this->color = color;
	}

	Rook::~Rook()
	{
	}

	char Rook::Symbol()
	{
		if (color == Black)
			return 'r';
		if (color == White)
			return 'R';
		return ' ';
	}

	unsigned Rook::GetPoint()
	{
		return 1;
	}

	bool Rook::isValidMove(int x1, int y1, int x2, int y2)
	{
		bool isValid = GameVariables::IsCommonInvalidMoves(x1, y1, x2, y2);
		if (!isValid)
			return false;

		if (y1 == y2 && x1 != x2)
			return true;
		if (y1 != y2 && x1 == x2)
			return true;

		return false;
	}
}