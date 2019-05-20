#include "GoldenCardType.hpp"
#include "wonder.hpp"

class GoldenCard
{
	private:
		GoldenCardType type;
	public:
		int countWinPoints (int nuberOfBrownCards, int nuberOfGoldCards, int nuberOfGreyCards, wonder * W);
		GoldenCard ();
		GoldenCardType returnType();
		void GetType (GoldenCardType t);
};