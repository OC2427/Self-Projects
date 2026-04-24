#include<iostream>
#include<iomanip>
#include<cctype>
using namespace std;

class Menu{
    public:
        string FoodItem[139] = {
            "Paneer Tikka","Hara Bhara Kebab","Veg Seekh Kebab","Dahi Kebab","Veg Pakora","Crispy Corn","Veg Cutlet",
            "Chicken Tikka","Chicken Malai Tikka","Chicken Seekh Kebab","Tandoori Chicken","Chicken 65","Fish Tikka","Boiled Eggs",
            "Tomato Soup","Sweet Corn Soup","Veg Hot & Sour Soup","Veg Manchow Soup","Mixed Vegetable Soup","Chicken Sweet Corn Soup","Chicken Hot & Sour Soup","Chicken Manchow Soup",
            "Veg Hakka Noodles","Veg Schezwan Noodles","Veg Fried Rice","Veg Schezwan Fried Rice","Veg Manchurian","Chilli Paneer","Chicken Hakka Noodles","Chicken Schezwan Noodles","Chicken Fried Rice","Chicken Schezwan Fried Rice","Chicken Manchurian","Chilli Chicken","Chicken Lollipop",
            "Paneer Butter Masala","Kadai Paneer","Palak Paneer","Malai Kofta","Mix Veg Curry","Veg Kolhapuri","Dal Tadka","Dal Makhani","Bhindi Masala","Jeera Aloo","Veg Handi","Paneer Lababdar","Paneer Bhurji","Veg Jalfrezi","Mushroom Masala","Kadai Mushroom","Mushroom Do Pyaza",
            "Butter Chicken","Kadai Chicken","Chicken Curry","Chicken Masala","Chicken Do Pyaza","Chicken Handi","Chicken Kolhapuri","Chicken Tikka Masala","Chicken Lababdar","Chicken Bhuna","Chicken Saag","Egg Curry","Egg Masala","Egg Bhurji","Fish Curry","Tandoori Fish Masala","Mutton Rogan Josh","Mutton Curry",
            "Plain Rice","Jeera Rice","Veg Pulao","Kashmiri Pulao","Veg Biryani","Paneer Biryani","Chicken Biryani","Egg Biryani","Mutton Biryani",
            "Roti","Butter Roti","Tandoori Roti","Naan","Butter Naan","Garlic Naan","Kulcha","Stuffed Kulcha","Lachha Paratha","Aloo Paratha","Plain Paratha","Rumali Roti",
            "Veg Sandwich","Grilled Sandwich","Cheese Sandwich","Veg Burger","Cheese Burger","Veg Wrap","Paneer Wrap","French Fries","Cheese Fries","Cheese Balls","Crispy Corn","Garlic Bread","Cheese Garlic Bread","Nachos with Cheese","Veg Roll","Paneer Roll",
            "Chicken Sandwich","Grilled Chicken Sandwich","Chicken Burger","Chicken Cheese Burger","Chicken Roll","Egg Roll","Chicken Nuggets","Chicken Wings","Chicken Cutlet","Omelette Sandwich",
            "Gulab Jamun","Rasgulla","Jalebi","Gajar Halwa","Chocolate Brownie","Ice Cream","Falooda",
            "Tea","Coffee","Black Coffee","Cold Coffee","Milk","Chocolate Milk","Fresh Lime Juice","Orange Juice","Mango Juice","Apple Juice","Soft Drinks","Mineral Water","Sweet Lassi","Buttermilk","Milkshake"},
            categories[12] = {"\nSTARTERS\n\nVeg Starters\n", "\nNon-Veg Starters\n", "\nSOUPS\n", "\nCHINESE\n", "\nMAIN COURSE\nVeg Main Course\n", "\nNon-Veg Main Course\n", "\nRICE DISHES\n", "\nBREADS\n", "\nSNACKS\nVeg Snacks\n", "\nNon-Veg Snacks\n", "\nDESERTS\n", "\nBEVERAGES\n"};
        int prices[139] = {
            220,180,200,190,120,150,140,
            260,270,280,300,250,280,90,
            120,130,140,140,130,160,170,170,
            180,190,200,210,220,240,220,230,240,250,260,260,280,
            280,270,260,250,220,230,180,220,150,200,170,240,230,240,250,260,260,
            320,300,280,290,300,310,320,330,310,300,290,180,170,160,300,320,350,330,
            120,140,180,200,220,240,260,230,300,
            20,25,30,40,50,60,50,70,60,50,40,30,
            100,120,130,150,170,140,160,130,150,140,120,150,180,140,160,
            140,160,180,200,160,120,170,200,220,180,130,
            60,60,70,80,120,90,110,
            20,25,30,60,30,50,40,60,70,70,40,20,60,40,80},
            categories_count[12] = {7, 7, 8, 13, 17, 18, 9, 12, 16, 10, 7, 15};
        void ShowMenu(){
            int n = 0;
            for (int i = 0; i < 12; i++){
                cout << "\n---------------------------------------------------" << endl << categories[i] << endl;
                for (int j = 0; j < categories_count[i]; j++){
                    cout << n+1 << ". " << setfill(' ') << left << setw(30) << FoodItem[n] << right << setw(3) << prices[n] << endl;
                    n++;
                }
            }
        }
};

