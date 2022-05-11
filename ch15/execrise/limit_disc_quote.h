#ifndef LIMIT_DISC_QUOTE_H
#define LIMIT_DISC_QUOTE_H

#include "disc_quote.h"

class Limit_disc_quote : public Disc_quote
{
public:
    Limit_disc_quote();
    Limit_disc_quote(const std::string& str, double p, std::size_t max, double disc):
                    Disc_quote(str, p, max, disc)
    {}
    double net_price(std::size_t n) const override;

};


double Limit_disc_quote::net_price(std::size_t n) const {
    if(n > quantity)     
        return quantity * price * discount + (n - quantity) * price;
    else
        return n * discount * price;
    //incorrect from github
    //return n * price * (n < quantity ? 1 - discount : 1);
}

#endif