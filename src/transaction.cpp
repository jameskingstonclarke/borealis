//
// Created by jking on 30/01/2021.
//


#include "transaction.h"


Transaction Transaction::create(Address to, Address from, std::string data){
    Transaction t;
    t.m_dest = to;
    t.m_source = from;
    t.m_data = data;
    return t;
}

void TransactionPool::add_transaction(Transaction transaction){
    m_transactions.push_back(transaction);
    m_size++;
}

vec<Transaction> TransactionPool::get_some(u32 limit){
    auto size = (m_size < limit) ? m_size : limit;
    m_size -= size;
    vec<Transaction> new_vec(size);
    // move the data
    std::move(new_vec.begin(), new_vec.begin() + size, m_transactions.begin());
    // empty the transaction pool internally
    m_transactions.erase(m_transactions.begin() + size, m_transactions.end());
    return new_vec;
}