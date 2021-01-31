//
// Created by jking on 30/01/2021.
//


#include "blockchain.h"

BlockChain::BlockChain(){}


BlockChain BlockChain::create(){
    return {};
}

u32 BlockChain::calculate_difficulty(){
    // @TODO implement me!
    if(m_chain.size()==0)
        return 1;
    // get the latest block
    auto latest = get_latest();
    return 1;
}

void BlockChain::add_transaction(Transaction transaction){
    m_transaction_pool.add_transaction(transaction);
}


void BlockChain::mine(){
    // create a new block
    m_chain.push_back(m_miner.mine(m_chain.size() - 1, get_latest().m_hash, calculate_difficulty(), m_transaction_pool));
}


void BlockChain::add_block(Block block){

}

Block BlockChain::get_block(u32 index){
    return {};
}

Block BlockChain::get_block(std::string hash){
    return {};
}


Block BlockChain::get_latest(){
    if(m_chain.size()==0)
        return {};
    return m_chain.at(m_chain.size()-1);
}