# Cleanup old build 
rm *.out *.exe *.obj *.lib *.pdb *.exp crash-*

# Compile using LLVM/clang compiler
clang -g -fsanitize=address,fuzzer -fno-inline  my_api.cpp fuzz_me.cpp 
## Test 
./a.out

# Compile using Microsoft's MSVC compiler
cl /fsanitize=address /fsanitize-address-use-after-return /fsanitize=fuzzer /Zi fuzz_me.cpp my_api.cpp  
## Test 
fuzz_me.exe