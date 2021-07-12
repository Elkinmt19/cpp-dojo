#ifndef TRANSACTION_H
#define TRANSACTION_H

// Built-int includes
#include <iostream> 

class Transaction
{
private:
    int m_id;
    int m_account_id;
    std::string m_type;
    int m_amount;

public:
    Transaction(int id, int account_id, std::string type, int amount) : 
        m_id{id}, m_account_id{account_id}, m_type{type}, m_amount{amount}{}
    
    void showInfo();
};



#endif // TRANSACTION_H