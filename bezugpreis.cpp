//Calculating sellprice of a product
#include <iostream>

int main () {

    int menge;
    float listenpreis;
    float rabatt;
    float skonto;
    float versand;
    float bezugpreis;
    std::cout << "Dieses Program kalkuliert den Bezugpreis einer Ware." << std::endl;
    std::cout << "Geben Sie Menge ein" << std::endl;
    std::cin >> menge;
    std::cout << "Sie haben für Menge eingegeben: " << menge << std::endl;
    std::cout << "Geben Sie Listenpreis für 1 Stck. Produkt in Euro ein." << std::endl;
    std::cin >> listenpreis;
    std::cout << "Sie haben für Listenpreis eingegeben: " << listenpreis << std::endl;
    std::cout << "Geben Sie den Rabatt in Prozent ein." << std::endl;
    std::cin >> rabatt;
    std::cout << "Sie haben einen Rabatt in Prozent eingegeben von: " << rabatt << std::endl;
    std::cout << "Geben Sie SKonto in Prozent ein." << std::endl;
    std::cin >> skonto;
    std::cout << "Sie haben für skonto folgenden Prozentsatz eingegeben: " << skonto << std::endl;
    std::cout << "Geben Sie die Versandkosten in Euro ein." << std::endl;
    std::cin >> versand;
    std::cout << "Sie haben für die Versandkosten das folgende Euro amount eingegeben: " << versand << std::endl;

    bezugpreis = (menge * listenpreis * (1 - rabatt/100.0)) * (1 - skonto/100.0) + versand;
    std::cout << "Der Bezugpreis ist in Euro: " << bezugpreis << std::endl;

    return 0;
}