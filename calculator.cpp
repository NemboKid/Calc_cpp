# include  <iostream>
using namespace std;

int main()
{
    char op;
    double num1, num2;

    cout << "Choose if you want to use addition (+), subtraction (-), multiplication (*) or division (/): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op)
    {
          case '+':
              cout << num1 + num2;
              break;

          case '-':
              cout << num1 - num2;
              break;

          case '*':
              cout << num1 * num2;
              break;

          case '/':
              cout << num1 / num2;
              break;

          default:
                // Error check
                cout << "Oops, seems like you entered an unregonized operator. Only use +, -, * or /.";
                break;
      }
    return 0;
}