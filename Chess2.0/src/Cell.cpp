#include "include/Cell.h"
#include "API/Piece.h"
namespace Chess {

	Cell::Cell(unsigned int x, unsigned int y)
		:m_X(x), m_Y(y), m_piece(nullptr)
	{
	}

	MoveError Cell::MovePieceTo(Cell& cell)
	{
		if (!(this->m_piece->isValidMove(m_X, m_Y, cell.m_X, cell.m_Y)))
			return InvalidMove;

		if (this->m_piece == nullptr)
			return NoPieceToMove;

		if (cell.m_piece == nullptr)
		{
			cell.m_piece = this->m_piece;
			this->m_piece = nullptr;
			return MoveSuccess;
		}
		else if (cell.m_piece->GetColor() == this->m_piece->GetColor())
		{
			return CellOccupied;
		}
		else
		{
			this->m_piece->IncrementCaptureCount(cell.m_piece->GetPoint());
			delete cell.m_piece;
			cell.m_piece = this->m_piece;
			this->m_piece = nullptr;
			return MoveSuccess;
		}
	}

	Piece * const Cell::GetPiece() const
	{
		return m_piece;
	}

	void Cell::SetPiece(Piece * piece)
	{
		m_piece = piece;
	}

	Cell::~Cell()
	{
		if (m_piece)
			m_piece = nullptr;
	}

}