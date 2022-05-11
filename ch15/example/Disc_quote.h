#ifndef DISC_QUOTE_H
#define DISC_QUOTE_H

#include "Quote.h"

class Disc_quote : public Quote{
public:
    Disc_quote();
    Disc_quote(const std::string &str, double p, std::size_t q, double d):
                Quote(str, p), quantity(q), discount(d)
    {}

    virtual double net_price(std::size_t n) const = 0;

protected:
    std::size_t quantity;
    double discount;
};



#endif