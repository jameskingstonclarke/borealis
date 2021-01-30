//
// Created by jking on 30/01/2021.
//


#include "transaction.h"

void TransactionPool::add_transaction(Transaction transaction){
    m_transactions.push_back(transaction);
    m_size++;
}