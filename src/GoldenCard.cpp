#include "GoldenCard.hpp"

int GoldenCard::countWinPoints (int nuberOfBrownCards, int nuberOfGoldCards, int nuberOfGreyCards, wonder * W)
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
		case GoldenCardType::arena:
		{
			return (W->returnWonderLevel());
		}
		default:
		{
			return 0;
		}
	}
}



GoldenCardType GoldenCard::returnType ()
{
	return type;
}

GoldenCard::GoldenCard ()
{
}

void GoldenCard::GetType (GoldenCardType t)
{
	type=t;
}