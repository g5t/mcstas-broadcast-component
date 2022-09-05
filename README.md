# McStas Event Broadcaster

After installing [McStas 3.x](https://mcstas.org), compile and run the test instrument via

```bash
mcrun broadcaster.instr -n 100 --no-output
```

Compile the shared library with, e.g.,
## Linux
```bash
g++ -fpic -shared wrapper.c BifrostReadout.cpp -o libwrapper.so
```

## MacOS
```bash
g++ --std=c++17 wrapper.c BifrostReadout.cpp -I . --shared -o libwrapper.so
```
