#ifndef QUOTE_H
#define QUOTE_H

#include <iostream>
#include <string>

class Quote{
public:
    Quote() = default;
    Quote(const std::string &str, double p): 
            bookNo(str), price(p){}
    
    std::string isbn() const { return bookNo;}
    virtual double net_price(std::size_t n) const { return n * price; }
    //15.11 Debug
    void debug() const{}
    virtual ~Quote() = default;

private:
    std::string bookNo;
    
protected:
    double price = 0.0;
};

void Quote::debug() const{
    std::cout << "data member of this class:\n" 
                << "ISBN: " << this->bookNo
                << " Price: " << this->price << " "; 
}


#endif