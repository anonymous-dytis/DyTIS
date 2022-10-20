#pragma once

typedef struct ExtendibleHash ExtendibleHash;

struct ExtendibleHash {
  Directory** seg;

  ExtendibleHash(void) {
    seg = NULL;
  }

  ExtendibleHash(short GD) {
    uint64_t capacity = (pow(2, GD));
    seg = new Directory*[capacity];
  }

  ~ExtendibleHash(void) {
    delete [] seg;
  }

  size_t data_size(void) {
    size_t size = sizeof(ExtendibleHash);
    return size;
  }

  inline int Insert(Key_t&, Value_t, short);
  inline bool Delete(Key_t& key, short);
  inline Value_t Get(Key_t& key, short);
  inline void Scan(Key_t& key, int& count, size_t n, Value_t* result, short);

};


