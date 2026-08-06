#include<iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter total numbers in the expression: ";
    cin >> a;

    double arr[100];
    char opr[100];

    cout << "Enter the numbers one by one:\n";

    for(int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter operators in the expression:\n";

    for(int i = 0; i < a - 1; i++)
    {
        cin >> opr[i];
    }

   
    for(int j = 0; j < a - 1; j++)
    {
        if(opr[j] == '*' || opr[j] == '/')
        {
            if(opr[j] == '/')
            {
                arr[j] = arr[j] / arr[j + 1];
            }

            else
            {
                arr[j] = arr[j] * arr[j + 1];
            }

            
            for(int k = j + 1; k < a - 1; k++)
            {
                arr[k] = arr[k + 1];
            }

           
            for(int k = j; k < a - 2; k++)
            {
                opr[k] = opr[k + 1];
            }

            a--;
            j--;
        }
    }

   
    for(int j = 0; j < a - 1; j++)
    {
        if(opr[j] == '+' || opr[j] == '-')
        {
            if(opr[j] == '+')
            {
                arr[j] = arr[j] + arr[j + 1];
            }

            else
            {
                arr[j] = arr[j] - arr[j + 1];
            }

           
            for(int k = j + 1; k < a - 1; k++)
            {
                arr[k] = arr[k + 1];
            }

            
            for(int k = j; k < a - 2; k++)
            {
                opr[k] = opr[k + 1];
            }

            a--;
            j--;
        }
    }

    cout << "the Final answer is:" << arr[0];

    return 0;
}