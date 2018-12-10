#pragma once
#include <vector>
namespace Chess
{
	class Cell;
	class ChessBoard 
	{
	public:
		ChessBoard();
		~ChessBoard();

		const std::vector<Cell*> operator[](int row);
		
	private:
		std::vector<std::vector<Cell*>> grid;
	};
}