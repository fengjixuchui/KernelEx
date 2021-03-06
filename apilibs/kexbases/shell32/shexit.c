/*
 *  KernelEx
 *  Copyright (C) 2013, Ley0k
 *
 *  This file is part of KernelEx source code.
 *
 *  KernelEx is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published
 *  by the Free Software Foundation; version 2 of the License.
 *
 *  KernelEx is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GNU Make; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#include <common.h>
#include <shlwapi.h>
#include "../user32/_user32_apilist.h"

/* MAKE_EXPORT SHExitWindowsEx=SHExitWindowsEx */
BOOL WINAPI SHExitWindowsEx(HWND hWnd, HINSTANCE hInstance, LPCSTR pszString, int nCmdShow)
{
	int Flags;

	StrToIntEx(pszString, STIF_SUPPORT_HEX, &Flags);

	DestroyWindow(hWnd);

	return ExitWindowsEx_fix(Flags, 0);
}
