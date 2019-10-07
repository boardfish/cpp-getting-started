# C++ Getting Started

This is the repo I'm using in order to learn C++.

## Bibliography

- [Initial setup and code](https://itsfoss.com/c-plus-plus-ubuntu/)
- [Explaining header files](https://www.learncpp.com/cpp-tutorial/header-files/)
- [Explaining header files, summary](https://stackoverflow.com/questions/9579930/separating-class-code-into-a-header-and-cpp-file)
- [Purpose of headers when using multiple files](https://stackoverflow.com/questions/6995572/using-multiple-cpp-files-in-c-program)
- [Using headers with class code](https://www.learncpp.com/cpp-tutorial/89-class-code-and-header-files/)
- [Makefiles](https://stackoverflow.com/questions/2481269/how-to-make-a-simple-c-makefile#2481326)
- [Makefiles](https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_makefiles.html)
- [Arrays](https://www.tutorialspoint.com/cplusplus/cpp_arrays.htm)
- [C++ Array Size](https://stackoverflow.com/a/23044646)

Some advice sent to me personally by [@ollienye](https://github.com/ollienye)

## Running

`scripts/compile` to build, `./swap` to run. Probably.

## Testing

You'll probably need to take a lot of hints from [Erik Smistad](https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/) in getting Google Test configured. Then it should be a case of running `scripts/run_tests` to build and test.

## Developing

Follow the **Testing** steps, then make sure you've got [reflex](https://github.com/cespare/reflex) installed before using `scripts/watch_tests` while you work! Whenever you save a `.cpp` file, everything will be rebuilt and tested.
