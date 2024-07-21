#include <iostream>
#include <string>
using namespace std;
int main()
{
    auto duplicate=[=]()
    {
        string str = "jhon12Doe14@gmail18.com8";
        int count = 0;
        for (int i = 0; i < str.size(); i++)
        {

            if (isdigit(str[i]))
            {
                count = 0;
                for (int j = i + 1; j < str.size(); j++)
                {
                    if (str[i] == str[j])
                    {
                        count++;
                    }
                }
                if (count > 0)
                {
                    cout << "The count of '" << str[i] << "' is " << count + 1 << endl;
                }
            }
        }
    };

    duplicate();
        return 0;
}

