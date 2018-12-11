/************************************************************/
//ABSTRACT CLASS FOR ALL CHESS PIECES 
/************************************************************/
#pragma once
#include <vector>
#include "API/Enums.h"

namespace Chess {
	class Piece
	{
	public:
		virtual char Symbol() = 0;
		virtual unsigned GetPoint() = 0;
		virtual ~Piece() = default;
		virtual bool isValidMove(int x1, int y1, int x2, int y2) = 0;

		void IncrementCaptureCount(unsigned increment);
		Color GetColor()const;
		int GetCaptures()const;

	protected:

		Piece();
		//virtual void UpdateNearByCells() = 0;

		Color color;
		int captures;
	};
}