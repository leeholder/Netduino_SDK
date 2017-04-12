////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <cores\arm\include\cpu.h>


void CPU_EBIU_ConfigMemoryBlock( const CPU_MEMORY_CONFIG& CPUMemoryConfig  )
{
    NATIVE_PROFILE_HAL_PROCESSOR_EBIU();
    MC9328MXL_EIM_Driver::ConfigMemoryBlock( CPUMemoryConfig );
}

BOOL CPU_EBIU_Memory_ReadOnly( const CPU_MEMORY_CONFIG& CPUMemoryConfig, BOOL ReadOnly )
{
    NATIVE_PROFILE_HAL_PROCESSOR_EBIU();
    return MC9328MXL_EIM_Driver::Memory_ReadOnly( CPUMemoryConfig, ReadOnly );
}
