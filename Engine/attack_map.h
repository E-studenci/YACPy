#pragma once
#include "types.h"

class AttackMapInitializer {
public:
    AttackMap GetPawnAttackMap() { return this->pawnAttackMap; }
    AttackMap GetKnightAttackMap() { return this->knightAttackMap; }
    AttackMap GetBishopAttackMap() { return this->bishopAttackMap; }
    AttackMap GetRookAttackMap() { return this->rookAttackMap; }
    AttackMap GetQueenAttackMap() { return this->queenAttackMap; }
    AttackMap GetKingAttackMap() { return this->kingAttackMap; }

    void Initialize();
    bool IsInitialized();

protected:
    virtual void CalculatePawnAttackMap() = 0;
    virtual void CalculateKnightAttackMap() = 0;
    virtual void CalculateBishopAttackMap() = 0;
    virtual void CalculateRookAttackMap() = 0;
    virtual void CalculateQueenAttackMap() = 0;
    virtual void CalculateKingAttackMap() = 0;

    AttackMap pawnAttackMap = AttackMap();
    AttackMap knightAttackMap = AttackMap();
    AttackMap bishopAttackMap = AttackMap();
    AttackMap rookAttackMap = AttackMap();
    AttackMap queenAttackMap = AttackMap();
    AttackMap kingAttackMap = AttackMap();

    bool initialized = false;
};

class NaiveAttackMapInitializer : public AttackMapInitializer {
private:
    static U64 CalculatePawnAttacksForPosition(U64 position);
    static U64 CalculateKnightAttacksForPosition(U64 position);
    static U64 CalculateBishopAttacksForPosition(U64 position);
    static U64 CalculateRookAttacksForPosition(U64 position);
    static U64 CalculateQueenAttacksForPosition(U64 position);
    static U64 CalculateKingAttacksForPosition(U64 position);

    void CalculatePawnAttackMap() override;
    void CalculateKnightAttackMap() override;
    void CalculateBishopAttackMap() override;
    void CalculateRookAttackMap() override;
    void CalculateQueenAttackMap() override;
    void CalculateKingAttackMap() override;
};
