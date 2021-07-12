#ifndef ACCOUNTS_H
#define ACCOUNTS_H

// Built-int includes
#include <iostream> 

class Account
{
private:
    int m_id;
    int m_number;
    std::string m_owner_name;
    int m_amount;

public:
    Account(int id, int number, std::string owner_name) : 
        m_id{id}, m_number{number}, m_owner_name{owner_name}, m_amount{0}{}
    
    void showInfo();

    void showAmont();
};



#endif // ACCOUNTS_H