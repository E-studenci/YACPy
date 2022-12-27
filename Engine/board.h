#pragma once
#include <cstdint>
#include <string>
#include "types.h"

#define BITSET_DEFAULT_VALUE 0

class IBoard {
public:
    virtual void CalculateAttackFields() = 0;
};

class BitBoard : IBoard {
public:
    BitBoard(std::string fen);
    void CalculateAttackFields() override;
private:
    // White pieces positions
    uint64_t whiteKingPosition = BITSET_DEFAULT_VALUE;
    uint64_t whiteQueenPosition = BITSET_DEFAULT_VALUE;
    uint64_t whiteRookPosition = BITSET_DEFAULT_VALUE;
    uint64_t whiteBishopPosition = BITSET_DEFAULT_VALUE;
    uint64_t whiteKnightPosition = BITSET_DEFAULT_VALUE;
    uint64_t whitePawnPosition = BITSET_DEFAULT_VALUE;

    // White pieces attack fields
    uint64_t whiteKingAttack = BITSET_DEFAULT_VALUE;
    uint64_t whiteQueenAttack = BITSET_DEFAULT_VALUE;
    uint64_t whiteRookAttack = BITSET_DEFAULT_VALUE;
    uint64_t whiteBishopAttack = BITSET_DEFAULT_VALUE;
    uint64_t whiteKnightAttack = BITSET_DEFAULT_VALUE;
    uint64_t whitePawnAttack = BITSET_DEFAULT_VALUE;

    // Black pieces positions
    uint64_t blackKingPosition = BITSET_DEFAULT_VALUE;
    uint64_t blackQueenPosition = BITSET_DEFAULT_VALUE;
    uint64_t blackRookPosition = BITSET_DEFAULT_VALUE;
    uint64_t blackBishopPosition = BITSET_DEFAULT_VALUE;
    uint64_t blackKnightPosition = BITSET_DEFAULT_VALUE;
    uint64_t blackPawnPosition = BITSET_DEFAULT_VALUE;

    // Black pieces attack fields
    uint64_t blackKingAttack = BITSET_DEFAULT_VALUE;
    uint64_t blackQueenAttack = BITSET_DEFAULT_VALUE;
    uint64_t blackRookAttack = BITSET_DEFAULT_VALUE;
    uint64_t blackBishopAttack = BITSET_DEFAULT_VALUE;
    uint64_t blackKnightAttack = BITSET_DEFAULT_VALUE;
    uint64_t blackPawnAttack = BITSET_DEFAULT_VALUE;
};