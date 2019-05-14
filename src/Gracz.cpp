#include "Gracz.hpp"


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
int Gracz::returnGreenCardPoints()
{
	int UP=Wonder->returnWonderUniversalSymbol();
	if ((GreenCardQuantity+UP)==0)
	{
		return 0;
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
			sumTablica=sumTablica+UP;
		}
		else if (sumKolo>=sumTablica&&sumKolo>=sumCyrkiel)
		{
			sumKolo=sumKolo+UP;
		}
		else 
		{
			sumCyrkiel=sumCyrkiel+UP;
		}
		int wynik = sumTablica*sumTablica+sumKolo*sumKolo+sumCyrkiel*sumCyrkiel;
		return wynik;
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
	GoldenCard Card (t);
	gold[GoldenCardQuantity]=&Card;
	GoldenCardQuantity++;
}

GoldenCard * Gracz::returnGold (int i)
{

	return gold[i];
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
}