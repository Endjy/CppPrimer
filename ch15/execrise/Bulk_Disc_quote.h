#ifndef BULK_DISC_QUOTE_H
#define BULK_DISC_QUOTE_H

#include "disc_quote.h"

class Bulk_quote: public Disc_quote{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& str, double p, std::size_t q, double disc):
            Disc_quote(str, p, q, disc)
    {}

    double net_price(std::size_t n) const override;
};

#endif