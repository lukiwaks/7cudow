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
 		int WarPoints;
 		int LosePoints;
 		int RedCardWarPoints;

 		
 		symbol green [20];
		GoldenCard gold[20];
		Guild guild[20];

 		wonder * Wonder;
 		Gracz * Left;
 		Gracz * Right;

 		int GreenPoints; //sum of symbool win points. Updating using GreenCardPointsUpdate()
 		int RedCardWinPoints;
 		int BlueCardPoints;
 		int BlackPoints; //sum of win points from wonder. Updating using BlackPointsUpdate()
 		int GoldPoints; //sum of win points from golden cards. Updating using GoldPointsUpdate()
 		int VioletPoints; //sum of win points from Guilds. Updating using VioletPointsUpdate()
 		int MoneyPoints; //not implemented
 		int WinPointsSum; //sum of all Win Points.  Updating using WinPointsSumUpdate()

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
		void GreenCardPointsUpdate();
		int returnRedCardWinPoints();
		int returnLosePoints();
		int returnGreenPoints();
		int getPointsResult(); // do zaimplementowani
		void addWonderLevel(); //do zaimplementowania
		int returnBlackPoints();
		int returnGoldPoints();
		int returnVioletPoints();

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
 		void WarPointsUpdate ();
 		int returnUniversalSymbolQuantity();
 		int returnWarPoints ();
 		GoldenCard returnGold (int i);
 		int finishEra (int era);
 		void BlackPointsUpdate();
 		void WinPointsSumUpdate();
 		Guild returnGuild(int i);
 		void GoldPointsUpdate();
 		void VioletPointsUpdate();
 		int returnWonderLevel();
 		int returnGuildQuantity();
 		Gracz ();
 		
};

