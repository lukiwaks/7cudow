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

////////////////////////////////////////////////////////////////////////////////////////////////////

Gracz::Gracz ()
{
	BlueCardQuantity=0;
 	BrownCardQuantity=0;
 	GreyCardQuantity=0;
 	RedCardQuantity=0;
 	GreenCardQuantity=0;
}