# json-rpc-cxx


[![CircleCI](https://circleci.com/gh/AxelZschutschke/json-rpc-cxx.svg?style=svg)](https://circleci.com/gh/AxelZschutschke/json-rpc-cxx)
![GitHub](https://img.shields.io/github/license/AxelZschutschke/json-rpc-cxx.svg)
[![codecov](https://codecov.io/gh/AxelZschutschke/json-rpc-cxx/branch/master/graph/badge.svg)](https://codecov.io/gh/AxelZschutschke/json-rpc-cxx)
![GitHub tag (latest SemVer)](https://img.shields.io/github/tag/AxelZschutschke/json-rpc-cxx.svg)

![json-rpc-cxx-icon](doc/icon.png)

A [JSON-RPC](https://www.jsonrpc.org/) (1.0 & 2.0) framework implemented in C++17 using the [nlohmann's json for modern C++](https://github.com/nlohmann/json).

-   JSON-RPC 1.0 and 2.0 compliant client
-   JSON-RCP 1.0 and 2.0 compliant server
-   Transport agnostic interfaces
-   Compile time type mapping (using [nlohmann's arbitrary type conversion](https://github.com/nlohmann/json#arbitrary-types-conversions))
-   Runtime type checking
-   Cross-platform (Windows, Linux, OSX)

## Installation

-   Copy [include/jsonrpccxx](include) to your include path
-   Alternatively use CMake install mechanism

```bash
mkdir build && cd build
cmake ..
sudo make install
```

## Usage

-   [examples/warehouse/main.cpp](examples/warehouse/main.cpp)

## Design goals

-   Easy to use interface
-   Type safety where possible
-   Avoid errors at compile time where possible
-   Test driven development
-   Choose expressiveness over speed
-   Minimal dependencies

## License

This framework is licensed under [MIT](LICENSE).

### Dependencies

-   [nlohmann's JSON for modern C++](https://github.com/nlohmann/json) is licensed under MIT.
-   Optional: [Catch](https://github.com/catchorg/Catch2) is licensed under BSL-1.0.

## Developer information

-   [CONTRIBUTING.md](CONTRIBUTING.md)
-   [CHANGELOG.md](CHANGELOG.md)
