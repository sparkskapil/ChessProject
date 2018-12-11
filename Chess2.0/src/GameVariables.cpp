#include "API/GameVariables.h"
namespace Chess
{
	const unsigned GameVariables::COL = 8;
	const unsigned GameVariables::ROW = 8;
	const unsigned GameVariables::MAX_TURNS = 10;

	bool GameVariables::IsCommonInvalidMoves(int x1, int y1, int x2, int y2)
	{
		if (x1 == x2 && y1 == y2)
			return false;
		if (Max(x1, x2) >= GameVariables::ROW)
			return false;
		if (Max(y1, y2) >= GameVariables::COL)
			return false;
		if (Min(x1, x2) < 0)
			return false;
		if (Min(y1, y2) < 0)
			return false;
		return true;
	}
}