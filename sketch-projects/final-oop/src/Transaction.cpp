// Built-int includes 
#include <iostream>

//Own includes
#include "Transaction.hpp"

void Transaction::showInfo()
{   
    std::cout << "Trasaction Info:" << std::endl;
    std::cout << "id: " << m_id << std::endl;
    //std::cout << "Type: " << m_type << std::endl;
    std::cout << "Amount: " << m_amount << std::endl;
}

float Transaction::get_amount()
{
    return m_amount;
}