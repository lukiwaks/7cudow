#include "doctest.h"
#include "Gracz.hpp"

#include <iostream>


#include <stdexcept>
/*
TEST_CASE("Is the test returning FALSE?")
{ 
	CHECK(0);
}
*/

TEST_CASE("testing addBlueCard(int pointsCount) used by class Gracz") 
{
  	SUBCASE("pointsCount == 0 => Player.BlueCardQuantity increase bv 1")
	{
		Gracz Player;
		int StartValueQuantity=Player.returnBlueCardQuantity();
		Player.addBlueCard(0);
        CHECK(Player.returnBlueCardQuantity() == (StartValueQuantity+1));
  	}
  	SUBCASE("pointsCount == 1 => Player.BlueCardQuantity increase bv 1 and Player.BlueCardPoints increase bv 1")
	{
        Gracz Player;
		int StartValueQuantity=Player.returnBlueCardQuantity();
		int StartValuePoints=Player.returnBlueCardPoints();
		Player.addBlueCard(1);
		bool first =(Player.returnBlueCardQuantity() == (StartValueQuantity+1));
		bool second = (Player.returnBlueCardPoints()==(StartValuePoints+1));
		bool test = (first&&second);	
        CHECK(test);
        CHECK(first);
        CHECK(second);
  	}
  	SUBCASE("pointsCount == 2 => Player.BlueCardQuantity increase bv 1 and Player.BlueCardPoints increase bv 2")
	{
        Gracz Player;
		int StartValueQuantity=Player.returnBlueCardQuantity();
		int StartValuePoints=Player.returnBlueCardPoints();
		Player.addBlueCard(2);
		bool first =(Player.returnBlueCardQuantity() == (StartValueQuantity+1));
		bool second = (Player.returnBlueCardPoints()==(StartValuePoints+2));
		bool test = (first&&second);	
        CHECK(test);
        CHECK(first);
        CHECK(second);
  	}  	  
  	SUBCASE("pointsCount == 159 => Player.BlueCardQuantity increase bv 1 and Player.BlueCardPoints increase bv 159")
	{
        Gracz Player;
		int StartValueQuantity=Player.returnBlueCardQuantity();
		int StartValuePoints=Player.returnBlueCardPoints();
		Player.addBlueCard(159);
		bool first =(Player.returnBlueCardQuantity() == (StartValueQuantity+1));
		bool second = (Player.returnBlueCardPoints()==(StartValuePoints+159));
		bool test = (first&&second);	
        CHECK(test);
        CHECK(first);
        CHECK(second);
  	}  	   	 
} 	 


TEST_CASE("Testing addBrownCard() used by class Gracz. It should increase Player.BlueCardQuantity bv 1") 
{
	Gracz Player;
	int Quantity=Player.returnBrownCardQuantity();
	Player.addBrownCard();
	CHECK (Quantity+1==Player.returnBrownCardQuantity());

}

TEST_CASE("Testing addGreyCard() used by class Gracz. It should increase Player.GreyCardQuantity bv 1") 
{
	Gracz Player;
	int Quantity=Player.returnGreyCardQuantity();
	Player.addGreyCard();
	CHECK (Quantity+1==Player.returnGreyCardQuantity());

}

TEST_CASE("testing addRedCard(int noOfWarSymbols) used by class Gracz") 
{
  	SUBCASE("noOfWarSymbols == 0 => Player.RedCardQuantity increase bv 1")
	{
		Gracz Player;
		int StartValueQuantity=Player.returnRedCardQuantity();
		Player.addRedCard(0);
        CHECK(Player.returnRedCardQuantity() == (StartValueQuantity+1));
  	}
  	SUBCASE("noOfWarSymbols == 1 => Player.RedCardQuantity increase bv 1 and Player.RedCardWarPoints increase bv 1")
	{
        Gracz Player;
		int StartValueQuantity=Player.returnRedCardQuantity();
		int StartValuePoints=Player.returnRedCardWarPoints();
		Player.addRedCard(1);
		bool first =(Player.returnRedCardQuantity() == (StartValueQuantity+1));
		bool second = (Player.returnRedCardWarPoints()==(StartValuePoints+1));
		bool test = (first&&second);	
        CHECK(test);
        CHECK(first);
        CHECK(second);
  	}
  	SUBCASE("noOfWarSymbols == 2 => Player.RedCardQuantity increase bv 1 and Player.RedCardWarPoints increase bv 2")
	{
        Gracz Player;
		int StartValueQuantity=Player.returnRedCardQuantity();
		int StartValuePoints=Player.returnRedCardWarPoints();
		Player.addRedCard(2);
		bool first =(Player.returnRedCardQuantity() == (StartValueQuantity+1));
		bool second = (Player.returnRedCardWarPoints()==(StartValuePoints+2));
		bool test = (first&&second);	
        CHECK(test);
        CHECK(first);
        CHECK(second);
  	}
  	SUBCASE("noOfWarSymbols == 159 => Player.RedCardQuantity increase bv 1 and Player.RedCardWarPoints increase bv 159")
	{
        Gracz Player;
		int StartValueQuantity=Player.returnRedCardQuantity();
		int StartValuePoints=Player.returnRedCardWarPoints();
		Player.addRedCard(159);
		bool first =(Player.returnRedCardQuantity() == (StartValueQuantity+1));
		bool second = (Player.returnRedCardWarPoints()==(StartValuePoints+159));
		bool test = (first&&second);	
        CHECK(test);
        CHECK(first);
        CHECK(second);
  	}   	 
}

TEST_CASE("testing addGreenCard(symbol Symbol) used by class Gracz") 
{
  	SUBCASE("addGreenCard(cyrkiel) and GreenCardQuantity == 0 => Player.RedCardQuantity increase bv 1 and green[0]=cyrkiel")
	{
		Gracz Player;
		symbol test = symbol::cyrkiel;
		int StartValueQuantity=Player.returnGreenCardQuantity();
		Player.addGreenCard(test);
        CHECK(Player.returnGreenCardQuantity() == (StartValueQuantity+1));
        CHECK(Player.returnGreen(0) == symbol::cyrkiel);
  	}
  	SUBCASE("addGreenCard(kolo) and GreenCardQuantity == 0 => Player.RedCardQuantity increase bv 1 and green[0]=kolo")
	{
		Gracz Player;
		symbol test = symbol::kolo;
		int StartValueQuantity=Player.returnGreenCardQuantity();
		Player.addGreenCard(test);
        CHECK(Player.returnGreenCardQuantity() == (StartValueQuantity+1));
        CHECK(Player.returnGreen(0) == symbol::kolo);
  	}
  	SUBCASE("addGreenCard(tablica) and GreenCardQuantity == 0 => Player.RedCardQuantity increase bv 0 and green[1]=tablica")
	{
		Gracz Player;
		symbol test = symbol::tablica;
		int StartValueQuantity=Player.returnGreenCardQuantity();
		Player.addGreenCard(test);
        CHECK(Player.returnGreenCardQuantity() == 1);
        CHECK(Player.returnGreen(0) == symbol::tablica);
  	}
  	SUBCASE("addGreenCard(tablica) and GreenCardQuantity == 1 => Player.RedCardQuantity increase bv 0 and green[1]=tablica")
	{
		Gracz Player;
		Player.addGreenCard(symbol::kolo);
		symbol test = symbol::tablica;
		int StartValueQuantity=Player.returnGreenCardQuantity();
		Player.addGreenCard(test);
        CHECK(Player.returnGreenCardQuantity() == 2);
        CHECK(Player.returnGreen(1) == symbol::tablica);
  	}
  	SUBCASE("addGreenCard(kolo) and GreenCardQuantity == 1 => Player.RedCardQuantity increase bv 0 and green[1]=kolo")
	{
		Gracz Player;
		Player.addGreenCard(symbol::kolo);
		symbol test = symbol::kolo;
		int StartValueQuantity=Player.returnGreenCardQuantity();
		Player.addGreenCard(test);
        CHECK(Player.returnGreenCardQuantity() == 2);
        CHECK(Player.returnGreen(1) == symbol::kolo);
  	}
  	SUBCASE("addGreenCard(kolo) and GreenCardQuantity == 5 => Player.RedCardQuantity increase bv 0 and green[1]=kolo")
	{
		Gracz Player;
		Player.addGreenCard(symbol::kolo);
		Player.addGreenCard(symbol::cyrkiel);
		Player.addGreenCard(symbol::tablica);
		Player.addGreenCard(symbol::cyrkiel);
		Player.addGreenCard(symbol::kolo);
		symbol test = symbol::kolo;
		int StartValueQuantity=Player.returnGreenCardQuantity();
		Player.addGreenCard(test);
        CHECK(Player.returnGreenCardQuantity() == 6);
        CHECK(Player.returnGreen(5) == symbol::kolo);
  	}
 }

