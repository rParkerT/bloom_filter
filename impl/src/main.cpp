#include "bloom_filter.h"
#include <iostream>

int main() {
  bloom_filter::BloomFilter bf;
  bf.insert("153.53.37.99");
  bf.insert("9.84.168.230");
  bf.insert("194.6.107.100");
  bf.insert("39.123.199.39");
  bf.insert("24.144.113.148");
  bf.insert("212.64.58.25");
  bf.insert("228.233.39.223");
  bf.insert("251.178.163.40");
  bf.insert("39.104.227.42");
  bf.insert("184.221.67.185");
  bf.insert("252.175.19.107");
  bf.insert("103.64.219.118");
  bf.insert("35.202.248.76");
  bf.insert("78.234.65.180");
  bf.insert("6.78.80.48");
  bf.insert("157.251.9.161");
  bf.insert("191.187.88.109");
  bf.insert("49.77.112.15");
  bf.insert("38.61.102.207");
  bf.insert("111.45.136.187");

  std::cout << "Check for few IP addresses, of which none is on the list:"
            << std::endl;
  bf.lookup("184.84.35.78");
  bf.lookup("39.163.199.39");
  bf.lookup("227.50.47.119");
  bf.lookup("194.221.67.185");
  bf.lookup("184.222.67.185");
  bf.lookup("5.78.80.48");
  bf.lookup("167.251.9.161");
  bf.lookup("157.251.9.160");
  bf.insert("191.171.13.7");
  bf.insert("45.134.118.8");
  bf.insert("191.187.68.109");
  bf.insert("161.185.25.203");
  bf.insert("191.45.136.187");
  bf.insert("111.45.136.188");

  return 0;
}
