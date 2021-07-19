// Built-int includes 
#include <iostream>

// Own includes
#include "Accounts.hpp"
#include "Transaction.hpp"

void Account::showInfo()
{
    std::cout << "*********** ACCOUNT INFORMATION ***********" << std::endl;
    std::cout << "id: " << m_id << std::endl;
    std::cout << "Number: " << m_number << std::endl;
    std::cout << "" << m_owner_name << std::endl;
    std::cout << "Amount: " << m_amount << std::endl;
    std::cout << "*********** Account's transactions ***********" << std::endl;

    for (Transaction* t : listOfTransactions)
    {
        t->showInfo();
    }
}

int Account::get_id()
{
    return m_id;
}

void Account::add_transaction(Transaction* trans)
{
    listOfTransactions.push_back(trans);
}

void Account::calculate_amount()
{
    float amount_buff = 0;
    for (Transaction* t : listOfTransactions)
    {
        if (t->get_type() == "input")
        {
            amount_buff += t->get_amount();
        }
        if (t->get_type() == "output")
        {
            amount_buff -= t->get_amount();
        }
    }
    m_amount = amount_buff;
}

float Account::get_amount(){
    return m_amount;
}

void Account::delete_transactions()
{
    if (m_amount >= 0)
    {
        listOfTransactions.clear();
    }
}