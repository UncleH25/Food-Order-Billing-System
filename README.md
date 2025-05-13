# 🍽️ Food Order Billing System

A C++ program that simulates a basic food ordering and billing system. It allows users to select an item from a fixed menu, input the desired quantity, calculates the total cost, and applies a discount if applicable.

## 📄 Description

This console-based application enables users to:
* View a menu of food items with prices
* Select an item by its menu number (1–6)
* Enter the desired quantity
* Receive a bill summary showing:
  * Item name
  * Quantity
  * Price per item
  * Total before Discount
  * Discount
  * Final Payable Amount
    
If the total exceeds R200, a 10% discount is applied.

# 📋 Menu Items

|**No.**|**Item**|**Price(R)**|
|-------|--------|------------|
|   1   |  Pasta |    54.50   |
|   2   | Burger |    45.00   |
|   3   | Pizza  |    60.00   |
|   4   | Sandwich|   30.00   |
|   5   | Fries  |    20.00   |    
|   6   | Drink  |    15.00   |

# 🧾 Sample Output
```
Welcome to the Food Order Billing System!
Our Menu
----------------------------------------
1. Pasta - R54.50
2. Burger - R45.00
3. Pizza - R60.00
4. Sandwich - R30.00
5. Fries - R20.00
6. Drink - R15.00

Please enter the number of the item you want to order (1-6): 3

Please enter the quantity: 4
```
```
Your order summary:
----------------------------------------
Item: Pizza
Quantity: 4
Price per item: R60.00
Total before discount: R240.00
Discount applied: 10%
Final total: R216.00
----------------------------------------
Thank you for your order!
```

## 🛠️ Technologies Used
* Language: C++
* IDE Used: Visual Studio (But any IDE will work)

## 📦 How to Run
1. Clone The Repo Using CMD:
```
git clone https://github.com/UncleH25/Food-Order-Billing-System.git
cd health_check_analyser
```

3. From a terminal (in the extracted folder), run:
```
g++ -o food_order_billing_system main.cpp
./food-order-billing-system
```

4. Or, if you're using an IDE like Code::Blocks or Visual Studio, open the file and press **Run** or **Build and Run**.

## 📌 License
This project is open source and free to use under the **MIT License**.
