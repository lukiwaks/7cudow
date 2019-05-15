#include "symbol.h"
#include "GoldenCard.hpp"
#include "Guild.hpp"



class Gracz
{
 	private:
 		int BlueCardQuantity;
 		int BrownCardQuantity;
 		int GreyCardQuantity;
 		int RedCardQuantity;
 		int GreenCardQuantity;
 		int GoldenCardQuantity;
 		int GuildQuantity;
 		int UniversalSymbolQuantity;

 		int BlueCardPoints;
 		int RedCardWarPoints;
 		int RedCardWinPoints;
 		symbol green [20];
		GoldenCard *gold[20];
		Guild *guild[20];

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
		int returnRedCardWinPoints();

 		void addBlueCard(int pointsCount);
 		void addBrownCard();
 		void addGreyCard();
 		void addRedCard(int noOfWarSymbols);
 		void addGreenCard(symbol Symbol);
 		void addGoldenCard(GoldenCardType t);
 		void addGuild(GuildType t);
 		void getWonder(wonder * W);
 		void setNeighbours (Gracz * L, Gracz * R);
 		void UniversalSymbolQuantityUpdate ();
 		int returnUniversalSymbolQuantity();
 		GoldenCard * returnGold (int i);
 		int war (int era);
 		Gracz ();
 		
};

