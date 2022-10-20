CXX := g++
CFLAGS := -std=c++17 -I/usr/include -I./ -lrt -lpthread -O3 -Wall -Wextra -march=native -Wall -Wextra -Wshadow  -fno-builtin-memcpy -fno-builtin-memmove -fno-builtin-memcmp -DNDEBUG -g3 -O3 -flto -fno-stack-protector  -Wno-unknown-pragmas  -rdynamic -lm -lrt -g

DIRS=./benchmark/build
$(shell mkdir -p $(DIRS))

DTS:
	$(CXX) $(CFLAGS) -w -o $(DIRS)/benchmark benchmark/main.cpp -DDTS -lpthread  -DEXPSEARCH
DTS_SEP:
	$(CXX) $(CFLAGS) -w -o $(DIRS)/benchmark benchmark/main.cpp -DDTS -lpthread  -DEXPSEARCH -DSEP

all:
	echo "NOTHING YET"

clean:
	rm -rf src/*.o build/* util/*.o external/*.o
