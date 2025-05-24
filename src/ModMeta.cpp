#include "ModMeta.hpp"

using json = nlohmann::json;

int parseModMeta(const std::string& filename, ModMeta& mod)
{
	std::ifstream file(filename);
	if (!file.is_open())
	{
		return 1;
	}

	json js;
	file >> js;

	js.at("name").get_to(mod.name);
	js.at("author").get_to(mod.author);
	js.at("majorVer").get_to(mod.majorVer);
	js.at("minorVer").get_to(mod.minorVer);
	js.at("dllName").get_to(mod.dllName);

	return 0;
}