//
// Created by jking on 30/01/2021.
//

#include "block.h"
#include "crypto.h"
#include <sstream>

Block Block::create(){
    return {};
}

Block Block::create(u32 index){
    return {};
}

Block Block::create(u32 index, std::string prev_hash, u32 nonce, u32 difficulty, vec<Transaction> transactions){
    Block block;
    block.m_prev_hash = prev_hash;
    block.m_nonce = nonce;
    block.m_difficulty = difficulty;
    block.m_transactions = transactions;
    log("block created, idx={}", index);
    return block;
}

std::string Block::json() {
    std::stringstream ss;
    ss << "{'index':" << m_index << ", 'nonce':" << m_nonce <<"}";
    return ss.str();
}

std::string Block::hash() {
    std::stringstream ss;
    ss << m_prev_hash << m_nonce << m_index;
    m_hash = sha256(ss.str());
    return m_hash;
}