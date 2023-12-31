#pragma once

#include <unistd.h>

#include <fstream>
#include <stdexcept>
#include <string>

#include "../Utils/Utils.hpp"
#include "Block/ABlock.hpp"
#include "Block/Config.hpp"

class ConfigManager {
   public:
	static ConfigManager& getInstance();
	const Config& getConfig() const;
	const std::string& getProgramPath() const;

	void parse(int argc, char** argv);

   private:
	ConfigManager();
	~ConfigManager();

	void checkLineType(std::string& line, char& line_type);
	void parseBlock(std::ifstream& ifs, ABlock* block);

	Config config_;
	std::string conf_path_;
	std::string program_path_; // webserv 프로젝트 폴더의 경로
};
