#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
    BidirIt iterator = first;
    BidirIt iterator2 = last - 1;
    int range_lenght = 0;
    
    for (BidirIt iterator3 = first; iterator3 != last; iterator3++){
        range_lenght++;
    }

    int len = range_lenght/2;

    for (int i = 0; i < len; i++){
        std::iter_swap(iterator, iterator2);
        iterator++;
        iterator2--;
    }
}

}
#endif
