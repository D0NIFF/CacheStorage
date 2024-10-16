#pragma once
#include <map>
#include <string>
#include <variant>
#include <vector>
#include <memory>

#ifndef MULTIARRAY_H
#define MULTIARRAY_H

class MultiArray; // Предварительное объявление

using MultiType = std::variant<int, double, std::string, std::shared_ptr<MultiArray>>;

class MultiArray
{
private:
    //using MultiType = std::variant<int, double, std::string, std::map<std::string, std::variant<int, double, std::string>>, std::vector<std::variant<int, double, std::string>>>;
    std::map<std::string, MultiType> data;
public:

};



#endif //MULTIARRAY_H
