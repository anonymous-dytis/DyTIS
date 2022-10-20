# DyTIS

# Prerequisites

## Software packages
```
- Ubuntu 18.04
- g++ 8.4
- libboost-dev 1.65.1 
```

- Install libboost
  ```
  sudo apt-get install libboost-all-dev
  ```



# Quick Start

## Dataset
- You can download review-small (an initial 1 million review-M) dataset from [Google Drive](https://drive.google.com/file/d/1jCJ2XSEIyUMY5tQlFIeDyKCjbbBoesDF/view?usp=sharing). 

## How to run benchmark
```
./scripts/run_benchmark.sh [dataset path] [version (default: DTS_SEP)] [query (default: zipfian)] [insert fraction (%) (default: 50)] [range for scan (default: 100)] [log file path (optional)]
```
- To run benchmarks (insert, search and scan) on the review-small dataset:

  ```
  ./scripts/run_benchmark.sh /path/to/review-small.csv
  ```

# Notice
- We will upload the benchmark for the YCSB workloads.
