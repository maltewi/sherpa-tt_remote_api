# sherpa-tt_remote_api
Under develoment

## Compiling
### Global Installation

```
mkdir build
cd build
cmake ..
make
sudo make install
```

### With Server

```
mkdir build
cd build
cmake -DBUILD_SERVER=ON ..
make
sudo make install
```

### To a different location

```
mkdir build
cd build
cmake -DCMAKE_INSTALL_PREFIX=/path/to/my/installation/folder ..
make
sudo make install
```
