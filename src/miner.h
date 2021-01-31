//
// Created by jking on 30/01/2021.
//

#pragma once

#include "block.h"
#include "transaction.h"

struct Miner {


    static Miner create();
    Block mine(u32 prev_index, std::string prev_hash, u32 difficulty, TransactionPool& transaction_pool);
};