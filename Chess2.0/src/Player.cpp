#include "include/Player.h"
#include "include/Bishop.h"
#include "include/Queen.h"
#include "include/Rook.h"
#include "include/ChessBoard.h"
#include "include/Cell.h"

namespace Chess
{
	Player::Player(Color color, ChessBoard &board)
	{
		color_ = color;
		pieces_.push_back(new Rook(color));
		pieces_.push_back(new Queen(color));
		pieces_.push_back(new Bishop(color));
		
		unsigned row;
		if (color == White)
			row = 0;
		else if (color == Black)
			row = 7;
		if (color == Black) 
		{
			board[row][0]->SetPiece(pieces_[0]);
			board[row][2]->SetPiece(pieces_[1]);
			board[row][4]->SetPiece(pieces_[2]);
		}
		else if (color == White)
		{
			board[row][7]->SetPiece(pieces_[0]);
			board[row][5]->SetPiece(pieces_[1]);
			board[row][3]->SetPiece(pieces_[2]);
		}
	}

	Player::~Player()
	{
		color_ = None;
		for (auto piece : pieces_)
			if (nullptr != piece)
				delete piece;
		pieces_.clear();
	}
	Color Player::GetColor()
	{
		return color_;
	}
}