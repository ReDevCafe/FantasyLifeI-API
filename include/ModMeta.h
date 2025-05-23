#pragma once

#include <string>
#include <Windows.h>
#include <sstream>
#include <iostream>
#include <fstream>
#include "ModAPI.h"
#include "json.hpp"


int parseModMeta(const std::string& filename, ModMeta& mod);
