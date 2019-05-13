#include "GoldenCardType.hpp"

class GoldenCard
{
	private:
		GoldenCardType type;
	public:
		int countWinPoints (int nuberOfBrownCards, int nuberOfGoldCards, int nuberOfGreyCards);
		GoldenCard (GoldenCardType t);
};