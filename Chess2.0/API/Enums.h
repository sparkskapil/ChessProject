#pragma once
namespace Chess
{
	enum Color
	{
		None = 0,
		Black,
		White
	};
	enum MoveError
	{
		InvalidMove,
		CellOccupied,
		MoveSuccess,
		NoPieceToMove
	};
}