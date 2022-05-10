#include "quote.h"
#include "bulk_quote.h"


#include <iostream>
#include <string>

double print_total(std::ostream& os, const Quote& item, size_t n);

int main(){
    //testing for 15.6
    Quote q("Quote ISBN", 10.60);
    Bulk_quote bq("Bulk Quote ISBN", 10.60, 10, 0.3);

    print_total(std::cout, q, 12);
    print_total(std::cout, bq, 12);

    return 0;
}

double print_total(std::ostream &os, const Quote &item, size_t n){
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;
    return ret;
}
