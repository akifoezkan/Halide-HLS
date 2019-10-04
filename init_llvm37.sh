CLANG_DIR=/scratch-local2/opt/llvm/llvm_install-3.7

# installation
# REPO_DIR=/scratch-local2/opt/llvm3.7/
# svn co https://llvm.org/svn/llvm-project/llvm/branches/release_37 ${REPO_DIR} 
# svn co https://llvm.org/svn/llvm-project/cfe/branches/release_37 ${REPO_DIR}/tools/clang
# mkdir ${REPO_DIR}/build && cd ${REPO_DIR}/build
# cmake -DLLVM_ENABLE_TERMINFO=OFF -DLLVM_TARGETS_TO_BUILD="X86;ARM;NVPTX;AArch64;Mips;PowerPC" -DLLVM_ENABLE_ASSERTIONS=ON -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=${CLANG_DIR} .. 
# make -j8
# make install
# cd -

export PATH=${CLANG_DIR}/bin:$PATH
export LD_LIBRARY=$LD_LIBRARY:${CLANG_DIR}/lib

#For Halide
export LLVM_CONFIG=${CLANG_DIR}/bin/llvm-config
export CLANG=${CLANG_DIR}/bin/clang
