#include <iostream>

#include "blockchain.h"

int main() {
    auto chain = BlockChain::create();




    chain.add_block(Block::create(0, "", 0, 0));

    return 0;
}
