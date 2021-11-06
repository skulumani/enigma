# C++ Project template

Template for quickly setting up a `cmake` based C++ project

Update submodules

~~~
git submodule update --init
~~~

## Dependencies

* `cmake` - `sudo apt-get install cmake`
* `gcc/g++` - `sudo apt-get install build-essential`

1. Create `build` directory and run `cmake`

~~~
mkdir build
cd build
cmake ..
~~~

2. Build the code `make`

3. Run tests `cd ../bin/test_all`
