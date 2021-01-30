//
// Created by jking on 30/01/2021.
//

#ifndef COCOA_WALLET_H
#define COCOA_WALLET_H

#include "address.h"
#include "key.h"
#include "blockchain.h"

struct Wallet {
    Address m_address;
    BlockChain m_block_chain;

    static Wallet create();
    static Wallet create(Key private_key);
    f64 get_balance();
};


#endif //COCOA_WALLET_H
