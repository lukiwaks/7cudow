#include "doctest.h"
#include "Gracz.hpp"
#include "GoldenCard.hpp"


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
			GoldenCard Card (GoldenCardType::tawerna);
			CHECK (0==Card.countWinPoints(2,2,26));
		}
		SUBCASE("if type of card is bazar it should return 0")
		{
			GoldenCard Card (GoldenCardType::bazar);
			CHECK (0==Card.countWinPoints(3,4,6));
		}
	}
	SUBCASE("if type of card is port it should return nuberOfBrownCards")
	{
		SUBCASE("if nuberOfBrownCards is 0 return 0")
		{
			GoldenCard Card (GoldenCardType::port);
			CHECK (0==Card.countWinPoints(0,24,26));
		}
		SUBCASE("if nuberOfBrownCards is 1 return 1")
		{
			GoldenCard Card (GoldenCardType::port);
			CHECK (1==Card.countWinPoints(1,2,2));
		}
		SUBCASE("if nuberOfBrownCards is 55 return 55")
		{
			GoldenCard Card (GoldenCardType::port);
			CHECK (55==Card.countWinPoints(55,4,6));
		}
		
	}
	SUBCASE("if type of card is latarnia_morska it should return nuberOfGoldenCards")
	{
		SUBCASE("if nuberOfGoldenCards is 0 return 0")
		{
			GoldenCard Card (GoldenCardType::latarnia_morska);
			CHECK (0==Card.countWinPoints(12,0,3));
		}
		SUBCASE("if nuberOfGoldenCards is 1 return 1")
		{
			GoldenCard Card (GoldenCardType::latarnia_morska);
			CHECK (1==Card.countWinPoints(13,1,12));
		}
		SUBCASE("if nuberOfGoldenCards is 5 return 5")
		{
			GoldenCard Card (GoldenCardType::latarnia_morska);
			CHECK (5==Card.countWinPoints(4,5,26));
		}
	}
	SUBCASE("if type of card is dom_handlowy it should return 2*nuberOfGreyCards")
	{
		SUBCASE("if nuberOfGreyCards is 0 return 0")
		{
			GoldenCard Card (GoldenCardType::dom_handlowy);
			CHECK (0==Card.countWinPoints(2,7,0));
		}
		SUBCASE("if nuberOfGreyCards is 1 return 2")
		{
			GoldenCard Card (GoldenCardType::dom_handlowy);
			CHECK (2==Card.countWinPoints(12,7,1));
		}
		SUBCASE("if nuberOfGreyCards is 8 return 16")
		{
			GoldenCard Card (GoldenCardType::dom_handlowy);
			CHECK (16==Card.countWinPoints(3,4,8));
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
TEST_CASE("testing int Gracz::returnGreenCardPoints().")
{
	SUBCASE ("if GreenCardQuantity==1 return 0 and there isn't wonder UniversalSymbol")
	{
		Gracz Player;
		wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
		Player.getWonder (&Wonder);
		int test=Player.returnGreenCardPoints();
		CHECK (0==test);
	}
	SUBCASE ("if GreenCardQuantity==1 return 1 and there isn't wonder UniversalSymbol. Check for kolo symbol.")
	{
		Gracz Player;
		wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
		Player.getWonder (&Wonder);
		Player.addGreenCard(symbol::kolo);
		int test=Player.returnGreenCardPoints();
		CHECK (1==test);
	}
	SUBCASE ("if GreenCardQuantity==1 return 1 and there isn't wonder UniversalSymbol. Check for tablica symbol.")
	{
		Gracz Player;
		wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
		Player.getWonder (&Wonder);
		Player.addGreenCard(symbol::tablica);
		int test=Player.returnGreenCardPoints();
		CHECK (1==test);
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
			int test=Player.returnGreenCardPoints();
			CHECK (4==test);
		}
		SUBCASE ("if symbol green [0]==symbol green [1] return 4")
		{
			Gracz Player;
			wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
			Player.getWonder (&Wonder);
			Player.addGreenCard(symbol::kolo);
			Player.addGreenCard(symbol::kolo);
			int test=Player.returnGreenCardPoints();
			CHECK (4==test);
		}
		SUBCASE ("if symbol green [0]!=symbol green [1] return 2")
		{
			Gracz Player;
			wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
			Player.getWonder (&Wonder);
			Player.addGreenCard(symbol::kolo);
			Player.addGreenCard(symbol::cyrkiel);
			int test=Player.returnGreenCardPoints();
			CHECK (2==test);
		}
		SUBCASE ("if symbol green [0]!=symbol green [1] return 2")
		{
			Gracz Player;
			wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
			Player.getWonder (&Wonder);
			Player.addGreenCard(symbol::tablica);
			Player.addGreenCard(symbol::cyrkiel);
			int test=Player.returnGreenCardPoints();
			CHECK (2==test);
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
			int test=Player.returnGreenCardPoints();
			CHECK (9==test);
		}
		SUBCASE ("if symbol green [0]==symbol green [1]!= symbol green [2]return 5")
		{
			Gracz Player;
			wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
			Player.getWonder (&Wonder);
			Player.addGreenCard(symbol::kolo);
			Player.addGreenCard(symbol::kolo);
			Player.addGreenCard(symbol::cyrkiel);
			int test=Player.returnGreenCardPoints();
			CHECK (5==test);
		}
		SUBCASE ("if symbol green [0]!=symbol green [1]!=symbol green [2] return 3")
		{
			Gracz Player;
			wonder Wonder(wonderType::wiszace_ogrody_semiramidy_A);
			Player.getWonder (&Wonder);
			Player.addGreenCard(symbol::kolo);
			Player.addGreenCard(symbol::cyrkiel);
			Player.addGreenCard(symbol::tablica);
			int test=Player.returnGreenCardPoints();
			CHECK (3==test);
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
		int test=Player.returnGreenCardPoints();
		CHECK (14==test);
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
			int test=Player.returnGreenCardPoints();
			CHECK (10==test);
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
			int test=Player.returnGreenCardPoints();
			CHECK (21==test);
		}
	}
}

























/*
TEST_CASE("testing int Gracz::getPointsResult(). This function should return sum of BlueCardPoints, wonderWinPoints, RedCardPoints, GreenCardPoints, GoldenCardPoints, GuildPoints")
{
	SUBCASE ("if a level is not 0/1/2/3 return 1, error information")
		{

		}

}*/

