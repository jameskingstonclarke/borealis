//
// Created by jking on 30/01/2021.
//

#pragma once

#include "address.h"
#include "key.h"
#include "blockchain.h"

struct Wallet {
    Address m_address;
    BlockChain* m_block_chain;

    static Wallet create();
    static Wallet create(BlockChain* block_chain, Key public_key);
    u32 unlock(Key private_key);
    f64 balance();
};