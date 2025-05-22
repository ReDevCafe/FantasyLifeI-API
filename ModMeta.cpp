#include "ModMeta.h"

void extractString(const std::string& json, const char* key, std::string& out)
{
	std::string pat = "\"" + std::string(key) + "\"";
	inline size_t pos = json.find(pat);

	if (pos == std::string::npos) return;
}

void ParseModJson(const std::string& path, ModMeta& meta)
{
	std::ifstream file(path);
	if (!file.is_open()) return;

	std::ostringstream ss;
	ss << file.rdbuf();

	std::string content = ss.str();

	
}