//
// Created by jking on 30/01/2021.
//

#include "block.h"

Block Block::create(){
    return {};
}

Block Block::create(u32 index){
    return {};
}

Block Block::create(u32 index, str prev_hash, u32 nonce, u32 difficulty){
    Block block;
    block.m_prev_hash = prev_hash;
    block.m_nonce = nonce;
    block.m_difficulty = difficulty;
    return block;
}