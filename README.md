# McStas Event Broadcaster

After installing [McStas 3.x](https://mcstas.org), compile and run the test instrument via

```bash
mcrun broadcaster.instr -n 100 --no-output
```

Compile the shared library with, e.g., 
```bash
g++ -fpic -shared wrapper.cpp BifrostReadout.cpp -o libwrapper.so
```
