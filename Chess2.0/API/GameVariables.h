#pragma once
namespace Chess
{
	template<typename T>
	static T Min(T num1, T num2)
	{
		return num1 < num2 ? num1 : num2;
	}
	template<typename T>
	static T Max(T num1, T num2)
	{
		return num1 > num2 ? num1 : num2;
	}

	class GameVariables
	{
	public:
		static const unsigned ROW;
		static const unsigned COL;
		static const unsigned MAX_TURNS;

		static bool IsCommonInvalidMoves(int x1, int y1, int x2, int y2);
	};
	
};