/** @file
  Implements a simple PEI module to configure the debugger.

  Copyright (c) Microsoft Corporation.
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include <Uefi.h>
#include <PiPei.h>
#include <Library/DebugLib.h>
#include <Library/HobLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/DeviceStateLib.h>
#include <DebuggerControlHob.h>

/**
  Collects architecture specific debug configuration information

  @param[in,out]  DEBUGGER_CONTROL_HOB  The system debug configuration hob.

**/
VOID
EFIAPI
ArchDebugConfig (
  DEBUGGER_CONTROL_HOB  *ConfigHob
  )
{
}
