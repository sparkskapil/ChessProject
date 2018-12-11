#include "include/Queen.h"
#include "API/GameVariables.h"
namespace Chess
{
	Queen::Queen(Color color) :Piece()
	{
		this->color = color;
	}

	Queen::~Queen()
	{
	}

	char Queen::Symbol()
	{
		if (color == Black)
			return 'q';
		if (color == White)
			return 'Q';
		return ' ';
	}

	unsigned Queen::GetPoint()
	{
		return 1;
	}

	bool Queen::isValidMove(int x1, int y1, int x2, int y2)
	{
		//Check Boundry Conditions
		//Validates the movement
		//Returns false if the piece is not moved
		bool isValid = GameVariables::IsCommonInvalidMoves(x1, y1, x2, y2);
		if (!isValid)
			return false;

		//Horizontal Motion
		if (y1 == y2 && x1 != x2)
			return true;
		//Vertical Motion
		if (y1 != y2 && x1 == x2)
			return true;
		//Diagonal Motion
		if (abs(x1 - x2) == abs(y1 - y2))
			return true;

		return false;
	}
}