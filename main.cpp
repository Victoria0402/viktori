#include <iostream>
using namespace std;
// Декларація функції
bool IsPalindrome(int K);
void proc30();
void boolean11();
bool CheckInput(int A, int B);
bool AreNumbersSameParity(int A, int B);
void Integer20();
int InputSeconds();
int CalculateMinutes(int seconds);
void OutputResult(int minutes);
int main()
{

    cout << "Enter task number:" << endl;
    int menu;
    cin >> menu;
   
        switch (menu)
        {
        case 1:
            proc30();
            break;
        case 2:
            boolean11();
            break;
        case 3:
            Integer20();
            break;
        default:
            cout << "Only 1,2 and 3" << endl;
            break;
        }
   
    system("pause");
    return 0;
}
bool IsPalindrome(int K) {
    int reversedNum = 0;
    int originalNum = K;
    int temp = K;

    while (temp > 0) {
        int digit = temp % 10;
        reversedNum = reversedNum * 10 + digit;
        temp /= 10;
    }

    return (originalNum == reversedNum) && (originalNum > 0 && originalNum < 1000);
}
void proc30() {
    int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    cout << "Palindrome 1:" << endl;
    cin >> p1;
    cout << "Palindrome 2:" << endl;
    cin >> p2;
    cout << "Palindrome 3:" << endl;
    cin >> p3;
    cout << "Palindrome 4:" << endl;
    cin >> p4;
    cout << "Palindrome 5:" << endl;
    cin >> p5;
    cout << "1- " <<boolalpha <<IsPalindrome(p1) << endl;
    cout << "2- " << boolalpha << IsPalindrome(p2) << endl;
    cout << "3- " << boolalpha << IsPalindrome(p3) << endl;
    cout << "4- " << boolalpha << IsPalindrome(p4) << endl;
    cout << "5- " << boolalpha << IsPalindrome(p5) << endl;

}
// Функція для перевірки вхідних даних
bool CheckInput(int A, int B) {
   
    return A<=100 && A>=-100 && B>=-100 && B<=100; 
}

// Функція для розрахунку результату
bool AreNumbersSameParity(int A, int B) {
    return (A % 2 == B % 2);
}
void boolean11() {

    int A, B;
    cout << "Enter two integers A і B:\n";
    cin >> A >> B;

    // Перевірка вхідних даних
    if (!CheckInput(A, B)) {
        cout << "Invalid input data. Calculations have not been completed.\n";
        
    }
    else
    {
// Розрахунок і виведення результату
    if (AreNumbersSameParity(A, B)) {
       cout << "Numbers A and B have the same parity.\n";
    }
    else {
        cout << "Numbers A and B have different parity.\n";
    }
    }
}
// Функція введення вхідних значень з консолі
int InputSeconds() {
    int seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    return seconds;
}

// Функція підрахунку результату
int CalculateMinutes(int seconds) {
    const int secondsPerHour = 60;  // 1 хвилина = 60 секунд
    return seconds / secondsPerHour;
}

// Функція виведення результату в консоль
void OutputResult(int minutes) {
    cout << "A day has passed since the beginning of the day " << minutes << " minutes.\n";
}
void Integer20() {
    // Введення вхідних значень
    int n = InputSeconds();

    // Перевірка коректності введених даних та розрахунок результату
    if (n >= 0) {
        int minutes = CalculateMinutes(n);

        // Виведення результату
        OutputResult(minutes);
    }
    else {
        cout << "The entered value is incorrect. Please enter a non-negative number.\n";
    }
}