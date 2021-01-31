#include <iostream>

#include "blockchain.h"
#include "wallet.h"
#include "crypto.h"

int main() {
    auto chain = BlockChain::create();

    chain.add_transaction(
            Transaction::create(
            Address::create(Key::create("123")),
            Address::create(Key::create("321")),
            "hello world!"
            ));
    chain.add_transaction(
        Transaction::create(
            Address::create(Key::create("123")),
            Address::create(Key::create("321")),
            "hello world!"
        ));

    chain.mine();

    chain.add_transaction(
        Transaction::create(
            Address::create(Key::create("123")),
            Address::create(Key::create("321")),
            "hello world!"
        ));

    chain.mine();

    auto wallet = Wallet::create(&chain, Key::create("123"));
    wallet.unlock(Key::create("123"));
    wallet.balance();
    
    return 0;
}
