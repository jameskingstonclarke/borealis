//
// Created by jking on 30/01/2021.
//

#ifndef COCOA_TRANSACTION_H
#define COCOA_TRANSACTION_H

#include "address.h"

struct Transaction{
    Address m_source;
    Address m_dest;

    str m_hash;
    str m_block_hash;

    struct Header{
        u32 m_data_length;
    };

    // this can be plaintext, contract creation data etc
    str m_data;
};

// a pool of transactions waiting to be mined
struct TransactionPool {
    vec<Transaction> m_transactions;
    u32 m_size = 0;

    void add_transaction(Transaction transaction);
};


#endif //COCOA_TRANSACTION_H
