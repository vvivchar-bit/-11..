#include <iostream>
#include <memory>
#include <stdexcept>
using namespace std;

class Payment {
public:
    virtual void pay(double amount) = 0;
    virtual ~Payment() = default;
};

class CardPayment : public Payment {
public:
    void pay(double amount) override {
        cout << "Payment by card: " << amount << " UAH" << endl;
    }
};

class CashPayment : public Payment {
public:
    void pay(double amount) override {
        cout << "Payment by cash: " << amount << " UAH" << endl;
    }
};

class PayPalPayment : public Payment {
public:
    void pay(double amount) override {
        cout << "Payment by PayPal: " << amount << " UAH" << endl;
    }
};

class PaymentFactory {
public:
    static unique_ptr<Payment> createPayment(const string& type) {
        if (type == "card") {
            return make_unique<CardPayment>();
        }

        if (type == "cash") {
            return make_unique<CashPayment>();
        }

        if (type == "paypal") {
            return make_unique<PayPalPayment>();
        }

        throw invalid_argument("Unsupported payment type: " + type);
    }
};

int main() {
    string paymentType;
    double amount;

    cout << "Enter payment type (card, cash, paypal): ";
    cin >> paymentType;

    cout << "Enter amount: ";
    cin >> amount;

    try {
        unique_ptr<Payment> payment = PaymentFactory::createPayment(paymentType);
        payment->pay(amount);
    }
    catch (const invalid_argument& error) {
        cout << "Error: " << error.what() << endl;
    }

    return 0;
}