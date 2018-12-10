
#include <iostream>
#include "include/ChessBoard.h"
#include "include/Cell.h"
#include "API/Piece.h"

using namespace std;
using namespace Chess;

int main()
{
	ChessBoard chess;

	for (int i = 0; i <= 8; i++)
	{
		if(i!=8)
			cout << (char)('A' + i) << "    ";
		else
			cout << ' ' << "    ";
		for (int j = 0; j < 8; j++)
		{
			if (i == 8)
			{
				cout << j + 1<<"    ";
				continue;
			}
			auto piece = chess[i][j]->GetPiece();
			if (piece != nullptr)
			{
				cout << piece->Symbol() << "    ";
			}
			else
				cout << "     ";
		}
		cout << endl <<endl;
	}
	return 0;
}