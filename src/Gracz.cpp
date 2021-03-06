#include "Gracz.hpp"
#define NULL 0

/////////////////////////////////////////////////////////////////////////////////////////////////////

int Gracz::returnBlueCardQuantity()
{
	return BlueCardQuantity;
}

int Gracz::returnBrownCardQuantity()
{
	return BrownCardQuantity;
}

int Gracz::returnGreyCardQuantity()
{
	return GreyCardQuantity;
}

int Gracz::returnRedCardQuantity()
{
	return RedCardQuantity;
}
int Gracz::returnGreenCardQuantity()
{
	return GreenCardQuantity;
}


int Gracz::returnBlueCardPoints()
{
	return BlueCardPoints;
}

int Gracz::returnRedCardWarPoints()
{
	return RedCardWarPoints;
}
symbol Gracz::returnGreen(int numer)
{
	return green[numer];
}

int Gracz::returnGoldenCardQuantity()
{
	return GoldenCardQuantity;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////

void Gracz::addBlueCard(int pointsCount)
{
	BlueCardQuantity++;
 	BlueCardPoints=BlueCardPoints+pointsCount;
}
void Gracz::addBrownCard()
{
 	BrownCardQuantity++;
}
void Gracz::addGreyCard()
{
 	GreyCardQuantity++;
}
void Gracz::addRedCard(int noOfWarSymbols)
{
 	RedCardQuantity++;
 	RedCardWarPoints=RedCardWarPoints+noOfWarSymbols;
}
void Gracz::addGreenCard(symbol Symbol)
{
	green[GreenCardQuantity]=Symbol;
	GreenCardQuantity++;
}
void Gracz::GreenCardPointsUpdate()
{
	UniversalSymbolQuantityUpdate ();
	if ((GreenCardQuantity+UniversalSymbolQuantity)==0)
	{
		GreenPoints=0;
	}
	else
	{
		int sumTablica=0;
		int sumKolo=0;
		int sumCyrkiel=0;
		for (int i=0; i<GreenCardQuantity; i++)
		{
			if (green[i]==symbol::kolo)
			{
				sumKolo++;
			}
			else if (green[i]==symbol::tablica)
			{
				sumTablica++;
			}	
			else if (green[i]==symbol::cyrkiel)
			{
				sumCyrkiel++;
			}	
		}
		if (sumTablica>=sumKolo&&sumTablica>=sumCyrkiel)
		{
			sumTablica=sumTablica+UniversalSymbolQuantity;
		}
		else if (sumKolo>=sumTablica&&sumKolo>=sumCyrkiel)
		{
			sumKolo=sumKolo+UniversalSymbolQuantity;
		}
		else 
		{
			sumCyrkiel=sumCyrkiel+UniversalSymbolQuantity;
		}
		int wynik = sumTablica*sumTablica+sumKolo*sumKolo+sumCyrkiel*sumCyrkiel;
		GreenPoints=wynik;
	}
}

void Gracz::getWonder(wonder * W)
{
	Wonder=W;
}

void Gracz::setNeighbours (Gracz * L, Gracz * R)
{
	Left=L;
	Right=R;
}

void Gracz::addGoldenCard(GoldenCardType t)
{
	gold[GoldenCardQuantity].GetType(t);
	GoldenCardQuantity++;
}

void Gracz::addGuild(GuildType t)
{
	guild[GuildQuantity].GetType(t);
	GuildQuantity++;
}

GoldenCard Gracz::returnGold (int i)
{

	return gold[i];
}

int Gracz::finishEra (int era)
{
	if (Left==NULL||Right==NULL)
	{
		return 1;
	}
	WarPointsUpdate();
	Left->WarPointsUpdate();
	Right->WarPointsUpdate();
	
	int wynik=0;
	int parameter=1+(era-1)*2;
	if (WarPoints<Left->returnWarPoints())
	{
		wynik=wynik-1;
		LosePoints++;
	}
	if (WarPoints<Right->returnWarPoints())
	{
		wynik=wynik-1;
		LosePoints++;
	}
	if (WarPoints>Left->returnWarPoints())
	{
		wynik=wynik+parameter;
	}
	if (WarPoints>Right->returnWarPoints())
	{
		wynik=wynik+parameter;
	}
	RedCardWinPoints=wynik;
	return 0;
}

int Gracz::returnRedCardWinPoints()
{
	return RedCardWinPoints;
}

void Gracz::UniversalSymbolQuantityUpdate ()
{
	int sum=0;
	for (int i=0; i<GuildQuantity; i++)
	{
		if (int(GuildType::gildia_naukowcow)==int(guild[i].returnType()))
		{
			sum++;
		}
	}
	sum=sum+(Wonder->returnWonderUniversalSymbol());
	UniversalSymbolQuantity=sum;
}

int Gracz::returnUniversalSymbolQuantity()
{
	return UniversalSymbolQuantity;
}

void  Gracz::WarPointsUpdate ()
{
	WarPoints=RedCardWarPoints+Wonder->returnWonderWarPoints();

}

int Gracz::returnWarPoints ()
{
	return WarPoints;
}
int Gracz::returnLosePoints()
{
	return LosePoints;
}
void Gracz::BlackPointsUpdate()
{
	BlackPoints=Wonder->returnWonderWinPoints();
}
int Gracz::returnGreenPoints()
{
	return GreenPoints;
}

Guild Gracz::returnGuild(int i)
{
	return guild [i];
}

void Gracz::GoldPointsUpdate()
{
	int sum=0;
	for (int i=0; i<GoldenCardQuantity; i++)
	{
		sum=(gold[i].countWinPoints(BrownCardQuantity, GoldenCardQuantity, GreyCardQuantity, Wonder)) + sum;
	}
	GoldPoints=sum;
}

int Gracz::returnBlackPoints()
{
	return BlackPoints;
}

int Gracz::returnGoldPoints()
{
	return GoldPoints;
}

void Gracz::VioletPointsUpdate()
{
	int sum=0;
	CardsAndWonder Player = 
	{
		BlueCardQuantity,
 		BrownCardQuantity,
 		GreyCardQuantity,
 		RedCardQuantity,
 		GreenCardQuantity,
 		GoldenCardQuantity,
 		GuildQuantity,
 		Wonder->returnWonderLevel(),
 		LosePoints,
	};
	CardsAndWonder L = 
	{
		Left->returnBlueCardQuantity(),
 		Left->returnBrownCardQuantity(),
 		Left->returnGreyCardQuantity(),
 		Left->returnRedCardQuantity(),
 		Left->returnGreenCardQuantity(),
 		Left->returnGoldenCardQuantity(),
 		Left->returnGuildQuantity(),
 		Left->returnWonderLevel(),
 		Left->returnLosePoints(),
	};
	CardsAndWonder R = 
	{
		Right->returnBlueCardQuantity(),
 		Right->returnBrownCardQuantity(),
 		Right->returnGreyCardQuantity(),
 		Right->returnRedCardQuantity(),
 		Right->returnGreenCardQuantity(),
 		Right->returnGoldenCardQuantity(),
 		Right->returnGuildQuantity(),
 		Right->returnWonderLevel(),
 		Right->returnLosePoints(),
	};
	for(int i=0;i<GuildQuantity;i++)
	{
		sum=guild[i].coutGuildPoints (Player, L, R)+sum;
	}
	VioletPoints=sum;
}

int Gracz::returnVioletPoints()
{
	return VioletPoints;
}

int Gracz::returnWonderLevel()
{
	return Wonder->returnWonderLevel();
}
int Gracz::returnGuildQuantity ()
{
	return GuildQuantity;
}
void Gracz::addWonderLevel()
{
	Wonder->addWonderLevel();
}
int Gracz::getPointsResult()
{
	GreenCardPointsUpdate();
 	BlackPointsUpdate();
 	GoldPointsUpdate();
 	VioletPointsUpdate();
	WinPointsSum=GreenPoints+RedCardWinPoints+BlueCardPoints+BlackPoints+GoldPoints+VioletPoints+MoneyPoints;
	return WinPointsSum;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

Gracz::Gracz ()
{
	BlueCardQuantity=0;
 	BrownCardQuantity=0;
 	GreyCardQuantity=0;
 	RedCardQuantity=0;
 	GreenCardQuantity=0;
 	GoldenCardQuantity=0;
 	RedCardWarPoints=0;
 	int GuidQuantity=0;
 	Left=NULL;
 	Right=NULL;
 	UniversalSymbolQuantity=0;
 	WarPoints=0;
 	LosePoints=0;

 	GreenPoints=0;
 	RedCardWinPoints=0;
 	BlueCardPoints=0;
 	BlackPoints=0; 
 	GoldPoints=0; 
 	VioletPoints=0; 
 	MoneyPoints=0;
 	GuildQuantity=0;
}