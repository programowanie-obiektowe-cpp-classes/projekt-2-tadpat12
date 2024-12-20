#include "PrintHello.hpp"
#include "Day1.hpp"
#include "Day2.hpp"
#include "Day3.hpp"
#include "Day5.hpp"
#include "Day6.hpp"
#include <iostream>
#include<fstream>
#include<vector>
#include <algorithm>
//#include <print>
#include <ranges>
#include <string_view>
#include <vector>
using namespace std::string_view_literals;
using namespace std;

int main(){

  int a = 0;
  a = day1();
  

  std::cout<<a<<std::endl;
  day2();
  day3();
  day5();
  day6();
  day6b();
  return 0;
}
    



