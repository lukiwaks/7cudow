#include "GoldenCard.hpp"

int GoldenCard::countWinPoints (int nuberOfBrownCards, int nuberOfGoldCards, int nuberOfGreyCards)
{
	switch (type)
	{
		case GoldenCardType::port:
		{
			return nuberOfBrownCards;
		}
		case GoldenCardType::latarnia_morska:
		{
			return nuberOfGoldCards;
		}
		case GoldenCardType::dom_handlowy:
		{
			return (2*nuberOfGreyCards);
		}
		default:
		{
			return 0;
		}
	}
}


GoldenCard::GoldenCard (GoldenCardType t)
{
	type=t;
}