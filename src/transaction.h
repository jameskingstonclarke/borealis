//
// Created by jking on 30/01/2021.
//

#pragma once

#include "address.h"

struct Transaction{
    Address m_source;
    Address m_dest;

    std::string m_hash;
    std::string m_block_hash;
    // this is the cost of the transaction
    f64 m_juice = 0;

    struct Header{
        u32 m_data_length;
    };

    // this can be plaintext, contract creation data etc
    std::string m_data;



    static Transaction create(Address to, Address from, std::string data);
};

// a pool of transactions waiting to be mined
struct TransactionPool {
    vec<Transaction> m_transactions;
    u32 m_size = 0;

    void add_transaction(Transaction transaction);
    vec<Transaction> get_some(u32 limit);
};