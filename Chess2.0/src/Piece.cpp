#include "API/Piece.h"
namespace Chess {
	
	Color Piece::GetColor() const
	{
		return color;
	}
	
	void Piece::SetColor(Color color)
	{
		if (this->color == None)
			this->color = color;
	}

	int Piece::GetCaptures() const
	{
		return captures;
	}
	
	void Piece::IncrementCaptureCount(unsigned increment)
	{
		captures += increment;
	}

	Piece::Piece()
	{
		captures = 0;
		color = None;
	}
}
