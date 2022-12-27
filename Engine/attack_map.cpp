#include <array>

#include "attack_map.h"
#include "steps.h"

void AttackMapInitializer::Initialize() {
	this->CalculatePawnAttackMap();
	this->CalculateKnightAttackMap();
	this->CalculateBishopAttackMap();
	this->CalculateRookAttackMap();
	this->CalculateQueenAttackMap();
	this->CalculateKingAttackMap();
	this->initialized = true;
}

bool AttackMapInitializer::IsInitialized() {
	return this->initialized;
}


void NaiveAttackMapInitializer::CalculatePawnAttackMap() {

}

void NaiveAttackMapInitializer::CalculateKnightAttackMap() {

}

void NaiveAttackMapInitializer::CalculateBishopAttackMap() {

}

void NaiveAttackMapInitializer::CalculateRookAttackMap() {

}

void NaiveAttackMapInitializer::CalculateQueenAttackMap() {

}

U64 NaiveAttackMapInitializer::CalculateKingAttacksForPosition(U64 kingPosition) {
	uint64_t attacks = steps::e(kingPosition) | steps::w(kingPosition);
	kingPosition |= attacks;
	attacks |= steps::n(kingPosition) | steps::s(kingPosition);
	return attacks;
}

void NaiveAttackMapInitializer::CalculateKingAttackMap() {
	U64 sqBB = 1;
	for (int sq = 0; sq < 64; sq++, sqBB <<= 1)
		this->kingAttackMap[sq] = CalculateKingAttacksForPosition(sqBB);
}
