#ifndef QUOTE_H
#ifndef QUOTE_H

#include <string>

class Quote{
public:
    Quote() = default;
    Quote(const std::string &str, double p): 
            bookNo(str), price(p){}

private:
    std::string bookNo;
protected:
    double price = 0.0
}