 #include <iostream>
using namespace std;
class surplus_cap
{
    string part1;
    string part2;
    string part3;
    float inter_cap_part1;
    float inter_cap_part2;
    float inter_cap_part3;
    float inter_part1;
    float inter_part2;
    float inter_part3;
    float capital_per_unit_profit_part1;
    float capital_per_unit_profit_part2;
    float capital_per_unit_profit_part3;
    float base_capital;
    float proportionate_capital_part1;
    float proportionate_capital_part2;
    float proportionate_capital_part3;
    float surplus_capital_part1;
    float surplus_capital_part2;
    float surplus_capital_part3;
    float profit_sharing_ratio_part1;
    float profit_sharing_ratio_part2;
    float profit_sharing_ratio_part3;
    float revised_proportionate_capital_part1;
    float revised_proportionate_capital_part2;
    float revised_proportionate_capital_part3;
    float absolute_surplus_capital_part1;
    float absolute_surplus_capital_part2;
    float absolute_surplus_capital_part3;

public:
    void details()
    {
        cout << "Enter the name of the partner 1" << endl;
        cin >> part1;
        cout << "Enter the name of the  partner 2" << endl;
        cin >> part2;
        cout << "Enter the name of the partner 3" << endl;
        cin >> part3;
        cout << "Enter the interest of capital of " << part1 << endl;
        cin >> inter_cap_part1;
        while (inter_cap_part1 <= 0)
        {
            cout << "The interest on capital cannot be zero or  negative" << endl;
            cout << "Enter the interest of capital of " << part1 << endl;
            cin >> inter_cap_part1;
        }
        cout << "Enter the interest of capital of " << part2 << endl;
        cin >> inter_cap_part2;
        while (inter_cap_part2 <= 0)
        {
            cout << "The interest on capital cannot be zero or  negative" << endl;
            cout << "Enter the interest of capital of " << part2 << endl;
            cin >> inter_cap_part2;
        }
        cout << "Enter the interest of capital of " << part3 << endl;
        cin >> inter_cap_part3;
        while (inter_cap_part3 <= 0)
        {
            cout << "The interest on capital cannot be zero or  negative" << endl;
            cout << "Enter the interest of capital of " << part3 << endl;
            cin >> inter_cap_part3;
        }
        cout << "Enter the profit sharing ratio" << endl;
        cin >> inter_part1 >> inter_part2 >> inter_part3;
        while (inter_part1 <= 0 || inter_part2 <= 0 || inter_part3 <= 0)
        {
            cout << "The ratio cannot be zero or negative" << endl;
            cout << "Enter the profit sharing ratio" << endl;
            cin >> inter_part1 >> inter_part2 >> inter_part3;
        }
    }
    void display()
    {
        cout << part1 << "     " << part2 << "     " << part3 << "     " << endl;
        cout << inter_cap_part1 << "     " << inter_cap_part2 << "     " << inter_cap_part3 << endl;
        cout << "Thee entered ratio: " << inter_part1 << "    " << inter_part2 << "   " << inter_part3 << endl;
    }
    void Capital_per_unit_of_profit_sharing_ratio()
    {
        capital_per_unit_profit_part1 = (inter_cap_part1 / inter_part1);
        capital_per_unit_profit_part2 = (inter_cap_part2 / inter_part2);
        capital_per_unit_profit_part3 = (inter_cap_part3 / inter_part3);
        cout << "The capital per unit of sharing ratio of " << part1 << " : " << capital_per_unit_profit_part1 << endl;
        cout << "The capital per unit of sharing ratio of " << part2 << " : " << capital_per_unit_profit_part2 << endl;
        cout << "The capital per unit of sharing ratio of " << part3 << " : " << capital_per_unit_profit_part3 << endl;
    }
    void base_capital1()
    {
        if (capital_per_unit_profit_part1 < capital_per_unit_profit_part2 && capital_per_unit_profit_part1 < capital_per_unit_profit_part3)
        {
            base_capital = capital_per_unit_profit_part1;
        }
        else if (capital_per_unit_profit_part2 < capital_per_unit_profit_part1 && capital_per_unit_profit_part2 < capital_per_unit_profit_part3)
        {
            base_capital = capital_per_unit_profit_part2;
        }
        else if (capital_per_unit_profit_part3 < capital_per_unit_profit_part1 && capital_per_unit_profit_part3 < capital_per_unit_profit_part1)
        {
            base_capital = capital_per_unit_profit_part3;
        }
        cout << "The base capital : " << base_capital << endl;
    }
    void proportionate_capital()
    {
        proportionate_capital_part1 = base_capital * inter_part1;
        proportionate_capital_part2 = base_capital * inter_part2;
        proportionate_capital_part3 = base_capital * inter_part3;
        cout << "The proportionate capital of " << part1 << " :" << proportionate_capital_part1 << endl;
        cout << "The proportionate capital of " << part2 << " :" << proportionate_capital_part2 << endl;
        cout << "The proportionate capital of " << part3 << " :" << proportionate_capital_part3 << endl;
    }
    void surplus_capital()
    {
        surplus_capital_part1 = inter_cap_part1 - proportionate_capital_part1;
        surplus_capital_part2 = inter_cap_part2 - proportionate_capital_part2;
        surplus_capital_part3 = inter_cap_part3 - proportionate_capital_part3;
        if (surplus_capital_part1 == 0)
        {
            cout << "The surplus capital of " << part1 << " : "
                 << " " << endl;
        }
        else
        {
            cout << "The surplus capital of " << part1 << " : " << surplus_capital_part1 << endl;
        }
        if (surplus_capital_part2 == 0)
        {
            cout << "The surplus capital of " << part2 << " : "
                 << " " << endl;
        }
        else
        {
            cout << "The surplus capital of " << part2 << " : " << surplus_capital_part2 << endl;
        }
        if (surplus_capital_part3 == 0)
        {
            cout << "The surplus capital of " << part3 << " : "
                 << " " << endl;
        }
        else
        {
            cout << "The surplus capital of " << part3 << " : " << surplus_capital_part3 << endl;
        }
    }
    void profit_sharing_ratio()
    {
        profit_sharing_ratio_part1 = surplus_capital_part1 / inter_part1;
        profit_sharing_ratio_part2 = surplus_capital_part2 / inter_part2;
        profit_sharing_ratio_part3 = surplus_capital_part3 / inter_part3;
        if (surplus_capital_part1 == 0)
        {
            cout << "The profit sharing ratio of " << part1 << " : "
                 << " " << endl;
        }
        else
        {
            cout << "The profit sharing ratio of " << part1 << " : " << profit_sharing_ratio_part1 << endl;
        }
        if (surplus_capital_part2 == 0)
        {
            cout << "The profit sharing ratio of " << part2 << " : "
                 << " " << endl;
        }
        else
        {
            cout << "The profit sharing ratio of " << part2 << " : " << profit_sharing_ratio_part2 << endl;
        }
        if (surplus_capital_part3 == 0)
        {
            cout << "The profit sharing ratio of " << part3 << " : "
                 << " " << endl;
        }
        else
        {
            cout << "The profit sharing ratio of " << part3 << " : " << profit_sharing_ratio_part3 << endl;
        }
    }
    float revised_base_capital;
    void revised_based_capital1()
    {
        if (profit_sharing_ratio_part1 == 0)
        {
            if (profit_sharing_ratio_part2 < profit_sharing_ratio_part3)
            {
                revised_base_capital = profit_sharing_ratio_part2;
            }
            else if (profit_sharing_ratio_part3 < profit_sharing_ratio_part2)
            {
                revised_base_capital = profit_sharing_ratio_part3;
            }
        }
        else if (profit_sharing_ratio_part1 < profit_sharing_ratio_part2 && profit_sharing_ratio_part1 < profit_sharing_ratio_part3)
        {
            revised_base_capital = profit_sharing_ratio_part1;
        }
        if (profit_sharing_ratio_part2 == 0)
        {
            if (profit_sharing_ratio_part1 < profit_sharing_ratio_part3)
            {
                revised_base_capital = profit_sharing_ratio_part1;
            }
            else if (profit_sharing_ratio_part3 < profit_sharing_ratio_part1)
            {
                revised_base_capital = profit_sharing_ratio_part3;
            }
        }
        else if (profit_sharing_ratio_part2 < profit_sharing_ratio_part1 && profit_sharing_ratio_part2 < profit_sharing_ratio_part3)
        {
            revised_base_capital = profit_sharing_ratio_part2;
        }
        if (profit_sharing_ratio_part3 == 0)
        {
            if (profit_sharing_ratio_part1 < profit_sharing_ratio_part2)
            {
                revised_base_capital = profit_sharing_ratio_part1;
            }
            else if (profit_sharing_ratio_part2 < profit_sharing_ratio_part1)
            {
                revised_base_capital = profit_sharing_ratio_part2;
            }
        }
        else if (profit_sharing_ratio_part3 < profit_sharing_ratio_part1 && profit_sharing_ratio_part3 < profit_sharing_ratio_part2)
        {
            revised_base_capital = profit_sharing_ratio_part3;
        }
        cout << "The revised base capital is: " << revised_base_capital << endl;
    }
    void revised_proportionate_capital1()
    {
        if (surplus_capital_part1 == 0)
        {
            cout << "The revised proportionate capital of " << part1 << " : "
                 << " " << endl;
        }
        else if (surplus_capital_part1 != 0)
        {
            revised_proportionate_capital_part1 = inter_part1 * revised_base_capital;
            cout << "The revised proportionate capital of " << part1 << " : " << revised_proportionate_capital_part1 << endl;
        }
        if (surplus_capital_part2 == 0)
        {
            cout << "The revised proportionate capital of " << part2 << " : "
                 << " " << endl;
        }
        else if (surplus_capital_part2 != 0)
        {
            revised_proportionate_capital_part2 = inter_part2 * revised_base_capital;
            cout << "The revised proportionate capital of " << part2 << " : " << revised_proportionate_capital_part2 << endl;
        }
        if (surplus_capital_part3 == 0)
        {
            cout << "The revised proportionate capital of " << part3 << " : "
                 << " " << endl;
        }
        else if (surplus_capital_part3 != 0)
        {
            revised_proportionate_capital_part3 = inter_part3 * revised_base_capital;
            cout << "The revised proportionate capital of " << part3 << " : " << revised_proportionate_capital_part3 << endl;
        }
    }
    void absolute_surplus_capital1()
    {
        if (surplus_capital_part1 == 0 && revised_proportionate_capital_part1 == 0)
        {
            cout << "The absolute surplus capital of " << part1 << " : "
                 << " " << endl;
        }
        else if (surplus_capital_part1 != 0 && revised_proportionate_capital_part1 != 0)
        {
            absolute_surplus_capital_part1 = surplus_capital_part1 - revised_proportionate_capital_part1;
            if (absolute_surplus_capital_part1 == 0)
            {
                cout << "The absolute surplus capital of " << part1 << " : "
                     << " " << endl;
            }
            else
            {
                cout << "The absolute surplus capital of " << part1 << " : " << absolute_surplus_capital_part1 << endl;
            }
        }
        if (surplus_capital_part2 == 0 && revised_proportionate_capital_part2 == 0)
        {
            cout << "The absolute surplus capital of " << part2 << " : "
                 << " " << endl;
        }
        else if (surplus_capital_part2 != 0 && revised_proportionate_capital_part2 != 0)
        {
            absolute_surplus_capital_part2 = surplus_capital_part2 - revised_proportionate_capital_part2;
            if (absolute_surplus_capital_part2 == 0)
            {
                cout << "The absolute surplus capital of " << part2 << " : "
                     << " " << endl;
            }
            else
            {
                cout << "The absolute surplus capital of " << part2 << " : " << absolute_surplus_capital_part2 << endl;
            }
        }
        if (surplus_capital_part3 == 0 && revised_proportionate_capital_part3 == 0)
        {
            cout << "The absolute surplus capital of " << part3 << " : "
                 << " " << endl;
        }
        else if (surplus_capital_part3 != 0 && revised_proportionate_capital_part3 != 0)
        {
            absolute_surplus_capital_part3 = surplus_capital_part3 - revised_proportionate_capital_part3;
            if (absolute_surplus_capital_part3 == 0)
            {
                cout << "The absolute surplus capital of " << part3 << " : "
                     << " " << endl;
            }
            else
            {
                cout << "The absolute surplus capital of " << part3 << " : " << absolute_surplus_capital_part3 << endl;
            }
        }
    }
};
int main()
{
    surplus_cap sc;
    sc.details();
    sc.display();
    sc.Capital_per_unit_of_profit_sharing_ratio();
    sc.base_capital1();
    sc.proportionate_capital();
    sc.surplus_capital();
    sc.profit_sharing_ratio();
    sc.revised_based_capital1();
    sc.revised_proportionate_capital1();
    sc.absolute_surplus_capital1();
    return 0;
}