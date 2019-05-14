#include "symbol.h"
#include "GoldenCard.hpp"


class Gracz
{
 	private:
 		int BlueCardQuantity;
 		int BrownCardQuantity;
 		int GreyCardQuantity;
 		int RedCardQuantity;
 		int GreenCardQuantity;
 		int GoldenCardQuantity;

 		int BlueCardPoints;
 		int RedCardWarPoints;
 		symbol green [20];
		GoldenCard *gold[20];

 		wonder * Wonder;
 		Gracz * Left;
 		Gracz * Right;


 	public:
 		int returnBlueCardQuantity();
 		int returnBrownCardQuantity();
 		int returnGreyCardQuantity();
 		int returnRedCardQuantity();
 		int returnGreenCardQuantity();
 		int returnGoldenCardQuantity();
 		symbol returnGreen(int GreenCardNumber);

		int returnBlueCardPoints();
		int returnRedCardWarPoints();
		int returnGreenCardPoints();

 		void addBlueCard(int pointsCount);
 		void addBrownCard();
 		void addGreyCard();
 		void addRedCard(int noOfWarSymbols);
 		void addGreenCard(symbol Symbol);
 		void addGoldenCard(GoldenCardType t);
 		void getWonder(wonder * W);
 		void setNeighbours (Gracz * L, Gracz * R);
 		GoldenCard * returnGold (int i);
 		//int getPointsResult();
 		Gracz ();
 		
};

