#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template< typename S >
void swap(S & a, S & b) {
    S s = a;
    a = b;
    b = s;
}

template< typename N >
N const & min(N const & a, N const & b) {
    return (a >= b ? b : a);
}

template< typename X >
X const & max(X const & a, X const & b) {
    return (a > b ? a : b);
}

#endif