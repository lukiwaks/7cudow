#include "symbol.h"
#include "wonder.hpp"

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

 		wonder *Wonder;


 	public:
 		int returnBlueCardQuantity();
 		int returnBrownCardQuantity();
 		int returnGreyCardQuantity();
 		int returnRedCardQuantity();
 		int returnGreenCardQuantity();
 		symbol returnGreen(int GreenCardNumber);

		int returnBlueCardPoints();
		int returnRedCardWarPoints();
		int returnGreenCardPoints();

 		void addBlueCard(int pointsCount);
 		void addBrownCard();
 		void addGreyCard();
 		void addRedCard(int noOfWarSymbols);
 		void addGreenCard(symbol Symbol);
 		void getWonder(wonder * W);

 		//int getPointsResult();
 		Gracz ();
 		
};

