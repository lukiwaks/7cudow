enum class wonderType 
{
	kolos_rodyjski_A,
	kolos_rodyjski_B,
	latarnia_morska_w_aleksandrii_A,
	latarnia_morska_w_aleksandrii_B,
	swiatynia_artemidy_w_efezie_A,
	swiatynia_artemidy_w_efezie_B,
	wiszace_ogrody_semiramidy_A,
	wiszace_ogrody_semiramidy_B,
	posag_zeusa_w_olimpii_A,
	posag_zeusa_w_olimpii_B,
	mauzoleum_w_halikarnasie_A,
	mauzoleum_w_halikarnasie_B,
	wielka_piramida_w_gizie_A,
	wielka_piramida_w_gizie_B,
};


class wonder 
{
	private:
		int level;
		wonderType type;
		int wonderWinPoints;
		int wonderWarPoints;
		int wonderUniversalSymbol;
	public:
		int addWonderLevel();
		int returnWonderWinPoints();
		int returnWonderWarPoints();
		int returnWonderUniversalSymbol();
		wonderType returnWonderType ();
		int returnWonderLevel ();
		wonder (wonderType wt);
		int leveling (int lvlmax, int Win1, int Win2, int Win3, int Win4, 
						int War1, int War2, int War3, int War4,
						int US1, int US2, int US3, int US4);
};