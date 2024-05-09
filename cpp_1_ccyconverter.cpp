//
//  cpp_1_ccyconverter.cpp
//  ccyconverter
//
//  Created by Nora Csiszar on 30.04.24.
//
#include <iostream>

int main() {
 
 //declaring variables for the savings
  double eur;
  double chf;
  double gbp;
  double usd;
  int conversation_rate_EUR_USD;
  int conversation_rate_CHF_USD;
  int conversation_rate_GBP_USD;

//asking the number of currencies from user
std::cout << "Enter the number of EUR: \n";
std::cin >> eur;

std::cout << "Enter the number of CHF: \n";
std::cin >> chf;

std::cout <<"Enter the number of GBP: \n";
std::cin >> gbp;
  
  //conversation rate1 from euros to USD
  std::cout <<"Enter the current coversation rate for EUR/USD: \n";
  std::cin >> conversation_rate_EUR_USD;
  //conversation rate2 from CHF to USD
  std::cout <<"Enter the current coversation rate for CHF/USD: \n";
  std::cin >> conversation_rate_CHF_USD;
  //conversation rate3 from GBP to USD
  std::cout <<"Enter the current coversation rate for GBP/USD: \n";
  std::cin >> conversation_rate_GBP_USD;

  usd = (conversation_rate_EUR_USD * eur)
            + (conversation_rate_CHF_USD * chf)
            + (conversation_rate_GBP_USD * gbp);

  std::cout <<"US Dollars = $" << usd << "\n";
            
            
   return 0;        
            
            
            }
