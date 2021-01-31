//
// Created by jking on 30/01/2021.
//

#include "wallet.h"


Wallet Wallet::create() {
    return {};
}


Wallet Wallet::create(BlockChain* block_chain, Key public_key){
    Wallet w;
    w.m_address = Address::create(public_key);
    w.m_block_chain = block_chain;
    return w;
}

u32 Wallet::unlock(Key private_key){
    return 1;
}

f64 Wallet::balance(){
    f64 bal = 0.0;
    for(const auto& block : m_block_chain->m_chain){
        for(const auto& txn : block.m_transactions){
            // if we sent this transaction, then reduce the cost
            if(txn.m_source==m_address){
                bal-=txn.m_juice;
            }else if(txn.m_dest==m_address){
                bal+=txn.m_juice;
            }
        }
    }
    log("balance={}", bal);
    return bal;
}