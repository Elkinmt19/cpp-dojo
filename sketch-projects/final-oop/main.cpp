// Built-int includes
#include <iostream>
#include <fstream>
#include <sstream>
#include <list>

// Own includes
#include "Accounts.hpp"
#include "Transaction.hpp"

void create_accounts(std::list <Account>& accounts)
{
    std::fstream accounts_file;
    accounts_file.open ("./../text-files/accounts.txt");
    if (accounts_file.is_open())
    {
        for (std::string line; std::getline(accounts_file, line); )
        {
            std::istringstream subfile;
            subfile.str(line);
            std::string data[3];
            int i = 0;
            for (std::string line2; std::getline(subfile, line2,',');)
            {
                *(data + i) = line2; i++;
            }
            int mid_id = std::stoi(*data);
            int mid_number = std::stoi(*(data+1));
            Account account_mid(mid_id, mid_number, *(data+2));
            accounts.push_back(account_mid);
        }
    }
    accounts_file.close();

}

void perform_transactions(
    std::list <Account>& accounts,
    std::list <Account>::iterator iter,
    Transaction*& transaction_mid
)
{
    std::fstream transactions_file;
    transactions_file.open ("./../text-files/transactions.txt");
    if (transactions_file.is_open())
    {
        for (std::string line; std::getline(transactions_file, line); )
        {
            std::istringstream subfile;
            subfile.str(line);
            std::string data[4];
            int i = 0;
            for (std::string line2; std::getline(subfile, line2,',');)
            {
                *(data + i) = line2; i++;
            }
            int mid_id = std::stoi(*data);
            int mid_id_account = std::stoi(*(data+1));
            int mid_amount = std::stoi(*(data+3));

            Transaction* transaction_mid = new Transaction(mid_id, mid_id_account, *(data+2), mid_amount);
            for (iter = accounts.begin(); iter != accounts.end(); iter++)
            {
                if (mid_id_account == iter->get_id())
                {   
                    iter->add_transaction(transaction_mid);
                    iter->calculate_amount();
                }
            }
        }
    }
    transactions_file.close();

}

void sort_listOfAccounts(std::list <Account>& accounts)
{
    // Sorting List using Lambda Function as comparator
    accounts.sort([](Account & Account1, Account & Account2)
    {
        return Account1.get_amount() < Account2.get_amount();
    });
}

int main () {
    std::list <Account> accounts;
    std::list <Account>::iterator iter;
    create_accounts(accounts);

    Transaction* transaction_mid;
    perform_transactions(accounts, iter, transaction_mid);

    for (Account i : accounts)
    {
        i.showInfo();
    }

    sort_listOfAccounts(accounts);

    for (Account i : accounts)
    {
        i.showInfo();
    }

    delete(transaction_mid);
    return 0;
}
