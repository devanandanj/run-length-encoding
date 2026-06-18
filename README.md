# Run-Length Encoding (RLE) Utility

A lightweight CLI Run-Length Encoding (RLE) utility written in C++. This tool compresses continuous runs of characters in text files into a more compact representation and decompresses them back to their original form.

## Key Features

* **Modular Architecture**: Clean separation between compression logic, decompression logic, and CLI argument parsing.
* **Dynamic Command-Line Arguments**: Easy-to-use interface for selecting modes and input files.
* **Text-Mode Parsing**: Currently processes and encodes data in a human-readable text format.

## Repository Structure Map

```text
.
├── build/                  # Compiled binaries and build artifacts (git-ignored)
├── src/                    # Source files
│   ├── compress.cpp        # Compression logic
│   ├── decompress.cpp      # Decompression logic
│   ├── funcs.h             # Function declarations
│   ├── main.cpp            # Application entry point
│   └── usageInstruction.cpp# CLI argument handling
├── tests/                  # Test data and examples
│   ├── example.txt         # Sample input file
│   └── long.txt            # Extended sample input file
├── .gitignore              # Git ignore configuration
├── CMakeLists.txt          # Build configuration
└── README.md               # Project documentation
```

## Build & Run Instructions

This project uses CMake (or standard g++) for building.

### Building with CMake (Recommended)
```bash
mkdir build
cd build
cmake ..
cmake --build .
```

### Building manually with g++
```bash
g++ -Wall -Iinclude src/main.cpp src/compress.cpp src/decompress.cpp src/usageInstruction.cpp -o rle
```

### Running the Utility

**Compress a file:**
```bash
./rle compress tests/example.txt
```

**Decompress a file:**
```bash
./rle decompress tests/packed.rle
```

## Future Roadmap

* **True Binary Byte Streaming (Option B)**: Transition from text-mode parsing to a true binary format to achieve better compression ratios.
* **Handling Larger Run Lengths**: Improve encoding to handle runs longer than 256 characters efficiently.
