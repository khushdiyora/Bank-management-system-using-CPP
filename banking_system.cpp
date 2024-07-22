#include <iostream>
#include<string>
using namespace std;

struct customer
{
    int account_no;
    char name[80];
    int balance;
};

void accept(customer[], int);
void display(customer[], int);
int search(customer[], int, int);
void deposit(customer[], int, int, int);
void withdraw(customer[], int, int, int);
void deleteRecord(customer[], int&, int);
void updateRecord(customer[], int, int);

int main()
{
    customer data[20];
    int n, choice, account_no, amount, index;
    cout << "Banking Management system\n\n";
    cout << "Number of customer records you want to enter? : ";
    cin >> n;
    accept(data, n);

    do
    {
        cout << "Banking System Menu : \n";
        cout << "Press 1 to display all records. \n";
        cout << "Press 2 to search a record. \n";
        cout << "Press 3 to deposit amount. \n";
        cout << "Press 4 to withdraw amount. \n";
        cout << "Press 5 to delete a record. \n";
        cout << "Press 6 to update customer information. \n";
        cout << "Press 0 to exit \n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            display(data, n);
            break;
        case 2:
            cout << "Enter account number to search : ";
            cin >> account_no;
            index = search(data, n, account_no);
            if (index == -1)
            {
                cout << "Record not found!! : ";
            }
            else
            {
                cout << "A/c Number : " << data[index].account_no << endl;
                cout << "Name       : " << data[index].name << endl;
                cout << "Balance    : " << data[index].balance << endl;
            }
            break;
        case 3:
            cout << "Enter the account number : ";
            cin >> account_no;
            cout << "Enter amount to deposit : ";
            cin >> amount;
            deposit(data, n, account_no, amount);
            break;
        case 4:
            cout << "Enter account number : ";
            cin >> account_no;
            cout << "Enter amount to withdraw : ";
            cin >> amount;
            withdraw(data, n, account_no, amount);
            break;
            case 5:
    cout << "Enter account number to delete record: ";
    cin >> account_no;
    deleteRecord(data, n, account_no);
    break;
case 6:
    cout << "Enter account number to update record: ";
    cin >> account_no;
    updateRecord(data, n, account_no);
    break;

        }
    } while (choice != 0);

    return 0;
}

void accept(customer list[80], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << "\nEnter data for Record #" << i + 1 << endl;
        cout << "Enter account_no : ";
        cin >> list[i].account_no;
        cin.ignore();
        cout << "Enter name       : ";
        cin.getline(list[i].name, 80);
        list[i].balance = 0;
    }
}

void display(customer list[80], int s)
{
    cout << "\nA/c No\tName\t\tBalance \n";
    for (int i = 0; i < s; i++)
    {
        cout << list[i].account_no << "\t\t" << list[i].name << "\t\t" << list[i].balance << endl;
    }
}

int search(customer list[80], int s, int number)
{
    for (int i = 0; i < s; i++)
    {
        if (list[i].account_no == number)
        {
            return i;
        }
    }
    return -1;
}

void deposit(customer list[], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i == -1)
    {
        cout << "Record not found" << endl;
    }
    else
    {
        list[i].balance += amt;
    }
}

void withdraw(customer list[], int s, int number, int amt)
{
    int i = search(list, s, number);
    if (i == -1)
    {
        cout << "Record not found" << endl;
    }
    else if (list[i].balance < amt)
    {
        cout << "Insufficient balance" << endl;
    }
    else
    {
        list[i].balance -= amt;
    }
}
void deleteRecord(customer list[], int& s, int number)
{
    int index = search(list, s, number);
    if (index == -1)
    {
        cout << "Record not found" << endl;
    }
    else
    {
        for (int i = index; i < s - 1; i++)
        {
            list[i] = list[i + 1];
        }
        s--;
        cout << "Record deleted successfully" << endl;
    }
}
void updateRecord(customer list[], int s, int number)
{
    int index = search(list, s, number);
    if (index == -1)
    {
        cout << "Record not found" << endl;
    }
    else
    {
        cout << "Enter new account_no : ";
        cin >> list[index].account_no;
        cin.ignore();
        cout << "Enter new name       : ";
        cin.getline(list[index].name, 80);
        cout << "Enter new balance    : ";
        cin >> list[index].balance;
        cout << "Record updated successfully" << endl;
    }
}