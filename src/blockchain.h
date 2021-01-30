//
// Created by jking on 30/01/2021.
//

#ifndef COCOA_BLOCKCHAIN_H
#define COCOA_BLOCKCHAIN_H

#include <vector>
#include "block.h"

struct BlockChain{

    std::vector<Block> m_chain;
    TransactionPool m_transaction_pool;

    BlockChain();
    static BlockChain create();
    void add_transaction(Transaction transaction);
    void add_block(Block block);
    Block get_block(u32 index);
    Block get_block(str hash);
};

#endif //COCOA_BLOCKCHAIN_H
