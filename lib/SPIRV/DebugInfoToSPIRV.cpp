#include "DebugInfoToSPIRV.h"
#include "SPIRVMDWalker.h"
using namespace llvm;
using namespace SPIRV;

void transDebugMetadata(llvm::Module* M, SPIRV::SPIRVModule* BM) {
  SPIRVMDWalker::NamedMDWrapper CU = SPIRVMDWalker(*M).getNamedMD("llvm.dbg.cu");
  if (!CU)
    return;
  
}
