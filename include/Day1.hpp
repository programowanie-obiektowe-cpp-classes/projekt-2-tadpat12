#include <vector>
#include <iostream>
#include <fstream>
#include<vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

int day1(){
  std::vector<int> v1;
  std::vector<int> v2;
  std::vector<int> roznica;
  std::vector<int> ilosc;
  std::vector<int> mnozenie;
  ifstream infile("/home/tadusz/projekt-2-tadpat12/data/dane.txt");;   
 
  int num = 0; 
  
    if(infile.fail()) 
    { 
      cout << "error" << endl; 
      return 1; 
    }
    std::string line; 
    while(std::getline(infile, line)){
      std::stringstream ss(line);
      int col1=0 , col2 =0;

      if(ss>> col1 >> col2){
        v1.push_back(col1);
        v2.push_back(col2);
      } 

    }
  cout<< "Plik został otwarty" <<endl;
  infile.close(); 
  
  std::sort(v1.begin(),v1.end(),std::greater<int>());
  std::sort(v2.begin(),v2.end(),std::greater<int>());
  
  
  std::transform(v1.begin(),v1.end(),v2.begin(),std::back_inserter(roznica),[&](int a, int b){
    return std::abs(a - b);
  });
  for (const auto& val : roznica) {
        std::cout << val << std::endl;
  }
  auto result = std::reduce(roznica.begin(),roznica.end()); 

  for(auto v:v1){
    int liczba =0;
    for(auto vi:v2){
      if(v==vi){
        liczba++;
      }
    }
    ilosc.push_back(liczba);
  }
  std::transform(v1.begin(),v1.end(),ilosc.begin(),std::back_inserter(mnozenie),[&](int a, int b){
    return std::abs(a*b);
  });
  auto result1 = std::reduce(mnozenie.begin(),mnozenie.end()); 
  std::cout<< result1 <<endl;
  return result;
}