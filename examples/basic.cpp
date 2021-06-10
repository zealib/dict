#include "zealib/dict.hpp"

int
main (int argc, char const *argv[])
{
	zealib::dict d{};
	d["name"] = "basic";
	d["lang"] = "c++";
	d["year"] = 2021;
	d["complete"] = false;
	d.print();
	return 0;
}

