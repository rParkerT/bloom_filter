Implementation of Bloom filter for malicious IP addresses, using bridge design pattern.
Bloom filter, a space efficient data structure which answers the question of
“Do you contain this address?” with either “Maybe” or “Definitely not”.
Bloom filters can produce false positives but never false negatives. The idea is that
if the answer is "Maybe", further, more time-consuming, searches can be conducted. 

CMake is used for project build. For building tests for testBloomFilter.cpp,
Catch2 repo from GitHub (https://github.com/catchorg/Catch2)
is pulled in local project skipList. Doxygen is used for project documentation.

To build project and project documentation, go to root directory:
<pre>
$ cd root
$ mkdir build
$ cd build
$ cmake ..
$ make
$ make doc

To run tests:
$ cd test
$ ./tests

</pre>
