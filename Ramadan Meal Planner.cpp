#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    unordered_map<string, int> mealPlan;
    
    while (T--) {
        string command, dish;
        int calorie;
        cin >> command;
        
        if (command == "ADD") {
            cin >> dish >> calorie;
            mealPlan[dish] = calorie;
        } else if (command == "REMOVE") {
            cin >> dish;
            mealPlan.erase(dish);
        } else if (command == "QUERY") {
            cin >> dish;
            if (mealPlan.find(dish) != mealPlan.end()) {
                cout << mealPlan[dish] << endl;
            } else {
                cout << "NOT FOUND" << endl;
            }
        } else if (command == "TOTAL") {
            int totalCalories = 0;
            for (auto it = mealPlan.begin(); it != mealPlan.end(); ++it) {
                totalCalories += it->second;
            }
            cout << totalCalories << endl;
        }
    }
    
    return 0;
}
