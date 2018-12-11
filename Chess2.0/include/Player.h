#pragma once
#include "API/Enums.h"
#include "API/Piece.h"

namespace Chess
{
	class ChessBoard;
	class Player
	{
	public:
		Player(Color color, ChessBoard& board);
		~Player();
		Color GetColor();
	private:
		std::vector<Piece*> pieces_;
		Color color_;
	};
}