

enum class GuildType {
	gildia_robotnikow,
	gildia_rzemieslnikow,
	gildia_kupcow,
	gildia_filozofow,
	gildia_szpiegow,
	gildia_strategow,
	gildia_naukowcow,
	gildia_sedziow,
	gildia_budowniczych,
	gildia_amatorow
};

struct CardsAndWonder
{
	int BlueCardQuantity;
 	int BrownCardQuantity;
 	int GreyCardQuantity;
 	int RedCardQuantity;
 	int GreenCardQuantity;
 	int GoldenCardQuantity;
 	int WonderLevel;
};

class Guild
{
	private:
		GuildType type;
	public:
		int coutGuildPoints (CardsAndWonder Player, CardsAndWonder Left, CardsAndWonder Right);
		Guild (GuildType t);
};

