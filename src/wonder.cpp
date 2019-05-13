#include "wonder.hpp"


wonder::wonder (wonderType wt)
{
	level=0;
	wonderWinPoints=0;
	type=wt;
	wonderWarPoints=0;
	wonderUniversalSymbol=0;
}

int wonder::returnWonderLevel()
{
	return level;
}

int wonder::returnWonderWinPoints()
{
	return wonderWinPoints;
}

int wonder::returnWonderWarPoints()
{
	return wonderWarPoints;
}

int wonder::returnWonderUniversalSymbol()
{
	return wonderUniversalSymbol;
}

wonderType wonder::returnWonderType()
{
	return type;
}

int wonder::leveling (int lvlmax, int Win1, int Win2, int Win3, int Win4, 
						int War1, int War2, int War3, int War4,
						int US1, int US2, int US3, int US4)
{
	if (level>=lvlmax)
	{
		return 1;
	}
	if (0==level)
	{
		wonderWinPoints=Win1;
		wonderWarPoints=War1;
		wonderUniversalSymbol=US1;
	}
	else if (1==level)
	{

		wonderWinPoints=wonderWinPoints+Win2;
		wonderWarPoints=wonderWarPoints+War2;
		wonderUniversalSymbol=wonderUniversalSymbol+US2;
	}
	else if (2==level)
	{
		wonderWinPoints=wonderWinPoints+Win3;
		wonderWarPoints=wonderWarPoints+War3;
		wonderUniversalSymbol=wonderUniversalSymbol+US3;
	}
	else if (3==level)
	{	
		wonderWinPoints=wonderWinPoints+Win4;	
		wonderWarPoints=wonderWarPoints+War4;
		wonderUniversalSymbol=wonderUniversalSymbol+US4;
	}
	return 0;
}

int wonder::addWonderLevel ()
{
	int test=0;
	switch (type)
	{
	case wonderType::kolos_rodyjski_A:
	{
		test=wonder::leveling (3, 
								3, 0, 7, 0, 
								0, 2, 0, 0, 
								0, 0, 0, 0);
		break;
	}
	case wonderType::kolos_rodyjski_B:
	{
		test=wonder::leveling (2, 
								3, 4, 0, 0, 
								1, 1, 0, 0, 
								0, 0, 0, 0);
		break;
	}
	case wonderType::latarnia_morska_w_aleksandrii_A:
	{
		test=wonder::leveling (3, 
								3, 0, 7, 0, 
								0, 0, 0, 0, 
								0, 0, 0, 0);
		
		break;
	}
	case wonderType::latarnia_morska_w_aleksandrii_B:
	{
		test=wonder::leveling (3, 
								0, 0, 7, 0, 
								0, 0, 0, 0, 
								0, 0, 0, 0);
		
		break;
	}
	case wonderType::swiatynia_artemidy_w_efezie_A:
	{
		test=wonder::leveling (3, 
								3, 0, 7, 0, 
								0, 0, 0, 0, 
								0, 0, 0, 0);
		
		break;
	}
	case wonderType::swiatynia_artemidy_w_efezie_B:
	{
		test=wonder::leveling (3, 
								2, 3, 5, 0, 
								0, 0, 0, 0, 
								0, 0, 0, 0);
		
		break;
	}
	case wonderType::wiszace_ogrody_semiramidy_A:
	{
		test=wonder::leveling (3, 
								3, 0, 7, 0, 
								0, 0, 0, 0, 
								0, 1, 0, 0);
		
		break;
	}
	case wonderType::wiszace_ogrody_semiramidy_B:
	{
		test=wonder::leveling (3, 
								3, 0, 0, 0, 
								0, 0, 0, 0, 
								0, 0, 1, 0);
		
		break;
	}
	case wonderType::posag_zeusa_w_olimpii_A:
	{
		test=wonder::leveling (3, 
								3, 0, 7, 0, 
								0, 0, 0, 0, 
								0, 0, 0, 0);
		break;
	}
	case wonderType::posag_zeusa_w_olimpii_B:
	{
		test=wonder::leveling (3, 
								0, 5, 0, 0, 
								0, 0, 0, 0, 
								0, 0, 0, 0);
		break;
	}
	case wonderType::mauzoleum_w_halikarnasie_A:
	{
		test=wonder::leveling (3, 
								3, 0, 7, 0, 
								0, 0, 0, 0, 
								0, 0, 0, 0);
		break;
	}
	case wonderType::mauzoleum_w_halikarnasie_B:
	{
		test=wonder::leveling (3, 
								2, 1, 0, 0, 
								0, 0, 0, 0, 
								0, 0, 0, 0);
		break;
	}
	case wonderType::wielka_piramida_w_gizie_A:
	{
		test=wonder::leveling (3, 
								3, 5, 7, 0, 
								0, 0, 0, 0, 
								0, 0, 0, 0);
		break;
	}
	case wonderType::wielka_piramida_w_gizie_B:
	{
		test=wonder::leveling (4, 
								3, 5, 5, 7, 
								0, 0, 0, 0, 
								0, 0, 0, 0);
		break;
	}
	}
	level++;
	return test;
}