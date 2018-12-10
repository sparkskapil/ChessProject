#include "include/ChessBoard.h"
#include "include/Cell.h"

Chess::ChessBoard::ChessBoard()
{
	for (int i = 0; i < 8; i++)
	{
		grid.resize(8);
		for (int j = 0; j < 8; j++)
		{
			Cell *cell = new Cell(i,j);
			grid[i].push_back(cell);
		}
	}
}

Chess::ChessBoard::~ChessBoard()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			delete grid[i][j];
		}
	}
	grid.clear();
}

const std::vector<Chess::Cell*> Chess::ChessBoard::operator[](int row)
{
	return grid[row];
}
