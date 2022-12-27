#pragma once
#include "types.h"


namespace steps {
const U64 notAFile = 0xfefefefefefefefe;
const U64 notHFile = 0x7f7f7f7f7f7f7f7f;

const U64 notABFile = 0xfcfcfcfcfcfcfcfc;
const U64 notGHFile = 0x3f3f3f3f3f3f3f3f;

U64 s(U64 b);
U64 n(U64 b);
U64 e(U64 b);
U64 w(U64 b);
U64 ne(U64 b);
U64 se(U64 b);
U64 nw(U64 b);
U64 sw(U64 b);

U64 see(U64 b);
U64 sse(U64 b);
U64 nne(U64 b);
U64 nee(U64 b);
U64 sww(U64 b);
U64 ssw(U64 b);
U64 nnw(U64 b);
U64 nww(U64 b);
}