TEST_CASE("testing int countWinPoints (int nuberOfBrownCards, int nuberOfGoldCards, int nuberOfGreyCards) used by class GoldenCard") 
{
	SUBCASE("if type of card is not port, latarnia_morska or dom_hnadlowy it should return 0")
	{
		SUBCASE("if type of card is tawerna it sohuld return 0")
		{
			GoldenCard Card;
			Card.GetType(GoldenCardType::tawerna);
			CHECK (0==Card.countWinPoints(2,2,26,NULL));
		}
		SUBCASE("if type of card is bazar it should return 0")
		{
			GoldenCard Card;
			Card.GetType(GoldenCardType::bazar);
			CHECK (0==Card.countWinPoints(3,4,6,NULL));
		}
	}
	SUBCASE("if type of card is port it should return nuberOfBrownCards")
	{
		SUBCASE("if nuberOfBrownCards is 0 return 0")
		{
			GoldenCard Card;
			Card.GetType(GoldenCardType::port);
			CHECK (0==Card.countWinPoints(0,24,26,NULL));
		}
		SUBCASE("if nuberOfBrownCards is 1 return 1")
		{
			GoldenCard Card;
			Card.GetType(GoldenCardType::port);
			CHECK (1==Card.countWinPoints(1,2,2,NULL));
		}
		SUBCASE("if nuberOfBrownCards is 55 return 55")
		{
			GoldenCard Card;
			Card.GetType(GoldenCardType::port);
			CHECK (55==Card.countWinPoints(55,4,6,NULL));
		}
		
	}
	SUBCASE("if type of card is latarnia_morska it should return nuberOfGoldenCards")
	{
		SUBCASE("if nuberOfGoldenCards is 0 return 0")
		{
			GoldenCard Card;
			Card.GetType(GoldenCardType::latarnia_morska);
			CHECK (0==Card.countWinPoints(12,0,3,NULL));
		}
		SUBCASE("if nuberOfGoldenCards is 1 return 1")
		{
			GoldenCard Card;
			Card.GetType(GoldenCardType::latarnia_morska);
			CHECK (1==Card.countWinPoints(13,1,12,NULL));
		}
		SUBCASE("if nuberOfGoldenCards is 5 return 5")
		{
			GoldenCard Card;
			Card.GetType(GoldenCardType::latarnia_morska);
			CHECK (5==Card.countWinPoints(4,5,26,NULL));
		}
	}
	SUBCASE("if type of card is dom_handlowy it should return 2*nuberOfGreyCards")
	{
		SUBCASE("if nuberOfGreyCards is 0 return 0")
		{
			GoldenCard Card;
			Card.GetType(GoldenCardType::dom_handlowy);
			CHECK (0==Card.countWinPoints(2,7,0,NULL));
		}
		SUBCASE("if nuberOfGreyCards is 1 return 2")
		{
			GoldenCard Card;
			Card.GetType(GoldenCardType::dom_handlowy);
			CHECK (2==Card.countWinPoints(12,7,1,NULL));
		}
		SUBCASE("if nuberOfGreyCards is 8 return 16")
		{
			GoldenCard Card;
			Card.GetType(GoldenCardType::dom_handlowy);
			CHECK (16==Card.countWinPoints(3,4,8,NULL));
		}
	}
	SUBCASE("if type of card is arena it should return woder::level")
	{
		{
			GoldenCard Card;
			Card.GetType(GoldenCardType::arena);
			wonder W (wonderType::wiszace_ogrody_semiramidy_A);
			CHECK (0==Card.countWinPoints(12,7,1,&W));
		}
	}
	SUBCASE("if type of card is arena it should return woder::level")
	{
		{
			GoldenCard Card;
			Card.GetType(GoldenCardType::arena);
			wonder W (wonderType::wiszace_ogrody_semiramidy_A);
			W.addWonderLevel();
			CHECK (1==Card.countWinPoints(12,7,1,&W));
		}
	}
	SUBCASE("if type of card is arena it should return woder::level")
	{
		{
			GoldenCard Card;
			Card.GetType(GoldenCardType::arena);
			wonder W (wonderType::wiszace_ogrody_semiramidy_A);
			W.addWonderLevel();
			W.addWonderLevel();
			W.addWonderLevel();
			CHECK (3==Card.countWinPoints(12,7,1,&W));
		}
	}

}

//////////////////////////////////////////////////////////////////////////////////////////////////////
// Testing class wonder
//////////////////////////////////////////////////////////////////////////////////////////////////////

TEST_CASE("testing wonder () used by class wonder")
{
	SUBCASE ("creating object of wonder should change type to kolos_rodyjski_A, level to 0, wonderWinPoints/wonderWarPoints/wonderUniwersalSymbol to 0")
		{
			wonder WW (wonderType::kolos_rodyjski_A);
			CHECK ((0==WW.returnWonderLevel()));
			CHECK ((0==WW.returnWonderWinPoints()));
			CHECK ((0==WW.returnWonderWarPoints()));
			CHECK ((0==WW.returnWonderUniversalSymbol()));
			CHECK ((wonderType::kolos_rodyjski_A==WW.returnWonderType()));
		}
	SUBCASE ("creating object of wonder should change type to wielka_piramida_w_gizie_B, level to 0, wonderWinPoints to 0")
		{
			wonder WW (wonderType::wielka_piramida_w_gizie_B);
			CHECK ((0==WW.returnWonderLevel()));
			CHECK ((0==WW.returnWonderWinPoints()));
			CHECK ((wonderType::wielka_piramida_w_gizie_B==WW.returnWonderType()));
		}
}

