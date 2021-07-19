#ifndef ACCOUNTS_H
#define ACCOUNTS_H

// Built-int includes
#include <iostream>
#include <list>

// Own includes
#include "Transaction.hpp"

class Account
{
private:
    int m_id;
    int m_number;
    std::string m_owner_name;
    int m_amount;
    std::list <Transaction*> listOfTransactions;

public:
    Account(int id, int number, std::string owner_name) : 
        m_id{id}, m_number{number}, m_owner_name{owner_name}, m_amount{0}{}
    
    void showInfo();

    int get_id();

    void add_transaction(Transaction* trans);

    void calculate_amount();

    float get_amount();

    void delete_transactions();
};



#endif // ACCOUNTS_H