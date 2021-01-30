//
// Created by jking on 30/01/2021.
//

#ifndef COCOA_BLOCK_H
#define COCOA_BLOCK_H

#include "common.h"
#include "transaction.h"

struct Block{
    u32 m_index;
    str m_hash;
    str m_prev_hash;
    u32 m_nonce;
    u32 m_difficulty;
    vec<Transaction> m_transactions;

    static Block create();
    static Block create(u32 index);
    static Block create(u32 index, str prev_hash, u32 nonce, u32 difficulty);
};



#endif //COCOA_BLOCK_H
