//
// Created by jking on 30/01/2021.
//

#include "miner.h"
#include "crypto.h"
#include <sstream>

Miner Miner::create(){
    return {};
}

Block Miner::mine(u32 prev_index, std::string prev_hash, u32 difficulty, TransactionPool& transaction_pool){

    auto b = Block::create(prev_index+1, prev_hash, 0, difficulty, transaction_pool.get_some(500));
    auto num_zeros = difficulty;
    std::stringstream ss;
    for (int i = 0; i < num_zeros; i++)
        ss << "0";
    // while we haven't found the correct number of zeros, keep hashing
    while(b.hash().substr(0, num_zeros).compare(ss.str())!=0){
        b.m_nonce++;
    }
    log("found hash, nonce={}, hash={}", b.m_nonce, b.m_hash);
    log("created block with txns={}", b.m_transactions.size());
    return b;
}