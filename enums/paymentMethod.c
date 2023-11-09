#include <stdio.h>

enum PaymentMethod
{
    CREDIT_CARD,
    PAYPAL,
    BITCOIN,
    APPLE_PAY,
    Google_PAY
};

int main()
{
    enum PaymentMethod selectedMethod = Google_PAY;

    switch (selectedMethod)
    {
    case CREDIT_CARD:
        printf("Selected payment method: Credit Card\n");
        break;
    case PAYPAL:
        printf("Selected payment method: PayPal\n");
        break;
    case BITCOIN:
        printf("Selected payment method: Bitcoin\n");
        break;
    case APPLE_PAY:
        printf("Selected payment method: Apple Pay\n");
        break;
    case Google_PAY:
        printf("Selected payment method: Google Pay\n");
        break;
    default:
        printf("Invalid payment method selection.\n");
    }

    return 0;
}
