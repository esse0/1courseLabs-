#pragma once



namespace info
{
	enum class recepoint
	{
		Minsk, Moskow, Paris, Tokio, StariySverzen
	};

	struct Avia
	{
		int race_num;

		recepoint point;

		Avia() : race_num(0), point(recepoint::StariySverzen) { }

		Avia(int race_num, recepoint point) : race_num(race_num), point(point) { }
	};

	struct Phone
	{
		std::string FirstName;
		std::string SecondName;
		std::string FatherName;

		short Number;
	};
}