TEST_CASE("testing leveling() used by class wonder")
{
	SUBCASE ("if a level is 0 and lvlmax>0 and Win1=1. it should return 0 and change wonderWinPoints to 1")
	{
	wonder WW (wonderType::kolos_rodyjski_A);
	int test=WW.leveling (3, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	CHECK (0==test);
	CHECK (1==WW.returnWonderWinPoints());
	}
	SUBCASE ("if a level is 0 and lvlmax=0. it should return 1")
	{
	wonder WW (wonderType::kolos_rodyjski_A);
	int test=WW.leveling (0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	CHECK (1==test);
	}
	SUBCASE ("if a level is 0 and lvlmax>0 and Win1=5. it should return 0 and change wonderWinPoints to 5")
	{
	wonder WW (wonderType::kolos_rodyjski_A);
	int test=WW.leveling (3, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	CHECK (0==test);
	CHECK (5==WW.returnWonderWinPoints());
	}
	SUBCASE ("if a level is 0 and lvlmax>0 and War1=5. it should return 0 and change wonderWarPoints to 5")
	{
	wonder WW (wonderType::kolos_rodyjski_A);
	int test=WW.leveling (3, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0);
	CHECK (0==test);
	CHECK (5==WW.returnWonderWarPoints());
	}
	SUBCASE ("if a level is 0 and lvlmax>0 and US1=5. it should return 0 and change wonderuniversalSymbol to 5")
	{
	wonder WW (wonderType::kolos_rodyjski_A);
	int test=WW.leveling (3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0);
	CHECK (0==test);
	CHECK (5==WW.returnWonderUniversalSymbol());
	}
}


TEST_CASE("testing void addWonderLevel () used by class wonder")
{
	SUBCASE ("testing for kolos_rodyjski_A wonderType")
	{
		
		SUBCASE ("if a level is 0 it should change level to 1 and wonderWinPoints to 3. It should return 0.")
		{
			wonder WW (wonderType::kolos_rodyjski_A);
			int test=WW.addWonderLevel();
			CHECK (1==WW.returnWonderLevel());
			CHECK (3==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 1 it should change level to 2 and wonderWinPoints=3. It should return 0. It also should change woderWarPoints to 2")
		{
			wonder WW (wonderType::kolos_rodyjski_A);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			CHECK (2==WW.returnWonderLevel());
			CHECK (3==WW.returnWonderWinPoints());
			CHECK (2==WW.returnWonderWarPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 2 it should change level to 3 and wonderWinPoints=10. It should return 0.")
		{
			wonder WW (wonderType::kolos_rodyjski_A);
			int test=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			CHECK (3==WW.returnWonderLevel());
			CHECK (10==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is not 0/1/2 return 1, error information")
		{
			wonder WW (wonderType::kolos_rodyjski_A);
			int test=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test=WW.addWonderLevel();
			CHECK (1==test);
		}
	}
	SUBCASE ("testing for kolos_rodyjski_B wonderType")
	{
		SUBCASE ("if a level is 0 it should change level to 1, wonderWinPoints to 3, and wonderWarPoints to 1. It should return 0.")
		{
			wonder WW (wonderType::kolos_rodyjski_B);
			int test=WW.addWonderLevel();
			CHECK (1==WW.returnWonderLevel());
			CHECK (3==WW.returnWonderWinPoints());
			CHECK (1==WW.returnWonderWarPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 1 it should change level to 2 and wonderWinPoints=3. It should return 0. It also should change woderWarPoints to 2")
		{
			wonder WW (wonderType::kolos_rodyjski_B);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			CHECK (2==WW.returnWonderLevel());
			CHECK (7==WW.returnWonderWinPoints());
			CHECK (2==WW.returnWonderWarPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is not 0/1 return 1, error information")
		{
			wonder WW (wonderType::kolos_rodyjski_B);
			int test=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			CHECK (1==test);
			test=WW.addWonderLevel();
			CHECK (1==test);
		}
	}
	SUBCASE ("testing for latarnia_morska_w_aleksandrii_A wonderType")
	{
		SUBCASE ("if a level is 0 it should change level to 1, wonderWinPoints to 3. It should return 0.")
		{
			wonder WW (wonderType::latarnia_morska_w_aleksandrii_A);
			int test=WW.addWonderLevel();
			CHECK (1==WW.returnWonderLevel());
			CHECK (3==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 1 it should change level to 2 and wonderWinPoints=3. It should return 0.")
		{
			wonder WW (wonderType::latarnia_morska_w_aleksandrii_A);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			CHECK (2==WW.returnWonderLevel());
			CHECK (3==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 2 it should change level to 3 and wonderWinPoints=10. It should return 0.")
		{
			wonder WW (wonderType::latarnia_morska_w_aleksandrii_A);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			test=WW.addWonderLevel()+test;
			CHECK (3==WW.returnWonderLevel());
			CHECK (10==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is not 0/1/2 return 1, error information")
		{
			wonder WW (wonderType::latarnia_morska_w_aleksandrii_A);
			int test=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			CHECK (1==test);
			test=WW.addWonderLevel();
			CHECK (1==test);
		}
	}
	SUBCASE ("testing for latarnia_morska_w_aleksandrii_B wonderType")
	{
		SUBCASE ("if a level is 0 it should change level to 1. It should return 0.")
		{
			wonder WW (wonderType::latarnia_morska_w_aleksandrii_B);
			int test=WW.addWonderLevel();
			CHECK (1==WW.returnWonderLevel());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 1 it should change level to 2. It should return 0.")
		{
			wonder WW (wonderType::latarnia_morska_w_aleksandrii_B);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			CHECK (2==WW.returnWonderLevel());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 2 it should change level to 3 and wonderWinPoints=7. It should return 0.")
		{
			wonder WW (wonderType::latarnia_morska_w_aleksandrii_B);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			test=WW.addWonderLevel()+test;
			CHECK (3==WW.returnWonderLevel());
			CHECK (7==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is not 0/1/2 return 1, error information")
		{
			wonder WW (wonderType::latarnia_morska_w_aleksandrii_B);
			int test=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			CHECK (1==test);
			test=WW.addWonderLevel();
			CHECK (1==test);
		}
	}
	SUBCASE ("testing for swiatynia_artemidy_w_efezie_A wonderType")
	{
		SUBCASE ("if a level is 0 it should change level to 1 and wonderWinPoints=3. It should return 0.")
		{
			wonder WW (wonderType::swiatynia_artemidy_w_efezie_A);
			int test=WW.addWonderLevel();
			CHECK (1==WW.returnWonderLevel());
			CHECK (3==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 1 it should change level to 2. It should return 0.")
		{
			wonder WW (wonderType::swiatynia_artemidy_w_efezie_A);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			CHECK (2==WW.returnWonderLevel());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 2 it should change level to 3 and wonderWinPoints=10. It should return 0.")
		{
			wonder WW (wonderType::swiatynia_artemidy_w_efezie_A);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			test=WW.addWonderLevel()+test;
			CHECK (3==WW.returnWonderLevel());
			CHECK (10==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is not 0/1/2 return 1, error information")
		{
			wonder WW (wonderType::swiatynia_artemidy_w_efezie_A);
			int test=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			CHECK (1==test);
			test=WW.addWonderLevel();
			CHECK (1==test);
		}
	}
	SUBCASE ("testing for swiatynia_artemidy_w_efezie_B wonderType")
	{
		SUBCASE ("if a level is 0 it should change level to 1 and wonderWinPoints=2. It should return 0.")
		{
			wonder WW (wonderType::swiatynia_artemidy_w_efezie_B);
			int test=WW.addWonderLevel();
			CHECK (1==WW.returnWonderLevel());
			CHECK (2==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 1 it should change level to 2 and wonderWinPoints=5. It should return 0.")
		{
			wonder WW (wonderType::swiatynia_artemidy_w_efezie_B);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			CHECK (2==WW.returnWonderLevel());
			CHECK (5==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 2 it should change level to 3 and wonderWinPoints=10. It should return 0.")
		{
			wonder WW (wonderType::swiatynia_artemidy_w_efezie_B);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			test=WW.addWonderLevel()+test;
			CHECK (3==WW.returnWonderLevel());
			CHECK (10==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is not 0/1/2 return 1, error information")
		{
			wonder WW (wonderType::swiatynia_artemidy_w_efezie_B);
			int test=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			CHECK (1==test);
			test=WW.addWonderLevel();
			CHECK (1==test);
		}
	}
	SUBCASE ("testing for wiszace_ogrody_semiramidy_A wonderType")
	{
		SUBCASE ("if a level is 0 it should change level to 1 and wonderWinPoints=3. It should return 0.")
		{
			wonder WW (wonderType::wiszace_ogrody_semiramidy_A);
			int test=WW.addWonderLevel();
			CHECK (1==WW.returnWonderLevel());
			CHECK (3==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 1 it should change level to 2 and wonderuniversalSymbol=1. It should return 0.")
		{
			wonder WW (wonderType::wiszace_ogrody_semiramidy_A);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			CHECK (2==WW.returnWonderLevel());
			CHECK (1==WW.returnWonderUniversalSymbol());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 2 it should change level to 3 and wonderWinPoints=10. It should return 0.")
		{
			wonder WW (wonderType::wiszace_ogrody_semiramidy_A);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			test=WW.addWonderLevel()+test;
			CHECK (3==WW.returnWonderLevel());
			CHECK (10==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is not 0/1/2 return 1, error information")
		{
			wonder WW (wonderType::wiszace_ogrody_semiramidy_A);
			int test=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			CHECK (1==test);
			test=WW.addWonderLevel();
			CHECK (1==test);
		}
	}
	SUBCASE ("testing for wiszace_ogrody_semiramidy_B wonderType")
	{
		SUBCASE ("if a level is 0 it should change level to 1 and wonderWinPoints=3. It should return 0.")
		{
			wonder WW (wonderType::wiszace_ogrody_semiramidy_B);
			int test=WW.addWonderLevel();
			CHECK (1==WW.returnWonderLevel());
			CHECK (3==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 1 it should change level to 2. It should return 0.")
		{
			wonder WW (wonderType::wiszace_ogrody_semiramidy_B);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			CHECK (2==WW.returnWonderLevel());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 2 it should change level to 3 and wonderUniwersalSymbol=1. It should return 0.")
		{
			wonder WW (wonderType::wiszace_ogrody_semiramidy_B);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			test=WW.addWonderLevel()+test;
			CHECK (3==WW.returnWonderLevel());
			CHECK (1==WW.returnWonderUniversalSymbol());
			CHECK (0==test);
		}
		SUBCASE ("if a level is not 0/1/2 return 1, error information")
		{
			wonder WW (wonderType::wiszace_ogrody_semiramidy_B);
			int test=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			CHECK (1==test);
			test=WW.addWonderLevel();
			CHECK (1==test);
		}
	}
	SUBCASE ("testing for posag_zeusa_w_olimpii_A wonderType")
	{
		SUBCASE ("if a level is 0 it should change level to 1 and wonderWinPoints=3. It should return 0.")
		{
			wonder WW (wonderType::posag_zeusa_w_olimpii_A);
			int test=WW.addWonderLevel();
			CHECK (1==WW.returnWonderLevel());
			CHECK (3==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 1 it should change level to 2. It should return 0.")
		{
			wonder WW (wonderType::posag_zeusa_w_olimpii_A);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			CHECK (2==WW.returnWonderLevel());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 2 it should change level to 3 and wonderWinPoints=10. It should return 0.")
		{
			wonder WW (wonderType::posag_zeusa_w_olimpii_A);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			test=WW.addWonderLevel()+test;
			CHECK (3==WW.returnWonderLevel());
			CHECK (10==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is not 0/1/2 return 1, error information")
		{
			wonder WW (wonderType::posag_zeusa_w_olimpii_A);
			int test=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			CHECK (1==test);
			test=WW.addWonderLevel();
			CHECK (1==test);
		}
	}
	SUBCASE ("testing for posag_zeusa_w_olimpii_B wonderType")
	{
		SUBCASE ("if a level is 0 it should change level to 1. It should return 0.")
		{
			wonder WW (wonderType::posag_zeusa_w_olimpii_B);
			int test=WW.addWonderLevel();
			CHECK (1==WW.returnWonderLevel());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 1 it should change level to 2 and wonderWinPoints=5. It should return 0.")
		{
			wonder WW (wonderType::posag_zeusa_w_olimpii_B);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			CHECK (2==WW.returnWonderLevel());
			CHECK (5==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 2 it should change level to 3. It should return 0.")
		{
			wonder WW (wonderType::posag_zeusa_w_olimpii_B);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			test=WW.addWonderLevel()+test;
			CHECK (3==WW.returnWonderLevel());
			CHECK (0==test);
		}
		SUBCASE ("if a level is not 0/1/2 return 1, error information")
		{
			wonder WW (wonderType::posag_zeusa_w_olimpii_B);
			int test=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			CHECK (1==test);
			test=WW.addWonderLevel();
			CHECK (1==test);
		}
	}
	SUBCASE ("testing for mauzoleum_w_halikarnasie_A wonderType")
	{
		SUBCASE ("if a level is 0 it should change level to 1 and wonderWinPoints=3. It should return 0.")
		{
			wonder WW (wonderType::mauzoleum_w_halikarnasie_A);
			int test=WW.addWonderLevel();
			CHECK (1==WW.returnWonderLevel());
			CHECK (3==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 1 it should change level to 2. It should return 0.")
		{
			wonder WW (wonderType::mauzoleum_w_halikarnasie_A);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			CHECK (2==WW.returnWonderLevel());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 2 it should change level to 3 and wonderWinPoints=10. It should return 0.")
		{
			wonder WW (wonderType::mauzoleum_w_halikarnasie_A);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			test=WW.addWonderLevel()+test;
			CHECK (3==WW.returnWonderLevel());
			CHECK (10==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is not 0/1/2 return 1, error information")
		{
			wonder WW (wonderType::mauzoleum_w_halikarnasie_A);
			int test=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			CHECK (1==test);
			test=WW.addWonderLevel();
			CHECK (1==test);
		}
	}
	SUBCASE ("testing for mauzoleum_w_halikarnasie_B wonderType")
	{
		SUBCASE ("if a level is 0 it should change level to 1 and wonderWinPoints=2. It should return 0.")
		{
			wonder WW (wonderType::mauzoleum_w_halikarnasie_B);
			int test=WW.addWonderLevel();
			CHECK (1==WW.returnWonderLevel());
			CHECK (2==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 1 it should change level to 2 and wonderWinPoints=3. It should return 0.")
		{
			wonder WW (wonderType::mauzoleum_w_halikarnasie_B);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			CHECK (2==WW.returnWonderLevel());
			CHECK (3==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 2 it should change level to 3. It should return 0.")
		{
			wonder WW (wonderType::mauzoleum_w_halikarnasie_B);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			test=WW.addWonderLevel()+test;
			CHECK (3==WW.returnWonderLevel());
			CHECK (0==test);
		}
		SUBCASE ("if a level is not 0/1/2 return 1, error information")
		{
			wonder WW (wonderType::mauzoleum_w_halikarnasie_B);
			int test=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			CHECK (1==test);
			test=WW.addWonderLevel();
			CHECK (1==test);
		}
	}
	SUBCASE ("testing for wielka_piramida_w_gizie_A wonderType")
	{
		SUBCASE ("if a level is 0 it should change level to 1 and wonderWinPoints=3. It should return 0.")
		{
			wonder WW (wonderType::wielka_piramida_w_gizie_A);
			int test=WW.addWonderLevel();
			CHECK (1==WW.returnWonderLevel());
			CHECK (3==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 1 it should change level to 2 and wonderWinPoints=8. It should return 0.")
		{
			wonder WW (wonderType::wielka_piramida_w_gizie_A);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			CHECK (2==WW.returnWonderLevel());
			CHECK (8==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 2 it should change level to 3 and wonderWinPoints=15. It should return 0.")
		{
			wonder WW (wonderType::wielka_piramida_w_gizie_A);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			test=WW.addWonderLevel()+test;
			CHECK (3==WW.returnWonderLevel());
			CHECK (15==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is not 0/1/2 return 1, error information")
		{
			wonder WW (wonderType::wielka_piramida_w_gizie_A);
			int test=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			CHECK (1==test);
			test=WW.addWonderLevel();
			CHECK (1==test);
		}
	}
	SUBCASE ("testing for wielka_piramida_w_gizie_B wonderType")
	{
		SUBCASE ("if a level is 0 it should change level to 1 and wonderWinPoints=3. It should return 0.")
		{
			wonder WW (wonderType::wielka_piramida_w_gizie_B);
			int test=WW.addWonderLevel();
			CHECK (1==WW.returnWonderLevel());
			CHECK (3==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 1 it should change level to 2 and wonderWinPoints=8. It should return 0.")
		{
			wonder WW (wonderType::wielka_piramida_w_gizie_B);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			CHECK (2==WW.returnWonderLevel());
			CHECK (8==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 2 it should change level to 3 and wonderWinPoints=13. It should return 0.")
		{
			wonder WW (wonderType::wielka_piramida_w_gizie_B);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			test=WW.addWonderLevel()+test;
			CHECK (3==WW.returnWonderLevel());
			CHECK (13==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is 3 it should change level to 4 and wonderWinPoints=20. It should return 0.")
		{
			wonder WW (wonderType::wielka_piramida_w_gizie_B);
			int test=WW.addWonderLevel();
			test=WW.addWonderLevel()+test;
			test=WW.addWonderLevel()+test;
			test=WW.addWonderLevel()+test;
			CHECK (4==WW.returnWonderLevel());
			CHECK (20==WW.returnWonderWinPoints());
			CHECK (0==test);
		}
		SUBCASE ("if a level is not 0/1/2/3 return 1, error information")
		{
			wonder WW (wonderType::wielka_piramida_w_gizie_B);
			int test=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			test+=WW.addWonderLevel();
			CHECK (1==test);
			test=WW.addWonderLevel();
			CHECK (1==test);
		}
	}
}
TEST_CASE("testing int Gracz::GreenCardPointsUpdate()")
{
	SUBCASE ("if GreenCardQuantity==1 return 0 and there isn't wonder UniversalSymbol")
	{
		Gracz Player;
		wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
		Player.getWonder (&Wonder);
		Player.GreenCardPointsUpdate();
		CHECK (0==Player.returnGreenPoints());
	}
	SUBCASE ("if GreenCardQuantity==1 return 1 and there isn't wonder UniversalSymbol. Check for kolo symbol.")
	{
		Gracz Player;
		wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
		Player.getWonder (&Wonder);
		Player.addGreenCard(symbol::kolo);
		Player.GreenCardPointsUpdate();
		CHECK (1==Player.returnGreenPoints());
	}
	SUBCASE ("if GreenCardQuantity==1 return 1 and there isn't wonder UniversalSymbol. Check for tablica symbol.")
	{
		Gracz Player;
		wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
		Player.getWonder (&Wonder);
		Player.addGreenCard(symbol::tablica);
		Player.GreenCardPointsUpdate();
		CHECK (1==Player.returnGreenPoints());
	}
	SUBCASE ("if GreenCardQuantity==2 and there isn't wonder UniversalSymbol")
	{
		SUBCASE ("if symbol green [0]==symbol green [1] return 4")
		{
			Gracz Player;
			wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
			Player.getWonder (&Wonder);
			Player.addGreenCard(symbol::tablica);
			Player.addGreenCard(symbol::tablica);
			Player.GreenCardPointsUpdate();
			CHECK (4==Player.returnGreenPoints());
		}
		SUBCASE ("if symbol green [0]==symbol green [1] return 4")
		{
			Gracz Player;
			wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
			Player.getWonder (&Wonder);
			Player.addGreenCard(symbol::kolo);
			Player.addGreenCard(symbol::kolo);
			Player.GreenCardPointsUpdate();
			CHECK (4==Player.returnGreenPoints());
		}
		SUBCASE ("if symbol green [0]!=symbol green [1] return 2")
		{
			Gracz Player;
			wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
			Player.getWonder (&Wonder);
			Player.addGreenCard(symbol::kolo);
			Player.addGreenCard(symbol::cyrkiel);
			Player.GreenCardPointsUpdate();
			CHECK (2==Player.returnGreenPoints());
		}
		SUBCASE ("if symbol green [0]!=symbol green [1] return 2")
		{
			Gracz Player;
			wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
			Player.getWonder (&Wonder);
			Player.addGreenCard(symbol::tablica);
			Player.addGreenCard(symbol::cyrkiel);
			Player.GreenCardPointsUpdate();
			CHECK (2==Player.returnGreenPoints());
		}
	}
	SUBCASE ("if GreenCardQuantity==3 and there isn't wonder UniversalSymbol")
	{
		SUBCASE ("if symbol green [0]==symbol green [1]==symbol green [2] return 9")
		{
			Gracz Player;
			wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
			Player.getWonder (&Wonder);
			Player.addGreenCard(symbol::tablica);
			Player.addGreenCard(symbol::tablica);
			Player.addGreenCard(symbol::tablica);
			Player.GreenCardPointsUpdate();
			CHECK (9==Player.returnGreenPoints());
		}
		SUBCASE ("if symbol green [0]==symbol green [1]!= symbol green [2]return 5")
		{
			Gracz Player;
			wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
			Player.getWonder (&Wonder);
			Player.addGreenCard(symbol::kolo);
			Player.addGreenCard(symbol::kolo);
			Player.addGreenCard(symbol::cyrkiel);
			Player.GreenCardPointsUpdate();
			CHECK (5==Player.returnGreenPoints());
		}
		SUBCASE ("if symbol green [0]!=symbol green [1]!=symbol green [2] return 3")
		{
			Gracz Player;
			wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
			Player.getWonder (&Wonder);
			Player.addGreenCard(symbol::kolo);
			Player.addGreenCard(symbol::cyrkiel);
			Player.addGreenCard(symbol::tablica);
			Player.GreenCardPointsUpdate();
			CHECK (3==Player.returnGreenPoints());
		}

	}
	SUBCASE ("if GreenCardQuantity==6 and there isn't wonder UniversalSymbol, green[0]==kolo, green[1]==tablica, green[2]==kolo, green[3]==cyrkiel, green[4]==kolo, green[5]==cyrkiel return 14")
	{
		Gracz Player;
		wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
		Player.getWonder (&Wonder);
		Player.addGreenCard(symbol::kolo);
		Player.addGreenCard(symbol::tablica);
		Player.addGreenCard(symbol::kolo);
		Player.addGreenCard(symbol::cyrkiel);
		Player.addGreenCard(symbol::kolo);
		Player.addGreenCard(symbol::cyrkiel);
		Player.GreenCardPointsUpdate();
		CHECK (14==Player.returnGreenPoints());
	}
	SUBCASE ("When woderUniversalSymbol!=0")
	{
		SUBCASE ("if symbol green [0]==symbol green [1]!= symbol green [2], and woderUniversalSymbol==1 return 10")
		{
			Gracz Player;
			wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
			Player.getWonder (&Wonder);
			Wonder.addWonderLevel();
			Wonder.addWonderLevel();
			Player.addGreenCard(symbol::kolo);
			Player.addGreenCard(symbol::kolo);
			Player.addGreenCard(symbol::cyrkiel);
			Player.GreenCardPointsUpdate();
			CHECK (10==Player.returnGreenPoints());
		}
		SUBCASE ("if GreenCardQuantity==6 and there isn't wonder UniversalSymbol, green[0]==kolo, green[1]==tablica, green[2]==kolo, green[3]==cyrkiel, green[4]==kolo, green[5]==cyrkiel and woderUniversalSymbol==1 return 21")
		{
			Gracz Player;
			wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
			Player.getWonder (&Wonder);
			Wonder.addWonderLevel();
			Wonder.addWonderLevel();
			Player.addGreenCard(symbol::kolo);
			Player.addGreenCard(symbol::tablica);
			Player.addGreenCard(symbol::kolo);
			Player.addGreenCard(symbol::cyrkiel);
			Player.addGreenCard(symbol::kolo);
			Player.addGreenCard(symbol::cyrkiel);
			Player.GreenCardPointsUpdate();
			CHECK (21==Player.returnGreenPoints());
		}
	}
}


TEST_CASE("testing Gracz::addGoldenCard(GoldenCardType t)")
{
	SUBCASE ("addGoldenCard(GoldenCardType::arena) => gold[0]->type==GoldenCardType::arena, GoldenCardQuantity==1")
	{
		Gracz Player;
		Player.addGoldenCard(GoldenCardType::arena);
		CHECK (1==Player.returnGoldenCardQuantity());
		CHECK (int(GoldenCardType::arena)==int(Player.returnGold(0).returnType()));
	}
	SUBCASE ("addGoldenCard(GoldenCardType::latarnia_morska) and addGoldenCard(GoldenCardType::dom_handlowy) => gold[0]->type==GoldenCardType::latarnia_morska, gold[0]->type==GoldenCardType::dom_handlowy, GoldenCardQuantity==2")
	{
		Gracz Player;
		Player.addGoldenCard(GoldenCardType::dom_handlowy);
		Player.addGoldenCard(GoldenCardType::latarnia_morska);
		CHECK (2==Player.returnGoldenCardQuantity());
		CHECK (int(GoldenCardType::dom_handlowy)==int(Player.returnGold(0).returnType()));
		CHECK (int(GoldenCardType::latarnia_morska)==int(Player.returnGold(1).returnType()));
	}

}

TEST_CASE ("testing Gracz::finishEra() only with RedCardsWarPoints")
{
	SUBCASE ("if there are no neighbors return 1, error")
	{
		Gracz Player;
		CHECK (1==Player.finishEra(1));
	}
	SUBCASE ("if there are neighbors and era==1")
	{
		SUBCASE ("warPoinst==0 for all players , return 0, and do not change RedCardWinPoints")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(1));
			CHECK (0==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==0 for player and right player, and warPoinst==1 for left player , return 0, and change RedCardWinPoints-1")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			PlayerL.addRedCard(1);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(1));
			CHECK (-1==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==0 for player and left player, and warPoinst==1 for right player , return 0, and change RedCardWinPoints-1")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			PlayerR.addRedCard(1);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(1));
			CHECK (-1==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==0 for player and warPoinst==1 for right player left player, return 0, and change RedCardWinPoints-2")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			PlayerR.addRedCard(1);
			PlayerL.addRedCard(1);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(1));
			CHECK (-2==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==0 for player and warPoinst==4 for right player left player, return 0, and change RedCardWinPoints-2")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			PlayerR.addRedCard(4);
			PlayerL.addRedCard(4);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(1));
			CHECK (-2==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==2 for player and PlayerL and warPoinst==0 for right player, return 0, and change RedCardWinPoints 1")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			Player.addRedCard(2);
			PlayerL.addRedCard(2);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(1));
			CHECK (1==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==2 for player and warPoinst==0 for right player left player, return 0, and change RedCardWinPoints 2")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			Player.addRedCard(2);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(1));
			CHECK (2==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==2 for player and warPoinst==0 for right player and 4 for left player, return 0, and change RedCardWinPoints 0")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			Player.addRedCard(2);
			PlayerL.addRedCard(4);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(1));
			CHECK (0==Player.returnRedCardWinPoints());
		}
	}
	SUBCASE ("if there are neighbors and era==2")
	{
		SUBCASE ("warPoinst==0 for all players , return 0, and do not change RedCardWinPoints")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(2));
			CHECK (0==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==0 for player and right player, and warPoinst==1 for left player , return 0, and change RedCardWinPoints-1")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			PlayerL.addRedCard(1);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(2));
			CHECK (-1==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==0 for player and left player, and warPoinst==1 for right player , return 0, and change RedCardWinPoints-1")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			PlayerR.addRedCard(1);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(2));
			CHECK (-1==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==0 for player and warPoinst==1 for right player left player, return 0, and change RedCardWinPoints-2")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			PlayerR.addRedCard(1);
			PlayerL.addRedCard(1);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(2));
			CHECK (-2==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==0 for player and warPoinst==4 for right player left player, return 0, and change RedCardWinPoints-2")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			PlayerR.addRedCard(4);
			PlayerL.addRedCard(4);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(2));
			CHECK (-2==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==2 for player and PlayerL and warPoinst==0 for right player, return 0, and change RedCardWinPoints 3")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			Player.addRedCard(2);
			PlayerL.addRedCard(2);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(2));
			CHECK (3==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==2 for player and warPoinst==0 for right player left player, return 0, and change RedCardWinPoints 6")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			Player.addRedCard(2);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(2));
			CHECK (6==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==2 for player and warPoinst==0 for right player and 4 for left player, return 0, and change RedCardWinPoints 2")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			Player.addRedCard(2);
			PlayerL.addRedCard(4);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(2));
			CHECK (2==Player.returnRedCardWinPoints());
		}

	}
	SUBCASE ("if there are neighbors and era==3")
	{
		SUBCASE ("warPoinst==0 for all players , return 0, and do not change RedCardWinPoints")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(3));
			CHECK (0==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==0 for player and right player, and warPoinst==1 for left player , return 0, and change RedCardWinPoints-1")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			PlayerL.addRedCard(1);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(3));
			CHECK (-1==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==0 for player and left player, and warPoinst==1 for right player , return 0, and change RedCardWinPoints-1")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			PlayerR.addRedCard(1);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(3));
			CHECK (-1==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==0 for player and warPoinst==1 for right player left player, return 0, and change RedCardWinPoints-2")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			PlayerR.addRedCard(1);
			PlayerL.addRedCard(1);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(3));
			CHECK (-2==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==0 for player and warPoinst==4 for right player left player, return 0, and change RedCardWinPoints-2")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			PlayerR.addRedCard(4);
			PlayerL.addRedCard(4);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(3));
			CHECK (-2==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==2 for player and PlayerL and warPoinst==0 for right player, return 0, and change RedCardWinPoints 5")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			Player.addRedCard(2);
			PlayerL.addRedCard(2);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(3));
			CHECK (5==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==2 for player and warPoinst==0 for right player left player, return 0, and change RedCardWinPoints 10")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			Player.addRedCard(2);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(3));
			CHECK (10==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==2 for player and warPoinst==0 for right player and 4 for left player, return 0, and change RedCardWinPoints 4")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			Player.addRedCard(2);
			PlayerL.addRedCard(4);
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(3));
			CHECK (4==Player.returnRedCardWinPoints());
		}

	}
}


TEST_CASE ("testing of Guild::coutGuildPoints")
{
	SUBCASE ("testing for GuildType::gildia_robotnikow")
	{
		SUBCASE ("if Left.BrownCardQuantity==0 and Right.BrownCardQuantity==0 return 0")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.BrownCardQuantity=0;
			R.BrownCardQuantity=0;
			Guild G;
			G.GetType(GuildType::gildia_robotnikow);
			CHECK (0==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if Left.BrownCardQuantity==1 and Right.BrownCardQuantity==0 return 1")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.BrownCardQuantity=1;
			R.BrownCardQuantity=0;
			Guild G;
			G.GetType(GuildType::gildia_robotnikow);
			CHECK (1==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if Left.BrownCardQuantity==1 and Right.BrownCardQuantity==1 return 2")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.BrownCardQuantity=1;
			R.BrownCardQuantity=1;
			Guild G;
			G.GetType(GuildType::gildia_robotnikow);
			CHECK (2==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if Left.BrownCardQuantity==4 and Right.BrownCardQuantity==12 return 16")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.BrownCardQuantity=4;
			R.BrownCardQuantity=12;
			Guild G;
			G.GetType(GuildType::gildia_robotnikow);
			CHECK (16==G.coutGuildPoints(Plr, L, R) );
		}
	}
	SUBCASE ("testing for GuildType::gildia_rzemieslnikow")
	{
		SUBCASE ("if Left.GreyCardQuantity==0 and Right.GreyCardQuantity==0 return 0")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.GreyCardQuantity=0;
			R.GreyCardQuantity=0;
			Guild G;
			G.GetType(GuildType::gildia_rzemieslnikow);
			CHECK (0==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if Left.GreyCardQuantity==1 and Right.GreyCardQuantity==0 return 2")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.GreyCardQuantity=1;
			R.GreyCardQuantity=0;
			Guild G;
			G.GetType(GuildType::gildia_rzemieslnikow);
			CHECK (2==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if Left.GreyCardQuantity==1 and Right.GreyCardQuantity==1 return 4")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.GreyCardQuantity=1;
			R.GreyCardQuantity=1;
			Guild G;
			G.GetType(GuildType::gildia_rzemieslnikow);
			CHECK (4==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if Left.GreyCardQuantity==4 and Right.GreyCardQuantity==12 return 32")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.GreyCardQuantity=4;
			R.GreyCardQuantity=12;
			Guild G;
			G.GetType(GuildType::gildia_rzemieslnikow);
			CHECK (32==G.coutGuildPoints(Plr, L, R) );
		}
	}
	SUBCASE ("testing for GuildType::gildia_kupcow")
	{
		SUBCASE ("if Left.GoldenCardQuantity==0 and Right.GoldenCardQuantity==0 return 0")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.GoldenCardQuantity=0;
			R.GoldenCardQuantity=0;
			Guild G;
			G.GetType(GuildType::gildia_kupcow);
			CHECK (0==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if Left.GoldenCardQuantity==1 and Right.GoldenCardQuantity==0 return 1")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.GoldenCardQuantity=1;
			R.GoldenCardQuantity=0;
			Guild G;
			G.GetType(GuildType::gildia_kupcow);
			CHECK (1==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if Left.GoldenCardQuantity==1 and Right.GoldenCardQuantity==1 return 2")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.GoldenCardQuantity=1;
			R.GoldenCardQuantity=1;
			Guild G;
			G.GetType(GuildType::gildia_kupcow);
			CHECK (2==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if Left.GoldenCardQuantity==4 and Right.GoldenCardQuantity==12 return 16")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.GoldenCardQuantity=4;
			R.GoldenCardQuantity=12;
			Guild G;
			G.GetType(GuildType::gildia_kupcow);
			CHECK (16==G.coutGuildPoints(Plr, L, R) );
		}
	}
	SUBCASE ("testing for GuildType::gildia_filozofow")
	{
		SUBCASE ("if Left.GreenCardQuantity==0 and Right.GreenCardQuantity==0 return 0")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.GreenCardQuantity=0;
			R.GreenCardQuantity=0;
			Guild G;
			G.GetType(GuildType::gildia_filozofow);
			CHECK (0==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if Left.GreenCardQuantity==1 and Right.GreenCardQuantity==0 return 1")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.GreenCardQuantity=1;
			R.GreenCardQuantity=0;
			Guild G;
			G.GetType(GuildType::gildia_filozofow);
			CHECK (1==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if Left.GreenCardQuantity==1 and Right.GreenCardQuantity==1 return 2")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.GreenCardQuantity=1;
			R.GreenCardQuantity=1;
			Guild G;
			G.GetType(GuildType::gildia_filozofow);
			CHECK (2==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if Left.GreenCardQuantity==4 and Right.GreenCardQuantity==12 return 16")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.GreenCardQuantity=4;
			R.GreenCardQuantity=12;
			Guild G;
			G.GetType(GuildType::gildia_filozofow);
			CHECK (16==G.coutGuildPoints(Plr, L, R) );
		}
	}
	SUBCASE ("testing for GuildType::gildia_szpiegow")
	{
		SUBCASE ("if Left.RedCardQuantity==0 and Right.RedCardQuantity==0 return 0")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.RedCardQuantity=0;
			R.RedCardQuantity=0;
			Guild G;
			G.GetType(GuildType::gildia_szpiegow);
			CHECK (0==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if Left.RedCardQuantity==1 and Right.RedCardQuantity==0 return 1")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.RedCardQuantity=1;
			R.RedCardQuantity=0;
			Guild G;
			G.GetType(GuildType::gildia_szpiegow);
			CHECK (1==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if Left.RedCardQuantity==1 and Right.RedCardQuantity==1 return 2")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.RedCardQuantity=1;
			R.RedCardQuantity=1;
			Guild G;
			G.GetType(GuildType::gildia_szpiegow);
			CHECK (2==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if Left.RedCardQuantity==4 and Right.RedCardQuantity==12 return 16")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.RedCardQuantity=4;
			R.RedCardQuantity=12;
			Guild G;
			G.GetType(GuildType::gildia_szpiegow);
			CHECK (16==G.coutGuildPoints(Plr, L, R) );
		}
	}
	SUBCASE ("testing for GuildType::gildia_sedziow")
	{
		SUBCASE ("if Left.BlueCardQuantity==0 and Right.BlueCardQuantity==0 return 0")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.BlueCardQuantity=0;
			R.BlueCardQuantity=0;
			Guild G;
			G.GetType(GuildType::gildia_sedziow);
			CHECK (0==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if Left.BlueCardQuantity==1 and Right.BlueCardQuantity==0 return 1")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.BlueCardQuantity=1;
			R.BlueCardQuantity=0;
			Guild G;
			G.GetType(GuildType::gildia_sedziow);
			CHECK (1==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if Left.BlueCardQuantity==1 and Right.BlueCardQuantity==1 return 2")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.BlueCardQuantity=1;
			R.BlueCardQuantity=1;
			Guild G;
			G.GetType(GuildType::gildia_sedziow);
			CHECK (2==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if Left.BlueCardQuantity==4 and Right.BlueCardQuantity==12 return 16")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.BlueCardQuantity=4;
			R.BlueCardQuantity=12;
			Guild G;
			G.GetType(GuildType::gildia_sedziow);
			CHECK (16==G.coutGuildPoints(Plr, L, R) );
		}
	}
	SUBCASE ("testing for GuildType::gildia_amatorow")
	{
		SUBCASE ("if PLr.GreyCardQuantity==0 and Plr.BrownCardQuantity==0 and Plr.GuildQuantity==0 return 0")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			Plr.GuildQuantity=0;
			Plr.GreyCardQuantity=0;
			Plr.BrownCardQuantity=0;
			Guild G;
			G.GetType(GuildType::gildia_amatorow);
			CHECK (0==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if PLr.GreyCardQuantity==1 and Plr.BrownCardQuantity==0 and Plr.GuildQuantity==0 return 1")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			Plr.GuildQuantity=0;
			Plr.GreyCardQuantity=1;
			Plr.BrownCardQuantity=0;
			Guild G;
			G.GetType(GuildType::gildia_amatorow);
			CHECK (1==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if PLr.GreyCardQuantity==0 and Plr.BrownCardQuantity==1 and Plr.GuildQuantity==0 return 1")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			Plr.GuildQuantity=0;
			Plr.GreyCardQuantity=0;
			Plr.BrownCardQuantity=1;
			Guild G;
			G.GetType(GuildType::gildia_amatorow);
			CHECK (1==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if PLr.GreyCardQuantity==0 and Plr.BrownCardQuantity==0 and Plr.GuildQuantity==1 return 1")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			Plr.GuildQuantity=1;
			Plr.GreyCardQuantity=0;
			Plr.BrownCardQuantity=0;
			Guild G;
			G.GetType(GuildType::gildia_amatorow);
			CHECK (1==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if PLr.GreyCardQuantity==1 and Plr.BrownCardQuantity==1 and Plr.GuildQuantity==1 return 3")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			Plr.GuildQuantity=1;
			Plr.GreyCardQuantity=1;
			Plr.BrownCardQuantity=1;
			Guild G;
			G.GetType(GuildType::gildia_amatorow);
			CHECK (3==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if PLr.GreyCardQuantity==3 and Plr.BrownCardQuantity==4 and Plr.GuildQuantity==1 return 8")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			Plr.GuildQuantity=1;
			Plr.GreyCardQuantity=3;
			Plr.BrownCardQuantity=4;
			Guild G;
			G.GetType(GuildType::gildia_amatorow);
			CHECK (8==G.coutGuildPoints(Plr, L, R) );
		}
	}
	SUBCASE ("testing for GuildType::gildia_budowniczych")
	{
		SUBCASE ("if PLr.WonderLevel==0 and L.WonderLevel==0 and R.WonderLevel==0 return 0")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			Plr.WonderLevel=0;
			L.WonderLevel=0;
			R.WonderLevel=0;
			Guild G;
			G.GetType(GuildType::gildia_budowniczych);
			CHECK (0==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if PLr.WonderLevel==0 and L.WonderLevel==1 and R.WonderLevel==0 return 1")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			Plr.WonderLevel=0;
			L.WonderLevel=1;
			R.WonderLevel=0;
			Guild G;
			G.GetType(GuildType::gildia_budowniczych);
			CHECK (1==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if PLr.WonderLevel==0 and L.WonderLevel==0 and R.WonderLevel==1 return 1")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			Plr.WonderLevel=0;
			L.WonderLevel=0;
			R.WonderLevel=1;
			Guild G;
			G.GetType(GuildType::gildia_budowniczych);
			CHECK (1==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if PLr.WonderLevel==1 and L.WonderLevel==0 and R.WonderLevel==0 return 1")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			Plr.WonderLevel=1;
			L.WonderLevel=0;
			R.WonderLevel=0;
			Guild G;
			G.GetType(GuildType::gildia_budowniczych);
			CHECK (1==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if PLr.WonderLevel==1 and L.WonderLevel==1 and R.WonderLevel==1 return 3")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			Plr.WonderLevel=1;
			L.WonderLevel=1;
			R.WonderLevel=1;
			Guild G;
			G.GetType(GuildType::gildia_budowniczych);
			CHECK (3==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if PLr.WonderLevel==1 and L.WonderLevel==2 and R.WonderLevel==3 return 6")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			Plr.WonderLevel=1;
			L.WonderLevel=2;
			R.WonderLevel=3;
			Guild G;
			G.GetType(GuildType::gildia_budowniczych);
			CHECK (6==G.coutGuildPoints(Plr, L, R) );
		}
	}
	SUBCASE ("testing for GuildType::gildia_strategow")
	{
		SUBCASE ("if L.LosePoints==0 and R.LosePoints==0 return 0")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.LosePoints=0;
			R.LosePoints=0;
			Guild G;
			G.GetType(GuildType::gildia_strategow);
			CHECK (0==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if L.LosePoints==1 and R.LosePoints==0 return 1")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.LosePoints=1;
			R.LosePoints=0;
			Guild G;
			G.GetType(GuildType::gildia_strategow);
			CHECK (1==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if L.LosePoints==0 and R.LosePoints==1 return 1")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.LosePoints=0;
			R.LosePoints=1;
			Guild G;
			G.GetType(GuildType::gildia_strategow);
			CHECK (1==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if L.LosePoints==1 and R.LosePoints==1 return 2")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.LosePoints=1;
			R.LosePoints=1;
			Guild G;
			G.GetType(GuildType::gildia_strategow);
			CHECK (2==G.coutGuildPoints(Plr, L, R) );
		}
		SUBCASE ("if L.LosePoints==2 and R.LosePoints==3 return 5")
		{
			CardsAndWonder Plr;
			CardsAndWonder L;
			CardsAndWonder R;
			L.LosePoints=2;
			R.LosePoints=3;
			Guild G;
			G.GetType(GuildType::gildia_strategow);
			CHECK (5==G.coutGuildPoints(Plr, L, R) );
		}
	}
}

TEST_CASE ("testing Gracz::UniversalSymbolQuantityUpdate")
{
	SUBCASE ("when Woder.WonderUniversalSymbol==0, and there is no gildia_naukowcow then PlayerUniversalSymbolQuantity=0")
	{
		Gracz Player;
		wonder W (wonderType::wiszace_ogrody_semiramidy_A);
		Player.getWonder (&W);
		Player.UniversalSymbolQuantityUpdate();
		CHECK(0==Player.returnUniversalSymbolQuantity());
	}
	SUBCASE ("when Woder.WonderUniversalSymbol==1, and there is no gildia_naukowcow then PlayerUniversalSymbolQuantity=1")
	{
		Gracz Player;
		wonder W (wonderType::wiszace_ogrody_semiramidy_A);
		Player.getWonder (&W);
		W.addWonderLevel();
		W.addWonderLevel();
		Player.UniversalSymbolQuantityUpdate();
		CHECK(1==Player.returnUniversalSymbolQuantity());
	}
	SUBCASE ("when Woder.WonderUniversalSymbol==0, and there is one gildia_naukowcow then PlayerUniversalSymbolQuantity=1")
	{
		Gracz Player;
		wonder W (wonderType::wiszace_ogrody_semiramidy_A);
		Player.getWonder (&W);
		Player.addGuild(GuildType::gildia_naukowcow);
		Player.UniversalSymbolQuantityUpdate();
		CHECK(1==Player.returnUniversalSymbolQuantity());
	}
	SUBCASE ("when Woder.WonderUniversalSymbol==1, and there is one gildia_naukowcow then PlayerUniversalSymbolQuantity=2")
	{
		Gracz Player;
		wonder W (wonderType::wiszace_ogrody_semiramidy_A);
		Player.getWonder (&W);
		W.addWonderLevel();
		W.addWonderLevel();
		Player.addGuild(GuildType::gildia_budowniczych);
		Player.addGuild(GuildType::gildia_filozofow);
		Player.addGuild(GuildType::gildia_naukowcow);
		Player.UniversalSymbolQuantityUpdate();
		CHECK(2==Player.returnUniversalSymbolQuantity());
	}
}


TEST_CASE ("testing Gracz::finishEra() with War Points from Wonder")
{
	SUBCASE ("if there are neighbors and era==1")
	{
		SUBCASE ("warPoinst==0 for player and right player, and warPoinst==1 (from wonder) for left player , return 0, and change RedCardWinPoints-1")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			W2.addWonderLevel();
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(1));
			CHECK (-1==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==0 for player and warPoinst==1 for right player left player (from wonder), return 0, and change RedCardWinPoints-2")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			W3.addWonderLevel();
			W2.addWonderLevel();
			Player.setNeighbours (&PlayerL, &PlayerR);

			CHECK (0==Player.finishEra(1));
			CHECK (-2==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==0 for player and warPoinst==2 for right player left player (from wonder), return 0, and change RedCardWinPoints-2")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			W3.addWonderLevel();
			W2.addWonderLevel();
			W3.addWonderLevel();
			W2.addWonderLevel();
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(1));
			CHECK (-2==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==2 for player and PlayerL (from wonder) and warPoinst==0 for right player, return 0, and change RedCardWinPoints 1")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			W1.addWonderLevel();
			W2.addWonderLevel();
			W1.addWonderLevel();
			W2.addWonderLevel();
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(1));
			CHECK (1==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==2 for player (from wonder) and warPoinst==0 for right player left player, return 0, and change RedCardWinPoints 2")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			W1.addWonderLevel();
			W1.addWonderLevel();
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(1));
			CHECK (2==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==1 for player and warPoinst==0 for right player and 2 for left player, return 0, and change RedCardWinPoints 0")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			W1.addWonderLevel();
			W3.addWonderLevel();
			W3.addWonderLevel();
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(1));
			CHECK (0==Player.returnRedCardWinPoints());
		}
	}
	SUBCASE ("if there are neighbors and era==2")
	{
		SUBCASE ("warPoinst==0 for player and right player, and warPoinst==1 (from wonder) for left player , return 0, and change RedCardWinPoints-1")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			W2.addWonderLevel();
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(2));
			CHECK (-1==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==0 for player and warPoinst==1 for right player left player (from wonder), return 0, and change RedCardWinPoints-2")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			W3.addWonderLevel();
			W2.addWonderLevel();
			Player.setNeighbours (&PlayerL, &PlayerR);

			CHECK (0==Player.finishEra(2));
			CHECK (-2==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==0 for player and warPoinst==2 for right player left player (from wonder), return 0, and change RedCardWinPoints-2")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			W3.addWonderLevel();
			W2.addWonderLevel();
			W3.addWonderLevel();
			W2.addWonderLevel();
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(2));
			CHECK (-2==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==2 for player and PlayerL (from wonder) and warPoinst==0 for right player, return 0, and change RedCardWinPoints 3")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			W1.addWonderLevel();
			W2.addWonderLevel();
			W1.addWonderLevel();
			W2.addWonderLevel();
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(2));
			CHECK (3==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==2 for player (from wonder) and warPoinst==0 for right player left player, return 0, and change RedCardWinPoints 6")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			W1.addWonderLevel();
			W1.addWonderLevel();
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(2));
			CHECK (6==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==1 for player and warPoinst==0 for right player and 2 for left player, return 0, and change RedCardWinPoints 2")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			W1.addWonderLevel();
			W3.addWonderLevel();
			W3.addWonderLevel();
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(2));
			CHECK (2==Player.returnRedCardWinPoints());
		}
	}
	SUBCASE ("if there are neighbors and era==3")
		{
		SUBCASE ("warPoinst==0 for player and right player, and warPoinst==1 (from wonder) for left player , return 0, and change RedCardWinPoints-1")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			W2.addWonderLevel();
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(3));
			CHECK (-1==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==0 for player and warPoinst==1 for right player left player (from wonder), return 0, and change RedCardWinPoints-2")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			W3.addWonderLevel();
			W2.addWonderLevel();
			Player.setNeighbours (&PlayerL, &PlayerR);

			CHECK (0==Player.finishEra(3));
			CHECK (-2==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==0 for player and warPoinst==2 for right player left player (from wonder), return 0, and change RedCardWinPoints-2")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			W3.addWonderLevel();
			W2.addWonderLevel();
			W3.addWonderLevel();
			W2.addWonderLevel();
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(3));
			CHECK (-2==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==2 for player and PlayerL (from wonder) and warPoinst==0 for right player, return 0, and change RedCardWinPoints 5")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			W1.addWonderLevel();
			W2.addWonderLevel();
			W1.addWonderLevel();
			W2.addWonderLevel();
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(3));
			CHECK (5==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==2 for player (from wonder) and warPoinst==0 for right player left player, return 0, and change RedCardWinPoints 10")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			W1.addWonderLevel();
			W1.addWonderLevel();
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(3));
			CHECK (10==Player.returnRedCardWinPoints());
		}
		SUBCASE ("warPoinst==1 for player and warPoinst==0 for right player and 2 for left player, return 0, and change RedCardWinPoints 4")
		{
			Gracz Player;
			Gracz PlayerL;
			Gracz PlayerR;
			wonder W1 (wonderType::kolos_rodyjski_B);
			wonder W2 (wonderType::kolos_rodyjski_B);
			wonder W3 (wonderType::kolos_rodyjski_B);
			Player.getWonder(&W1);
			PlayerL.getWonder(&W2);
			PlayerR.getWonder(&W3);
			W1.addWonderLevel();
			W3.addWonderLevel();
			W3.addWonderLevel();
			Player.setNeighbours (&PlayerL, &PlayerR);
			CHECK (0==Player.finishEra(3));
			CHECK (4==Player.returnRedCardWinPoints());
		}
	}
}

TEST_CASE ("testing Gracz::finishEra() for changing Gracz::losePoints")
{
	SUBCASE ("warPoinst==0 for player and right player, and warPoinst==1 (from wonder) for left player , LosePoints=1")
	{
		Gracz Player;
		Gracz PlayerL;
		Gracz PlayerR;
		wonder W1 (wonderType::kolos_rodyjski_B);
		wonder W2 (wonderType::kolos_rodyjski_B);
		wonder W3 (wonderType::kolos_rodyjski_B);
		Player.getWonder(&W1);
		PlayerL.getWonder(&W2);
		PlayerR.getWonder(&W3);
		W2.addWonderLevel();
		Player.setNeighbours (&PlayerL, &PlayerR);
		Player.finishEra(1);
		CHECK (1==Player.returnLosePoints());
	}
	SUBCASE ("warPoinst==0 for player and warPoinst==1 for right player left player (from wonder), LosePoints=2")
	{
		Gracz Player;
		Gracz PlayerL;
		Gracz PlayerR;
		wonder W1 (wonderType::kolos_rodyjski_B);
		wonder W2 (wonderType::kolos_rodyjski_B);
		wonder W3 (wonderType::kolos_rodyjski_B);
		Player.getWonder(&W1);
		PlayerL.getWonder(&W2);
		PlayerR.getWonder(&W3);
		W3.addWonderLevel();
		W2.addWonderLevel();
		Player.setNeighbours (&PlayerL, &PlayerR);
		Player.finishEra(1);
		CHECK (2==Player.returnLosePoints());
	}
	SUBCASE ("warPoinst==0 for player and warPoinst==2 for right player left player (from wonder), LosePoints=2")
	{
		Gracz Player;
		Gracz PlayerL;
		Gracz PlayerR;
		wonder W1 (wonderType::kolos_rodyjski_B);
		wonder W2 (wonderType::kolos_rodyjski_B);
		wonder W3 (wonderType::kolos_rodyjski_B);
		Player.getWonder(&W1);
		PlayerL.getWonder(&W2);
		PlayerR.getWonder(&W3);
		W3.addWonderLevel();
		W2.addWonderLevel();
		W3.addWonderLevel();
		W2.addWonderLevel();
		Player.setNeighbours (&PlayerL, &PlayerR);
		Player.finishEra(1);
		CHECK (2==Player.returnLosePoints());
	}
	SUBCASE ("warPoinst==2 for player and PlayerL (from wonder) and warPoinst==0 for right player, LosePoints=0")
	{
		Gracz Player;
		Gracz PlayerL;
		Gracz PlayerR;
		wonder W1 (wonderType::kolos_rodyjski_B);
		wonder W2 (wonderType::kolos_rodyjski_B);
		wonder W3 (wonderType::kolos_rodyjski_B);
		Player.getWonder(&W1);
		PlayerL.getWonder(&W2);
		PlayerR.getWonder(&W3);
		W1.addWonderLevel();
		W2.addWonderLevel();
		W1.addWonderLevel();
		W2.addWonderLevel();
		Player.setNeighbours (&PlayerL, &PlayerR);
		Player.finishEra(1);
		CHECK (0==Player.returnLosePoints());
	}
	SUBCASE ("warPoinst==2 for player (from wonder) and warPoinst==0 for right player left player, LosePoints=2")
	{
		Gracz Player;
		Gracz PlayerL;
		Gracz PlayerR;
		wonder W1 (wonderType::kolos_rodyjski_B);
		wonder W2 (wonderType::kolos_rodyjski_B);
		wonder W3 (wonderType::kolos_rodyjski_B);
		Player.getWonder(&W1);
		PlayerL.getWonder(&W2);
		PlayerR.getWonder(&W3);
		W1.addWonderLevel();
		W1.addWonderLevel();
		Player.setNeighbours (&PlayerL, &PlayerR);
		Player.finishEra(1);
		CHECK (0==Player.returnLosePoints());
	}
	SUBCASE ("warPoinst==1 for player and warPoinst==0 for right player and 2 for left player, LosePoints=0")
	{
		Gracz Player;
		Gracz PlayerL;
		Gracz PlayerR;
		wonder W1 (wonderType::kolos_rodyjski_B);
		wonder W2 (wonderType::kolos_rodyjski_B);
		wonder W3 (wonderType::kolos_rodyjski_B);
		Player.getWonder(&W1);
		PlayerL.getWonder(&W2);
		PlayerR.getWonder(&W3);
		W1.addWonderLevel();
		W3.addWonderLevel();
		W3.addWonderLevel();
		Player.setNeighbours (&PlayerL, &PlayerR);
		Player.finishEra(1);
		CHECK (1==Player.returnLosePoints());
	}
}	

TEST_CASE ("testing Gracz::BlackPointsUpdate()")
{
	SUBCASE ("if there is 0 WinPoints from Wonder, BlackPoints=0")
	{
		Gracz Player;
		wonder W (wonderType::wielka_piramida_w_gizie_B);
		Player.getWonder(&W);
		Player.BlackPointsUpdate();
		CHECK (0==Player.returnBlackPoints());
	}
	SUBCASE ("if there is 3 WinPoints from Wonder, BlackPoints=3")
	{
		Gracz Player;
		wonder W (wonderType::wielka_piramida_w_gizie_B);
		Player.getWonder(&W);
		W.addWonderLevel();
		Player.BlackPointsUpdate();
		CHECK (3==Player.returnBlackPoints());
	}
	SUBCASE ("if there is 20 WinPoints from Wonder, BlackPoints=20")
	{
		Gracz Player;
		wonder W (wonderType::wielka_piramida_w_gizie_B);
		Player.getWonder(&W);
		W.addWonderLevel();
		W.addWonderLevel();
		W.addWonderLevel();
		W.addWonderLevel();
		Player.BlackPointsUpdate();
		CHECK (20==Player.returnBlackPoints());
	}
}

TEST_CASE ("testing Gracz::GoldPointsUpdate()")
{
	SUBCASE ("if there is no goldenCards, GoldPoints=0")
	{
		Gracz Player;
		Player.GoldPointsUpdate();
		CHECK(0==Player.returnGoldPoints());
	}
	SUBCASE ("if there is one goldenCard type Port and 0==Browncards, GoldPoints=0")
	{
		Gracz Player;
		Player.addGoldenCard(GoldenCardType::port);
		Player.GoldPointsUpdate();
		CHECK(0==Player.returnGoldPoints());
	}
	SUBCASE ("if there is one goldenCard type Port and 6==Browncards, GoldPoints==6")
	{
		Gracz Player;
		Player.addGoldenCard(GoldenCardType::port);
		Player.addBrownCard();
		Player.addBrownCard();
		Player.addBrownCard();
		Player.addBrownCard();
		Player.addBrownCard();
		Player.addBrownCard();
		Player.GoldPointsUpdate();
		CHECK(6==Player.returnGoldPoints());
	}
	SUBCASE ("if there is one goldenCard type dom_handlowy and 3==GreyCards, GoldPoints==6")
	{
		Gracz Player;
		Player.addGoldenCard(GoldenCardType::dom_handlowy);
		Player.addGreyCard();
		Player.addGreyCard();
		Player.addGreyCard();
		Player.GoldPointsUpdate();
		CHECK(6==Player.returnGoldPoints());
	}
	SUBCASE ("if there is goldenCard type dom_handlowy, goldenCard type Port and 2==GreyCards, 4==Browncards then GoldPoints==8")
	{
		Gracz Player;
		Player.addGreyCard();
		Player.addGoldenCard(GoldenCardType::dom_handlowy);
		Player.addGreyCard();
		Player.addBrownCard();
		Player.addBrownCard();
		Player.addGoldenCard(GoldenCardType::port);
		Player.addBrownCard();
		Player.addBrownCard();
		Player.GoldPointsUpdate();
		CHECK(8==Player.returnGoldPoints());
	}
}

TEST_CASE ("testing Gracz::violetPointsUpdate()")
{
	SUBCASE ("if there is no guilds VioletPoints=0")
	{
		Gracz Player;
		Gracz L;
		Gracz R;
		wonder W(wonderType::wielka_piramida_w_gizie_B);
		wonder WL(wonderType::wiszace_ogrody_semiramidy_B);
		wonder WR(wonderType::swiatynia_artemidy_w_efezie_B);
		Player.getWonder(&W);
		L.getWonder(&WL);
		R.getWonder(&WR);
		Player.setNeighbours(&L, &R);
		Player.VioletPointsUpdate();
		CHECK (0==Player.returnVioletPoints());
	}
	SUBCASE ("if there is one guild type gildia_robotnikow and Left player has 2 brown cards, and right has 1 brown card VioletPoints=3")
	{
		Gracz Player;
		Gracz L;
		Gracz R;
		wonder W(wonderType::wielka_piramida_w_gizie_B);
		wonder WL(wonderType::wiszace_ogrody_semiramidy_B);
		wonder WR(wonderType::swiatynia_artemidy_w_efezie_B);
		Player.getWonder(&W);
		L.getWonder(&WL);
		R.getWonder(&WR);
		Player.setNeighbours(&L, &R);
		Player.addGuild(GuildType::gildia_robotnikow);
		L.addBrownCard();
		L.addBrownCard();
		R.addBrownCard();
		Player.VioletPointsUpdate();
		CHECK (3==Player.returnVioletPoints());
	}

	#include <iostream>
	SUBCASE ("if there is one guild type gildia_robotnikow and Left player has 2 brown cards, and right has 1 brown card and also there is one guild type gildia_rzemieslnikow and Left player has 3 GreyCards, and right has 1 GreyCards then VioletPoints=11")
	{
		Gracz Player;
		Gracz L;
		Gracz R;
		wonder W(wonderType::wielka_piramida_w_gizie_B);
		wonder WL(wonderType::wiszace_ogrody_semiramidy_B);
		wonder WR(wonderType::swiatynia_artemidy_w_efezie_B);
		Player.getWonder(&W);
		L.getWonder(&WL);
		R.getWonder(&WR);
		Player.setNeighbours(&L, &R);
		Player.addGuild(GuildType::gildia_robotnikow);
		L.addBrownCard();
		L.addBrownCard();
		R.addBrownCard();
		L.addGreyCard();
		L.addGreyCard();
		L.addGreyCard();
		R.addGreyCard();
		Player.addGuild(GuildType::gildia_rzemieslnikow);
		std::cout<< R.returnLosePoints();
		Player.VioletPointsUpdate();
		CHECK (11==Player.returnVioletPoints());
	}
}