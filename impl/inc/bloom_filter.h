#pragma once

#include <memory>
#include <string>

namespace bloom_filter {

/**
 * BloomFilter class, using bridge design pattern calls BloomFilterImpl class.
 */
class BloomFilter {
private:
  /**
   * BloomFilterImpl class, that implements Bloom filter, a space efficient data
   * structure which answers the question of “Do you contain this element?” with
   * either “Maybe” or “Definitely not”. Bloom filters trade-off the total
   * confidence of a typical hash set with a huge reduction in memory. There is
   * no such thing as the “perfect” hash function, consequently collisions
   * introduce a probability for error, that is why we have "Maybe". The upside
   * is that if any of the hash indices are 0 for a given element, we can be
   * 100% confident that element is not in the set, that is why we have
   * “Definitely not”. This means that Bloom filters can produce false positives
   * but never false negatives. BloomFilter is implemented using bridge design
   * pattern. For hash, the boost hash_combine is used for each character in the
   * string.
   */
  class BloomFilterImpl;

  /// unique_ptr to BloomFilterImpl
  std::unique_ptr<BloomFilterImpl> bf_impl;

public:
  /**
   * Constructor of BloomFilter
   *
   * creates unique_ptr to BloomFilterImpl object
   */
  BloomFilter();

  /// Default destructor
  ~BloomFilter();

  /**
   * Insert that calls for insert in BloomFilterImpl class, that hashes IP
   * address and saves it into in bitset size of 1000.
   *
   * @param ip_addr IP address that is hashed and saved
   */
  void insert(const std::string &ip_addr);

  /**
   * Lookup that calls for lookup in BloomFilterImpl class, that searches for IP
   * address in bitset.
   *
   * @param ip_addr IP address that is searched in bitset
   * @return true if IP address is "Maybe" found and false if element is
   * “Definitely not” found
   */
  bool lookup(const std::string &ip_addr);
};

} // namespace bloom_filter