class Order : public Menu{
    public:
        int num, quantity, ItemsList[100], QuantityList[100], OrderCount = 0, edit;
        string choice = "y", order = "";
        void CheckItem(){
            cout << "\nEnter item number to order : ";
            cin >> num;
            if (num > 139 || num < 1){
                cout << "\nInvalid Item, enter again :";
                CheckItem();
            }
        }void CheckQuantity(){
            cout << "\nEnter quantity of the item : ";
            cin >> quantity;
            if (quantity < 1){
                cout << "\nInvalid quantity, enter again :";
                CheckQuantity();
            }
        }
        void CheckChoice(){
            cout << "\nContinue? [y for yes / n for no] : ";
            cin >> choice;
            if(choice != "y" && choice != "Y" && choice != "n" && choice != "N"){
                cout << "\nInvalid choice, enter again";
                CheckChoice();
            }
        }
        void GetOrder(){
            do{
                CheckItem();
                CheckQuantity();
                CheckChoice();
                ItemsList[OrderCount] = num;
                QuantityList[OrderCount] = quantity;
                OrderCount++;
            } while(choice == "y" || choice == "Y");
        }
        void ShowOrder(){
            cout << "\n---------------------------------------------------\n\nORDER\n";
            for (int i = 0; i < OrderCount; i++){
                cout << ItemsList[i] << ". " << setfill(' ') << left << setw(30) << FoodItem[ItemsList[i]-1] << right << setw(12) << prices[ItemsList[i]-1] << " x " << QuantityList[i] << endl;
            }
        }
        void EditOrder(){
            while (true){
                cout << "\n---------------------------------------------------\n\nEDIT ORDER\n";
                ShowOrder();
                char editchoice;
                cout << "\nEdit Order? : [y for yes / n for no] : ";
                cin >> editchoice;
                int option;
                if (tolower(editchoice) == 'n') break;
                else if (tolower(editchoice) != 'y') cout << "\nInvalid choice.";
                else{
                    cout << "\n1. Add item\n2. Edit item\n3. Remove item\n4. Exit\n\nChoose option : ";
                    cin >> option;
                    if (option > 4 || option < 1){
                        cout << "\nInvalid choice, Enter again.";
                    }
                    else if (option == 1){
                        CheckItem();
                        CheckQuantity();
                        ItemsList[OrderCount] = num;
                        QuantityList[OrderCount] = quantity;
                        OrderCount++;
                    }
                    else if (option == 2){
                        ShowOrder();
                        cout << "\nEnter item number to edit : ";
                        cin >> edit;
                        int found = -1;
                        for (int i = 0; i < OrderCount; i++){
                            if (ItemsList[i] == edit) found = i;
                        }
                        if (found == -1){
                            cout << "\nItem not found!";
                        }
                        else{
                            cout << "\nEnter quantity to order : ";
                            cin >> QuantityList[found];
                        }
                    }
                    else if (option == 3){
                        ShowOrder();
                        cout << "\nEnter item to remove : ";
                        cin >> edit;
                        int found = -1;
                        for (int i = 0; i < OrderCount; i++){
                            if (ItemsList[i] == edit){
                                found = i;
                                break;
                            }
                        }
                        if (found == -1){
                            cout << "\nItem not found!";
                        }
                        else{
                            int temp1[OrderCount], temp2[OrderCount], j = 0;
                            for (int i = 0; i < OrderCount; i++){
                                if (edit != ItemsList[i]){
                                    temp1[j] = ItemsList[i];
                                    temp2[j] = QuantityList[i];
                                    j++;
                                }
                            }
                            OrderCount--;
                            for (int i = 0; i < OrderCount; i++){
                                ItemsList[i] = temp1[i];
                                QuantityList[i] = temp2[i];
                            }
                        }
                    }
                    else break;
                }
            }
        }
};

class Bill : public Order{
    public:
        void ShowBill(){
            int total = 0;
            cout << "\n---------------------------------------------------\n\nORDER\n";
            for (int i = 0; i < OrderCount; i++){
                total += prices[ItemsList[i]-1] * QuantityList[i];
            }
            for (int i = 0; i < OrderCount; i++){
                cout << ". " << setfill(' ') << left << setw(30) << FoodItem[ItemsList[i]-1] << right << setw(12) << prices[ItemsList[i]-1] << " x " << QuantityList[i] << " = " << prices[ItemsList[i]-1] * QuantityList[i] << endl;
            }
            cout << "\n---------------------------------------------------\n\nTotal = " << total;
        }
};

int main(){
    Bill M;
    M.ShowMenu();
    M.GetOrder();
    M.ShowOrder();
    M.EditOrder();
    M.ShowBill();
    return 0;
}