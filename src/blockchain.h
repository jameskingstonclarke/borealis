//
// Created by jking on 30/01/2021.
//

#pragma once

#include <vector>
#include "block.h"
#include "miner.h"

struct BlockChain{

    std::vector<Block> m_chain;
    TransactionPool m_transaction_pool;
    Miner m_miner;

    BlockChain();
    static BlockChain create();
    u32 calculate_difficulty();
    void add_transaction(Transaction transaction);
    void mine();
    void add_block(Block block);
    Block get_block(u32 index);
    Block get_block(std::string hash);
    Block get_latest();
};