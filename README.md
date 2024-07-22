# Bank-management-system-using-CPP

## Overview

The Banking Management System is a simple console-based application written in C++. It allows users to manage customer bank accounts, including functionalities such as displaying records, searching for records, depositing and withdrawing amounts, deleting records, and updating customer information.

## Features

- **Display all records**: View all customer records with account numbers, names, and balances.
- **Search a record**: Find a customer record by account number.
- **Deposit amount**: Deposit a specified amount into a customer's account.
- **Withdraw amount**: Withdraw a specified amount from a customer's account.
- **Delete a record**: Remove a customer record from the system.
- **Update customer information**: Modify a customer's account number, name, or balance.

## How to Run

To run the Banking Management System, follow these steps:

1. **Download the project files**: Ensure you have all the necessary files and folders.
2. **Compile the code**: Use a C++ compiler to compile the `main.cpp` file.
    ```sh
    g++ main.cpp -o banking_system
    ```
3. **Run the executable**: Execute the compiled program.
    ```sh
    ./banking_system
    ```
4. **Follow the on-screen menu**: Enter the number corresponding to the action you want to perform.
    - Press 1 to display all records.
    - Press 2 to search a record.
    - Press 3 to deposit amount.
    - Press 4 to withdraw amount.
    - Press 5 to delete a record.
    - Press 6 to update customer information.
    - Press 0 to exit the program.

## Code Structure

- **accept(customer[], int)**: Accepts customer records.
- **display(customer[], int)**: Displays all customer records.
- **search(customer[], int, int)**: Searches for a customer record by account number.
- **deposit(customer[], int, int, int)**: Deposits a specified amount into a customer's account.
- **withdraw(customer[], int, int, int)**: Withdraws a specified amount from a customer's account.
- **deleteRecord(customer[], int&, int)**: Deletes a customer record.
- **updateRecord(customer[], int, int)**: Updates a customer's account number, name, or balance.

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## If we find that this can be used for personal use, it must be illegal under the Copyright Law of India 2000 (Section 43 of the Information Technology Act, 2000). This project is not allowed to be changed in any way because it may contain copyright offenses. Instead, it is for Educational purposes.

### Section 43 of the Information Technology Act, 2000 contains:

## provides for compensation to the aggrieved party up to One Crore of Rupees from a person, who without the permission of the owner or the person who is in charge of computer, computer system or computer net-work secures, access to the system or down-loads data or down-loads ...

![Khush diyora](https://github.com/user-attachments/assets/2cceda39-3a1a-44ff-aa96-556057017ee9)

