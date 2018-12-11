#include "include/Bishop.h"
#include "API/GameVariables.h"
namespace Chess
{
	Bishop::Bishop(Color color) :Piece()
	{
		this->color = color;
	}

	Bishop::~Bishop()
	{
	}

	char Bishop::Symbol()
	{
		if (color == Black)
			return 'b';
		if (color == White)
			return 'B';
		return ' ';
	}

	unsigned Bishop::GetPoint()
	{
		return 1;
	}

	bool Bishop::isValidMove(int x1, int y1, int x2, int y2)
	{
		//Check Boundry Conditions
		//Validates the movement
		//Returns false if the piece is not moved
		bool isValid = GameVariables::IsCommonInvalidMoves(x1, y1, x2, y2);
		if (!isValid)
			return false;

		//Diagonal Motion
		if (abs(x1 - x2) == abs(y1 - y2))
			return true;

		return false;
	}
}