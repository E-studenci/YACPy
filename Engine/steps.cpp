#include <cstdint>
#include "steps.h"

U64 steps::s(U64 b) { return  b >> 8; }
U64 steps::n(U64 b) { return  b << 8; }
U64 steps::e(U64 b) { return (b << 1) & notAFile; }
U64 steps::w(U64 b) { return (b >> 1) & notHFile; }
U64 steps::ne(U64 b) { return (b << 9) & notAFile; }
U64 steps::se(U64 b) { return (b >> 7) & notAFile; }
U64 steps::nw(U64 b) { return (b << 7) & notHFile; }
U64 steps::sw(U64 b) { return (b >> 9) & notHFile; }

U64 steps::see(U64 b) {return (b >>  6) & notABFile;}
U64 steps::sse(U64 b) {return (b >> 15) & notAFile ;}
U64 steps::nne(U64 b) {return (b << 17) & notAFile ;}
U64 steps::nee(U64 b) {return (b << 10) & notABFile;}
U64 steps::sww(U64 b) {return (b >> 10) & notGHFile;}
U64 steps::ssw(U64 b) {return (b >> 17) & notHFile ;}
U64 steps::nnw(U64 b) {return (b << 15) & notHFile ;}
U64 steps::nww(U64 b) {return (b <<  6) & notGHFile;}
