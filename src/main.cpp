/**
 * @file main.cpp
 * @author Ashar Alam (ashar.alam11@gmail.com)
 * @brief Sandbox to try things
 * @version 0.1
 * @date 2023-01-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <fstream>
#include <iostream>
// Including taoJSON header files
#include <json/json.hpp>


using json = nlohmann::json;

int main(int argc, char *argv[])
{ 
    std::ifstream f("../configs/test.json");
    json data = json::parse(f);
    std::cout<<data<<std::endl;
}