/*
Project Fusil
Licensed under the {fill in once license is chosen}
Copyright 2021 Joshua Bright
*/


#include <iostream>
#include <fstream>
#include <string>
#include <nlohmann/json.hpp>

using std::string;
using std::cerr;
using json = nlohmann::json;

int main(int argc, char* argv[]) {

	const string fileName = "./data/cartridge.json";
	try {
		//Here we want to read in the json file and deserialize it into json object named cartridge_data
		std::ifstream json_input(fileName);
		json cartridge_data;
		json_input >> cartridge_data;

		//for testing purposes we want to view the data to make sure that the data is properly being read
		std::cout << cartridge_data.dump(4) << std::endl;

		int test;
		std::cout << "Press anything to exit" << std::endl;
		std::cin >> test;
	}
	catch (...) {
		//Generic error message that will be replaced in future updates
		cerr << "There was an error";
	}
}