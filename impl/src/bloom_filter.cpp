#include "bloom_filter.h"
#include <bitset>
#include <boost/functional/hash.hpp>
#include <iostream>

namespace bloom_filter {

class BloomFilter::BloomFilterImpl {
private:
  std::bitset<1000> bits;

  std::size_t hash_value(const std::string &ip_addr) {
    std::size_t seed = 0;
    for (char c : ip_addr) {
      boost::hash_combine(seed, c);
    }
    return seed % 1000;
  }

public:
  void insert(BloomFilter *bf, const std::string &ip_addr);
  bool lookup(BloomFilter *bf, const std::string &ip_addr);
};

void BloomFilter::BloomFilterImpl::insert(BloomFilter *bf,
                                          const std::string &ip_addr) {
  bits.set(hash_value(ip_addr));
}

bool BloomFilter::BloomFilterImpl::lookup(BloomFilter *bf,
                                          const std::string &ip_addr) {
  if (!bits[hash_value(ip_addr)]) {
    std::cout << ip_addr << " IP address is not on the list" << std::endl;
    return false;
  }
  std::cout << ip_addr << " IP address is maybe on the list" << std::endl;
  return true;
}

BloomFilter::BloomFilter() : bf_impl(std::make_unique<BloomFilterImpl>()) {}

BloomFilter::~BloomFilter() {}

void BloomFilter::insert(const std::string &ip_addr) {
  bf_impl->insert(this, ip_addr);
}

bool BloomFilter::lookup(const std::string &ip_addr) {
  return bf_impl->lookup(this, ip_addr);
}

} // namespace bloom_filter
