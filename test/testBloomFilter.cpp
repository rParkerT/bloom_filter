#include "bloom_filter.h"
#include <catch.hpp>

TEST_CASE(
    "BloomFilter - Check if all 100 generated IP addresses can be found") {
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
  bf.insert("35.17.187.244");
  bf.insert("191.217.167.212");
  bf.insert("147.148.150.0");
  bf.insert("192.106.173.19");
  bf.insert("91.115.228.143");
  bf.insert("45.133.118.8");
  bf.insert("122.50.74.7");
  bf.insert("71.166.50.29");
  bf.insert("244.207.233.103");
  bf.insert("155.153.5.41");
  bf.insert("231.231.210.221");
  bf.insert("210.30.161.164");
  bf.insert("58.59.213.150");
  bf.insert("208.216.28.192");
  bf.insert("71.124.20.138");
  bf.insert("215.53.193.185");
  bf.insert("67.104.0.33");
  bf.insert("132.226.62.142");
  bf.insert("47.219.141.180");
  bf.insert("2.248.212.189");
  bf.insert("109.105.253.79");
  bf.insert("10.27.192.106");
  bf.insert("84.99.81.182");
  bf.insert("151.218.237.189");
  bf.insert("188.250.14.32");
  bf.insert("197.101.159.68");
  bf.insert("248.132.7.97");
  bf.insert("160.227.88.234");
  bf.insert("245.210.200.234");
  bf.insert("187.155.135.125");
  bf.insert("96.101.159.204");
  bf.insert("209.222.115.193");
  bf.insert("83.114.165.91");
  bf.insert("87.209.99.129");
  bf.insert("0.30.179.197");
  bf.insert("160.6.121.132");
  bf.insert("186.75.10.26");
  bf.insert("88.103.170.28");
  bf.insert("40.177.246.107");
  bf.insert("131.141.91.221");
  bf.insert("7.167.29.214");
  bf.insert("145.10.72.64");
  bf.insert("159.232.95.83");
  bf.insert("47.36.165.128");
  bf.insert("5.61.231.124");
  bf.insert("21.194.78.174");
  bf.insert("44.216.62.179");
  bf.insert("162.73.209.177");
  bf.insert("92.231.172.177");
  bf.insert("163.219.203.14");
  bf.insert("205.121.57.238");
  bf.insert("177.175.2.64");
  bf.insert("237.176.228.186");
  bf.insert("4.216.185.130");
  bf.insert("51.247.23.114");
  bf.insert("232.18.251.114");
  bf.insert("29.247.62.166");
  bf.insert("183.44.73.135");
  bf.insert("196.152.236.100");
  bf.insert("178.223.75.13");
  bf.insert("152.190.113.184");
  bf.insert("160.185.25.203");
  bf.insert("13.24.202.1");
  bf.insert("78.9.24.157");
  bf.insert("63.255.215.184");
  bf.insert("191.171.13.6");
  bf.insert("21.80.225.102");
  bf.insert("161.249.195.198");
  bf.insert("186.151.67.197");
  bf.insert("20.238.17.242");
  bf.insert("154.150.146.30");
  bf.insert("125.77.11.179");
  bf.insert("162.250.114.12");
  bf.insert("143.253.109.153");
  bf.insert("211.130.195.58");
  bf.insert("217.113.215.194");
  bf.insert("170.248.130.134");
  bf.insert("184.78.139.189");
  bf.insert("207.211.206.129");
  bf.insert("227.50.46.119");

  CHECK(bf.lookup("153.53.37.99") == true);
  CHECK(bf.lookup("9.84.168.230") == true);
  CHECK(bf.lookup("194.6.107.100") == true);
  CHECK(bf.lookup("39.123.199.39") == true);
  CHECK(bf.lookup("24.144.113.148") == true);
  CHECK(bf.lookup("212.64.58.25") == true);
  CHECK(bf.lookup("228.233.39.223") == true);
  CHECK(bf.lookup("251.178.163.40") == true);
  CHECK(bf.lookup("39.104.227.42") == true);
  CHECK(bf.lookup("184.221.67.185") == true);
  CHECK(bf.lookup("252.175.19.107") == true);
  CHECK(bf.lookup("103.64.219.118") == true);
  CHECK(bf.lookup("35.202.248.76") == true);
  CHECK(bf.lookup("78.234.65.180") == true);
  CHECK(bf.lookup("6.78.80.48") == true);
  CHECK(bf.lookup("157.251.9.161") == true);
  CHECK(bf.lookup("191.187.88.109") == true);
  CHECK(bf.lookup("49.77.112.15") == true);
  CHECK(bf.lookup("38.61.102.207") == true);
  CHECK(bf.lookup("111.45.136.187") == true);
  CHECK(bf.lookup("35.17.187.244") == true);
  CHECK(bf.lookup("191.217.167.212") == true);
  CHECK(bf.lookup("147.148.150.0") == true);
  CHECK(bf.lookup("192.106.173.19") == true);
  CHECK(bf.lookup("91.115.228.143") == true);
  CHECK(bf.lookup("45.133.118.8") == true);
  CHECK(bf.lookup("122.50.74.7") == true);
  CHECK(bf.lookup("71.166.50.29") == true);
  CHECK(bf.lookup("244.207.233.103") == true);
  CHECK(bf.lookup("155.153.5.41") == true);
  CHECK(bf.lookup("231.231.210.221") == true);
  CHECK(bf.lookup("210.30.161.164") == true);
  CHECK(bf.lookup("58.59.213.150") == true);
  CHECK(bf.lookup("208.216.28.192") == true);
  CHECK(bf.lookup("71.124.20.138") == true);
  CHECK(bf.lookup("215.53.193.185") == true);
  CHECK(bf.lookup("67.104.0.33") == true);
  CHECK(bf.lookup("132.226.62.142") == true);
  CHECK(bf.lookup("47.219.141.180") == true);
  CHECK(bf.lookup("2.248.212.189") == true);
  CHECK(bf.lookup("109.105.253.79") == true);
  CHECK(bf.lookup("10.27.192.106") == true);
  CHECK(bf.lookup("84.99.81.182") == true);
  CHECK(bf.lookup("151.218.237.189") == true);
  CHECK(bf.lookup("188.250.14.32") == true);
  CHECK(bf.lookup("197.101.159.68") == true);
  CHECK(bf.lookup("248.132.7.97") == true);
  CHECK(bf.lookup("160.227.88.234") == true);
  CHECK(bf.lookup("245.210.200.234") == true);
  CHECK(bf.lookup("187.155.135.125") == true);
  CHECK(bf.lookup("96.101.159.204") == true);
  CHECK(bf.lookup("209.222.115.193") == true);
  CHECK(bf.lookup("83.114.165.91") == true);
  CHECK(bf.lookup("87.209.99.129") == true);
  CHECK(bf.lookup("0.30.179.197") == true);
  CHECK(bf.lookup("160.6.121.132") == true);
  CHECK(bf.lookup("186.75.10.26") == true);
  CHECK(bf.lookup("88.103.170.28") == true);
  CHECK(bf.lookup("40.177.246.107") == true);
  CHECK(bf.lookup("131.141.91.221") == true);
  CHECK(bf.lookup("7.167.29.214") == true);
  CHECK(bf.lookup("145.10.72.64") == true);
  CHECK(bf.lookup("159.232.95.83") == true);
  CHECK(bf.lookup("47.36.165.128") == true);
  CHECK(bf.lookup("5.61.231.124") == true);
  CHECK(bf.lookup("21.194.78.174") == true);
  CHECK(bf.lookup("44.216.62.179") == true);
  CHECK(bf.lookup("162.73.209.177") == true);
  CHECK(bf.lookup("92.231.172.177") == true);
  CHECK(bf.lookup("163.219.203.14") == true);
  CHECK(bf.lookup("205.121.57.238") == true);
  CHECK(bf.lookup("177.175.2.64") == true);
  CHECK(bf.lookup("237.176.228.186") == true);
  CHECK(bf.lookup("4.216.185.130") == true);
  CHECK(bf.lookup("51.247.23.114") == true);
  CHECK(bf.lookup("232.18.251.114") == true);
  CHECK(bf.lookup("29.247.62.166") == true);
  CHECK(bf.lookup("183.44.73.135") == true);
  CHECK(bf.lookup("196.152.236.100") == true);
  CHECK(bf.lookup("178.223.75.13") == true);
  CHECK(bf.lookup("152.190.113.184") == true);
  CHECK(bf.lookup("160.185.25.203") == true);
  CHECK(bf.lookup("13.24.202.1") == true);
  CHECK(bf.lookup("78.9.24.157") == true);
  CHECK(bf.lookup("63.255.215.184") == true);
  CHECK(bf.lookup("191.171.13.6") == true);
  CHECK(bf.lookup("21.80.225.102") == true);
  CHECK(bf.lookup("161.249.195.198") == true);
  CHECK(bf.lookup("186.151.67.197") == true);
  CHECK(bf.lookup("20.238.17.242") == true);
  CHECK(bf.lookup("154.150.146.30") == true);
  CHECK(bf.lookup("125.77.11.179") == true);
  CHECK(bf.lookup("162.250.114.12") == true);
  CHECK(bf.lookup("143.253.109.153") == true);
  CHECK(bf.lookup("211.130.195.58") == true);
  CHECK(bf.lookup("217.113.215.194") == true);
  CHECK(bf.lookup("170.248.130.134") == true);
  CHECK(bf.lookup("184.78.139.189") == true);
  CHECK(bf.lookup("207.211.206.129") == true);
  CHECK(bf.lookup("227.50.46.119") == true);
}
