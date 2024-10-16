#pragma once
#include <map>
#include <string>
#include <variant>

#ifndef DATABASE_H
#define DATABASE_H


using VariantType = std::variant<int, double, std::string, std::map<std::string, std::variant<int, double, std::string>>>;
class Database {
private:
    std::map<std::string, VariantType> _rows;
    int _cols{};

public:
    Database();
    ~Database();

    int rows();
    int cols();
    void setRows(int rows);
    void setCols(int cols);


};

#endif //DATABASE_H
