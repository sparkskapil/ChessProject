#include "API/Piece.h"
namespace Chess {
	
	Color Piece::GetColor() const
	{
		return color;
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
