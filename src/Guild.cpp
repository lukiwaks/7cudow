#include "Guild.hpp"

struct CardsAndWonder;



int Guild::coutGuildPoints (CardsAndWonder Player, CardsAndWonder Left, CardsAndWonder Right)
{
	switch (type)
	{
		case GuildType::gildia_robotnikow:
		{
			return (Left.BrownCardQuantity+Right.BrownCardQuantity);
		}
		case GuildType::gildia_rzemieslnikow:
		{
			return (2*Left.GreyCardQuantity+2*Right.GreyCardQuantity);
		}
		case GuildType::gildia_kupcow:
		{
			return (Left.GoldenCardQuantity+Right.GoldenCardQuantity);
		}
		case GuildType::gildia_filozofow:
		{
			return (Left.GreenCardQuantity+Right.GreenCardQuantity);
		}
		case GuildType::gildia_szpiegow:
		{
			return (Left.RedCardQuantity+Right.RedCardQuantity);
		}
		case GuildType::gildia_strategow:
		{
			return Left.LosePoints+Right.LosePoints;
		}
		case GuildType::gildia_naukowcow:
		{
			return 0;
		}
		case GuildType::gildia_sedziow:
		{
			return (Left.BlueCardQuantity+Right.BlueCardQuantity);
		}
		case GuildType::gildia_budowniczych:
		{
			return (Left.WonderLevel+Right.WonderLevel+Player.WonderLevel);
		}
		case GuildType::gildia_amatorow:
		{
			return (Player.BrownCardQuantity+Player.GreyCardQuantity+Player.GuildQuantity);
		}

		default:
		{
			return 0;
		}
	}
}

void Guild::GetType (GuildType t)
{
	type=t;
}

Guild::Guild ()
{

}

GuildType Guild::returnType ()
{
	return type;
}