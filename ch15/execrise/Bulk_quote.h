#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include "quote.h"

class Bulk_quote: public Quote{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string &str, double p, std::size_t q, double d):
                Quote(str, p), min_qty(q), discount(d)
    {}

    //define elsewhere
    double net_price(std::size_t n) const override;

private:
    std::size_t min_qty = 0;
    double discount = 0.0;              
};

#endif