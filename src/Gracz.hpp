#include "symbol.h"

class Gracz
{
 	private:
 		int BlueCardQuantity;
 		int BrownCardQuantity;
 		int GreyCardQuantity;
 		int RedCardQuantity;
 		int GreenCardQuantity;

 		int BlueCardPoints;
 		int RedCardWarPoints;
 		symbol green [20];


 	public:
 		int returnBlueCardQuantity();
 		int returnBrownCardQuantity();
 		int returnGreyCardQuantity();
 		int returnRedCardQuantity();
 		int returnGreenCardQuantity();
 		symbol returnGreen(int GreenCardNumber);

		int returnBlueCardPoints();
		int returnRedCardWarPoints();

 		void addBlueCard(int pointsCount);
 		void addBrownCard();
 		void addGreyCard();
 		void addRedCard(int noOfWarSymbols);
 		void addGreenCard(symbol Symbol);

 		Gracz ();

 		int getPointsResult()
 		
};

