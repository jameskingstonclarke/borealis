//
// Created by jking on 30/01/2021.
//

#pragma once

#include <chrono>
#include "common.h"
#include "transaction.h"

struct Block {
    u32 m_index;
    std::string m_hash;
    std::string m_prev_hash;
    u32 m_nonce = 0;
    u32 m_difficulty;
    vec<Transaction> m_transactions;

    static Block create();
    static Block create(u32 index);
    static Block create(u32 index, std::string prev_hash, u32 nonce, u32 difficulty, vec<Transaction> transactions);
    std::string json();
    std::string hash();

};