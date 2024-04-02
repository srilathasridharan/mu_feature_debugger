/**@file WatchdogTimerLib.h

  This module contains code to interact with the watchdog timer.

  Copyright (c) Microsoft Corporation.

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include <Uefi.h>

/**
  Stub to suspend the watchdog timer.

  @retval FALSE

**/
BOOLEAN
WatchdogSuspend (
  )
{
  return FALSE;
}

/**
  Stub to resume the watchdog timer.

  @param  PreviouslyRunning  Unused.

**/
VOID
WatchdogResume (
  IN BOOLEAN  PreviouslyRunning
  )
{
  return;
}
