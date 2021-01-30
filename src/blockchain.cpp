//
// Created by jking on 30/01/2021.
//


#include "blockchain.h"

BlockChain::BlockChain(){}


BlockChain BlockChain::create(){
    return {};
}

void BlockChain::add_transaction(Transaction transaction){
    m_transaction_pool.add_transaction(transaction);
}


void BlockChain::add_block(Block block){

}

Block BlockChain::get_block(u32 index){
    return {};
}

Block BlockChain::get_block(str hash){
    return {};
}