#ifndef __KSTRUCTS_H
#define __KSTRUCTS_H

// Kernel32 Objects (WIN98)
#define WIN98_K32OBJ_SEMAPHORE            0x1
#define WIN98_K32OBJ_EVENT                0x2
#define WIN98_K32OBJ_MUTEX                0x3
#define WIN98_K32OBJ_CRITICAL_SECTION     0x4
#define WIN98_K32OBJ_CHANGE               0x5
#define WIN98_K32OBJ_PROCESS              0x6
#define WIN98_K32OBJ_THREAD               0x7
#define WIN98_K32OBJ_FILE                 0x8
#define WIN98_K32OBJ_CONSOLE              0x9
#define WIN98_K32OBJ_SCREEN_BUFFER        0xA
#define WIN98_K32OBJ_MAILSLOT             0xB
#define WIN98_K32OBJ_SERIAL               0xC
#define WIN98_K32OBJ_MEM_MAPPED_FILE      0xD
#define WIN98_K32OBJ_PIPE                 0xE
#define WIN98_K32OBJ_DEVICE_IOCTL         0xF
#define WIN98_K32OBJ_TOOLHELP_SNAPSHOT    0x10
#define WIN98_K32OBJ_SOCKET               0x11

// Flags in HANDLE_TABLE_ENTRY
#define HF_INHERIT  0x80000000

#define K32OBJTYPE_TO_HANDLETYPE(x) ((1 << ( x - 1)) + 0x80000000)

// Type for GetHandleObject
#define HANDLETYPE_SEMAPHORE			K32OBJTYPE_TO_HANDLETYPE(WIN98_K32OBJ_SEMAPHORE)
#define HANDLETYPE_EVENT                K32OBJTYPE_TO_HANDLETYPE(WIN98_K32OBJ_EVENT)
#define HANDLETYPE_MUTEX                K32OBJTYPE_TO_HANDLETYPE(WIN98_K32OBJ_MUTEX)
#define HANDLETYPE_CRITICAL_SECTION     K32OBJTYPE_TO_HANDLETYPE(WIN98_K32OBJ_CRITICAL_SECTION)
#define HANDLETYPE_CHANGE               K32OBJTYPE_TO_HANDLETYPE(WIN98_K32OBJ_CHANGE)
#define HANDLETYPE_PROCESS              K32OBJTYPE_TO_HANDLETYPE(WIN98_K32OBJ_PROCESS)
#define HANDLETYPE_THREAD               K32OBJTYPE_TO_HANDLETYPE(WIN98_K32OBJ_THREAD)
#define HANDLETYPE_FILE                 K32OBJTYPE_TO_HANDLETYPE(WIN98_K32OBJ_FILE)
#define HANDLETYPE_CONSOLE              K32OBJTYPE_TO_HANDLETYPE(WIN98_K32OBJ_CONSOLE)
#define HANDLETYPE_SCREEN_BUFFER        K32OBJTYPE_TO_HANDLETYPE(WIN98_K32OBJ_SCREEN_BUFFER)
#define HANDLETYPE_MAILSLOT             K32OBJTYPE_TO_HANDLETYPE(WIN98_K32OBJ_MAILSLOT)
#define HANDLETYPE_SERIAL               K32OBJTYPE_TO_HANDLETYPE(WIN98_K32OBJ_SERIAL)
#define HANDLETYPE_MEM_MAPPED_FILE      K32OBJTYPE_TO_HANDLETYPE(WIN98_K32OBJ_MEM_MAPPED_FILE)
#define HANDLETYPE_PIPE                 K32OBJTYPE_TO_HANDLETYPE(WIN98_K32OBJ_PIPE)
#define HANDLETYPE_DEVICE_IOCTL         K32OBJTYPE_TO_HANDLETYPE(WIN98_K32OBJ_DEVICE_IOCTL)
#define HANDLETYPE_TOOLHELP_SNAPSHOT    K32OBJTYPE_TO_HANDLETYPE(WIN98_K32OBJ_TOOLHELP_SNAPSHOT)
#define HANDLETYPE_SOCKET               K32OBJTYPE_TO_HANDLETYPE(WIN98_K32OBJ_SOCKET)
#define HANDLETYPE_ANY                  0x800003F7

// Hidden flag for DuplicateHandle
#define DUPLICATE_GLOBAL              0x80000000  // Make the duplicated handle global

// Flags for the Attributes field in the OBJECT_ATTRIBUTES structure
#define OBJ_INHERIT					0x00000002L
#define OBJ_PERMANENT				0x00000010L
#define OBJ_EXCLUSIVE				0x00000020L
#define OBJ_CASE_INSENSITIVE		0x00000040L
#define OBJ_OPENIF					0x00000080L
#define OBJ_OPENLINK				0x00000100L
#define OBJ_KERNEL_HANDLE			0x00000200L
#define OBJ_VALID_ATTRIBUTES		0x000003F2L 

// Process Database flags (WIN95)
#define fDebugSingle                  0x00000001  // Set if process is being debugged
#define fCreateProcessEvent           0x00000002  // Set in debugged process after starting
#define fExitProcessEvent             0x00000004  // Might be set in debugged process at exit time
#define fWin16Process                 0x00000008  // 16-bit process
#define fDosProcess                   0x00000010  // DOS process
#define fConsoleProcess               0x00000020  // 32-bit console process
#define fFileApisAreOem               0x00000040  // SetFileAPIsToOEM
#define fNukeProcess                  0x00000080
#define fServiceProcess               0x00000100  // RegisterServiceProcess
#define fLoginScriptHack              0x00000800  // Might be a Novell network login process
#define fSendDllNotifications         0x00200000
#define fDebugEventPending            0x00400000  // e.g. stopped in debugger
#define fNearlyTerminating            0x00800000
#define fFaulted                      0x08000000
#define fTerminating                  0x10000000
#define fTerminated                   0x20000000
#define fInitError                    0x40000000
#define fSignaled                     0x80000000
#define INVALID_FLAGS (fTerminated | fTerminating | fNearlyTerminating)
#define CREATE_SILENT                 0x80000000

// Thread Database flags (WIN95)
#define fCreateThreadEvent            0x00000001   // Set if thread is being debugged
#define fCancelExceptionAbort         0x00000002
#define fOnTempStack                  0x00000004
#define fGrowableStack                0x00000008
#define fDelaySingleStep              0x00000010
#define fOpenExeAsImmovableFile       0x00000020
#define fCreateSuspended              0x00000040   // CREATE_SUSPENDED flag to CreateProcess()
#define fStackOverflow                0x00000080
#define fNestedCleanAPCs              0x00000100
#define fWasOemNowAnsi                0x00000200   // ANSI/OEM file function
#define fOKToSetThreadOem             0x00000400   // ANSI/OEM file function

// TDBX flags (WIN95)
#define WAITEXBIT                     0x00000001
#define WAITACKBIT                    0x00000002
#define SUSPEND_APC_PENDING           0x00000004
#define SUSPEND_TERMINATED            0x00000008
#define BLOCKED_FOR_TERMINATION       0x00000010
#define EMULATE_NPX                   0x00000020
#define WIN32_NPX                     0x00000040
#define EXTENDED_HANDLES              0x00000080
#define FROZEN                        0x00000100
#define DONT_FREEZE                   0x00000200
#define DONT_UNFREEZE                 0x00000400
#define DONT_TRACE                    0x00000800
#define STOP_TRACING                  0x00001000
#define WAITING_FOR_CRST_SAFE         0x00002000
#define CRST_SAFE                     0x00004000
#define BLOCK_TERMINATE_APC           0x00040000

/* [GS]etProcessDword offsets */
#define GPD_APP_COMPAT_FLAGS	(-56)
#define GPD_LOAD_DONE_EVENT		(-52)
#define GPD_HINSTANCE16			(-48)
#define GPD_WINDOWS_VERSION		(-44)
#define GPD_THDB				(-40)
#define GPD_PDB					(-36)
#define GPD_STARTF_SHELLDATA	(-32)
#define GPD_STARTF_HOTKEY		(-28)
#define GPD_STARTF_SHOWWINDOW	(-24)
#define GPD_STARTF_SIZE			(-20)
#define GPD_STARTF_POSITION		(-16)
#define GPD_STARTF_FLAGS		(-12)
#define GPD_PARENT				(- 8)
#define GPD_FLAGS				(- 4)
#define GPD_USERDATA			(  0)

typedef enum
{
	WOW_TYPE_HWND,
	WOW_TYPE_HMENU,
	WOW_TYPE_HDWP,
	WOW_TYPE_HDROP,
	WOW_TYPE_HDC,
	WOW_TYPE_HFONT,
	WOW_TYPE_HMETAFILE,
	WOW_TYPE_HRGN,
	WOW_TYPE_HBITMAP,
	WOW_TYPE_HBRUSH,
	WOW_TYPE_HPALETTE,
	WOW_TYPE_HPEN,
	WOW_TYPE_HACCEL,
	WOW_TYPE_HTASK,
	WOW_TYPE_FULLHWND

} WOW_HANDLE_TYPE;

#pragma pack(push,1)

typedef struct _K32OBJHEAD
{
    WORD        Type;        // 00
    WORD        cReferences; // 02
} K32OBJHEAD, *PK32OBJHEAD;

/* Event flags */
#define EVENT_MANUALRESET             0x00000080

typedef struct _K32EVENT
{
    BYTE        Type;           // 00 K32OBJ_EVENT
    BYTE        Flags;          // 01 Flags
    WORD        cReferences;    // 02 References
    DWORD       un1;            // 04
    BOOL        Signaled;       // 08 Event state
    LPSTR       lpName;         // 0C Name
} K32EVENT, *PK32EVENT;

typedef struct _THREADINFO
{
    DWORD               UniqueThreadId;			// ID
    struct _DESKTOP     *rpdesk;				// Desktop
    struct _DESKTOPINFO *pDeskInfo;				// Desktop info
    HDESK               hdesk;					// Handle to the desktop 
    union
    {
        PVOID                   Thread;			// Pointer to the thread database
        struct _WINDOWSTATION   *rpwinsta;		// Pointer to the thread window station
    };
	BOOL				fGhosted;				// Internal use for hung threads

	FILETIME			CreationTime;			// Creation time
	FILETIME			ExitTime;				// Exit time
	FILETIME			KernelTime;				// Kernel time
	FILETIME			UserTime;				// User time
} THREADINFO, *PTHREADINFO;

typedef struct _PROCESSINFO
{
    DWORD           UniqueProcessId;			// ID
    struct _DESKTOP *rpdeskStartup;				// Startup desktop
    HDESK           hdeskStartup;				// Startup desktop handle
    struct _WINSTATION_OBJECT *rpwinsta;		// Current window station
    HWINSTA         hwinsta;					// Current window station handle

    DWORD           SessionId;					// Session ID (MIGHT BE USED IN THE FUTURE)
    BOOL            WindowsGhosting;			// Windows ghosting (for hung threads)
	DWORD			ShutdownLevel;				// Shutdown order
	DWORD			ShutdownFlags;				// Shutdown flags
    PVOID           Process;					// Pointer to the process database
} PROCESSINFO, *PPROCESSINFO;

// Structured Exception Handler
typedef struct _SEH {
    struct _SEH *pNext;
    FARPROC     pfnHandler;
} SEH, *PSEH;

typedef struct _HANDLE_TABLE_ENTRY {
    DWORD  flags;                   // Valid flags depend on what type of object this is
    PVOID  pObject;                 // Pointer to the object that the handle refers to
} HANDLE_TABLE_ENTRY, *PHANDLE_TABLE_ENTRY;

// Handle Table
typedef struct _HANDLE_TABLE {
    DWORD cEntries;                 // Max number of handles in table
    HANDLE_TABLE_ENTRY array[1];    // An array (number is given by cEntries)
} HANDLE_TABLE, *PHANDLE_TABLE;

// Win16 Task database
typedef struct _W16TDB
{
	WORD	Next;						// 000h - Next task in dispatch queue end with 0, where is the first ?
	WORD	TaskSP;						// 002h - Saved SS:SP for this task
	WORD	TaskSS;						// 004h
	WORD	nEvents;					// 006h - Task event counter
	BYTE	Priority;					// 008h - Task priority (0 is highest)
	BYTE	tdbOrdinal;					// 009h - Ordinal number of this thread
	WORD	tdbNext;					// 00Ah - Next thread
	WORD	tdbCurrent;					// 00Ch - The real TDB for this task
	WORD	tdbList;					// 00Eh - List of allocated thread structures
	WORD	tdbFree;					// 010h - Free list of available thread structures
	WORD	tdbCount;					// 012h - Total count of tread structures
	WORD	FCW;						// 014h - Floating point control word
	WORD	Flags;						// 016h - Task flags
	WORD	ErrMode;					// 018h - Error mode for this task
	WORD	ExpWinVer;					// 01Ah - Expected Windows version for this task
	WORD	HInstance;					// 01Ch - Instance handle of task
	WORD	HMODULE;					// 01Eh - Module database for task  selector ptr to 'NE' W16Module go
	WORD	Queue;						// 020h - Task Event Queue pointer
	WORD	Parent;						// 022h - TDB of the task that started this up
	WORD	SigAction;					// 024h - Action for app task signal
	FARPROC	ASignalProc;				// 026h - App's signal procedure address
	FARPROC	USignalProc;				// 02Ah - User's Task Signal procedure address
	FARPROC	GNotifyProc;				// 02Eh - Task global discard notify proc.
	FARPROC	INTVECS[7];					// 032h - Task specfic hardware interrupts
	DWORD	CompatFlags;				// 04Eh - Compatibility flags
	WORD	SelectorFS;					// 052h - Same selector as FS (points inside TCB)
	DWORD	Ring3TCB;					// 054h - 32 bit address of KERNEL32 thread database Ring3TCB go
	WORD	ThunkStackSS;				// 058h - Selector used for stack during thunking
	WORD	un1[3];						// 05Ah - Appears to be unused
	WORD	PSP;						// 060h - MSDOS Process Data Block (aka, the PSP)
	LPBYTE	DTA;						// 062h - MSDOS Disk Transfer Address
	BYTE	Drive;						// 066h - MSDOS current drive
	char	DosDir[65];					// 067h - MSDOS current directory
	WORD	Validity;					// 0A8h - Initial AX to be passed to a task
	WORD	DirectedYield;				// 0AAh - DirectedYield arg stored here
	WORD	LibInitSeg;					// 0ACh - Segment address of libraries to init
	WORD	LibInitOff;					// 0AEh - MakeProcInstance thunks live here.
	WORD	SelectorMPI;				// 0B0h - Code selector for thunks
	WORD	Thunks;						// 0B2h - selector of segment with more MPI thunks
	WORD	Signature;					// 0B4h - 'PT'
	WORD	un2;						// 0B6h
	WORD	NextMPIThunk;				// 0B8h
	char	MPIThunks[0x38];			// 0BAh
	char	ModName[8];					// 0F2h - Name of Module.
	WORD	sig;						// 0FAh - 'TD' Signature word to detect bogus code
	DWORD	unused2;					// 0FCh
	char	CurrentDirectory[0x110];	// 100h - Current directory
} W16TDB, *PW16TDB;

// List node
typedef struct _NODE
{
	struct _NODE*  next;
	struct _NODE*  prev;
	PVOID          data;			// Pointer to the thread database
} NODE, *PNODE;

// List
typedef struct _LIST {
	PNODE          firstNode;
	PNODE          lastNode;
	PNODE          currentNode;
} LIST, *PLIST;

struct _PDB98;

// MODREF
typedef struct _MODREF {          // Size = 0x1C + 4*cImportedModules
    struct _MODREF*  pNextModRef; // 00 Pointer to next process's MODREF in list
    struct _MODREF*  pPrevModRef; // 04 Pointer to previous process's MODREF in list
    struct _MODREF*  pNextMteMR;  // 08 Next MODREF in IMTE list ??
    struct _MODREF*  pPrevMteMR;  // 0C Prev MODREF in IMTE list ??
    WORD             mteIndex;    // 10 Index to global array of pointers to IMTEs
    WORD             cUsage;      // 12 ref count
    WORD             flags;       // 14 flags
    WORD             cImportedModules; // 16 Number of modules imported implicitly
    struct _PDB98*   ppdb;        // 18 Pointer to process database
	union {                       // 1C
		PSTR         pszModuleName;
		struct _MODREF*  pMR;
	} ImplicitImports[1];         // * cImportedModules
} MODREF, *PMODREF;

// IMTE
typedef struct _IMTE {            // Size = 0x3C
    WORD            unknown1;     // 00
	WORD            unknown1A;    // 02
    IMAGE_NT_HEADERS*   pNTHdr;   // 04 pointer to shared PE header for module
    DWORD           unknown2;     // 08
    PSTR            pszFileName;  // 0C long path name
    PSTR            pszModName;   // 10 long module name
    WORD            cbFileName;   // 14 long path name length
    WORD            cbModName;    // 16 long module name length
    DWORD           unknown3;     // 18
    DWORD           cSections;    // 1C number of sections in the module
    DWORD           unknown4;     // 20
    DWORD           baseAddress;  // 24 module base address before relocation
    WORD            hModule16;    // 28 16-bit selector to NE header
    WORD            cUsage;       // 2A usage count
    PMODREF         pMR;          // 2C pointer to MODREF structure
    PSTR            pszSFileName; // 30 short path name
    WORD            cbSFileName;  // 34 short path name length
    PSTR            pszSModName;  // 36 short module name
    WORD            cbSModName;   // 3A short module name length
} IMTE, *PIMTE;

// Environment Database
typedef struct _ENVIRONMENT_DATABASE {
    PSTR    pszEnvironment;             //00 Pointer to Process Environment
    DWORD   un1;                        //04 (always 0)
    PSTR    pszCmdLine;                 //08 Pointer to command line
    PSTR    pszCurrDirectory;           //0C Pointer to current directory
    LPSTARTUPINFOA pStartupInfo;        //10 Pointer to STARTUPINFOA struct
    HANDLE  hStdIn;                     //14 Standard Input handle
    HANDLE  hStdOut;                    //18 Standard Output handle
    HANDLE  hStdErr;                    //1C Standard Error handle
    DWORD   un2;                        //20 (always 1)
    DWORD   InheritConsole;             //24 Inherit console from parent
    DWORD   BreakType;                  //28 Handle console events (like CTRL+C)
    DWORD   BreakSem;                   //2C Pointer to K32OBJ_SEMAPHORE
    DWORD   BreakEvent;                 //30 Pointer to K32OBJ_EVENT
    DWORD   BreakThreadID;              //34 Pointer to K32OBJ_THREAD
    DWORD   BreakHandlers;              //38 Pointer to list of installed console control handlers
} EDB, *PEDB;

// Process Database
typedef struct _PDB98 {                 // Size = 0xC4 (from Kernel32)
    BYTE    Type;                       // 00 Kernel object type = K32OBJ_PROCESS (6)
    BYTE    Unknown_A;                  // 01 (align ?)
    WORD    cReference;                 // 02 Number of references to process
    DWORD   Unknown_B;                  // 04 Pointer to ???
    PPROCESSINFO Win32Process;          // 08 (zero)
    DWORD   pEvent;                     // 0C Event for process waiting
    DWORD   TerminationStatus;          // 10 GetExitCodeProcess
    DWORD   Unknown2;                   // 14 May be used for private purposes
    HANDLE  DefaultHeap;                // 18 GetProcessHeap
    PCONTEXT MemoryContext;             // 1C Pointer to process context
    DWORD   Flags;                      // 20 Flags
    DWORD   pPSP;                       // 24 Linear address of DOS PSP
    WORD    PSPSelector;                // 28 Selector to DOS PSP
    WORD    MTEIndex;                   // 2A Index into global module table
    WORD    cThreads;                   // 2C Threads.ItemCount
    WORD    cNotTermThreads;            // 2E Threads.ItemCount
    WORD    Unknown3;                   // 30 (zero)
    WORD    cRing0Threads;              // 32 Normally Threads.ItemCount (except kernel32)
    HANDLE  HeapHandle;                 // 34 Kernel32 shared heap
    DWORD   w16TDB;                     // 38 Win16 task database selector
    DWORD   MemMappedFiles;             // 3C List of memory mapped files
    PEDB    pEDB;                       // 40 Pointer to Environment Database
    PHANDLE_TABLE pHandleTable;         // 44 Pointer to Handle Table
    struct _PDB98* ParentPDB;           // 48 Pointer to parent process (PDB)
    PMODREF MODREFList;                 // 4C Pointer to list of modules
    PLIST   ThreadList;                 // 50 Pointer to list of threads
    DWORD   DebuggeeCB;                 // 54 Debuggee context block
    DWORD   LocalHeapFreeHead;          // 58 Free list for process default heap
    DWORD   InitialRing0ID;             // 5C Meaning unknown
    CRITICAL_SECTION CriticalSection;   // 60 For synchronizing threads
    DWORD   Unknown4[2];                // 78
    DWORD   pConsole;                   // 80 Output console
    DWORD   tlsInUseBits[3];            // 84 Status of TLS indexes
    DWORD   ProcessDWORD;               // 90 Undocumented API GetProcessDword - user data
    struct _PDB98* ProcessGroup;        // 94 Master process PDB (in debugging)
    PMODREF pExeMODREF;                 // 98 Points to exe's module structure
    DWORD   TopExcFilter;               // 9C SetUnhandledExceptionFilter
    DWORD   PriorityClass;              // A0 PriorityClass (8 = NORMAL)
    DWORD   HeapList;                   // A4 List of heaps
    DWORD   HeapHandleList;             // A8 List of moveable memory blocks
    DWORD   HeapPointer;                // AC Pointer to one moveable memory block, meaning unknown
    DWORD   pConsoleProvider;           // B0 Console for DOS apps
    WORD    EnvironSelector;            // B4 Environment database selector
    WORD    ErrorMode;                  // B6 SetErrorMode
    DWORD   pEventLoadFinished;         // B8 Signaled when the process has finished loading
    WORD    UTState;                    // BC Universal thunking, meaning unknown
    WORD    Unknown5;                   // BE (zero)
    DWORD   Unknown6;                   // C0
} PDB98, *PPDB98;

// Thread Information Block (FS:[0x18])
typedef struct _TIB98 {        // Size = 0x38
    PSEH    pvExcept;          // 00 Head of exception record list
    PVOID   pvStackUserTop;    // 04 Top of user stack
    PVOID   pvStackUserBase;   // 08 Base of user stack
    WORD    pvTDB;             // 0C Ptr to win-16 task database
    WORD    pvThunksSS;        // 0E SS selector used for thunking to 16 bits
    DWORD   SelmanList;        // 10 Pointer to selector manager list
    PVOID   pvArbitrary;       // 14 Available for application use
    struct _TIB98 *pTIBSelf;   // 18 Linear address of TIB structure
    WORD    TIBFlags;          // 1C TIBF_WIN32 = 1, TIBF_TRAP = 2
    WORD    Win16MutexCount;   // 1E Win16Lock
    DWORD   DebugContext;      // 20 Pointer to debug context structure
    DWORD   pCurrentPriority;  // 24 Pointer to DWORD containing current priority level
    DWORD   pvQueue;           // 28 Message Queue selector
    DWORD   *pvTLSArray;       // 2C Pointer to TDB.TlsSlots
    PDB98   *pProcess;         // 30 Pointer to owning process database (PDB)
    DWORD   Unknown;           // 34 Pointer to ???
} TIB98, *PTIB98;

typedef struct _TDBX98 TDBX98;

// Thread database (FS:[0x18] - 0x8)
typedef struct _TDB98 {        // Size = 0x228 (from Kernel32)
    BYTE    Type;              // 00 K32 object type
	BYTE    Unknown_A;         // 01
    WORD    cReference;        // 02 Reference count
    DWORD   pSomeEvent;        // 04 K32 event object used when someone waits on the thread object
    TIB98   tib;               // 08 Thread information block (TIB)
    DWORD   Unknown;           // 40
    DWORD   Flags;             // 44 Flags
    DWORD   TerminationStatus; // 48 Exit code
    WORD    TIBSelector;       // 4C Selector used in FS to point to TIB
    WORD    EmulatorSelector;  // 4E Memory block for saving x87 state
    DWORD   cHandles;          // 50 Handle count
    DWORD   Ring0Thread;       // 54 R0 thread control block (TCB)
    TDBX98  *pTDBX;            // 58 R0 thread database extension (TDBX)
    DWORD   un1[3];            // 5C
	DWORD   LastError;         // 68 GetLastError code value
    DWORD   un2[9];            // 6C
    LPVOID  TlsSlots[80];      // 90 Thread Local Storage
	DWORD   un3[16];           // 1D0
    DWORD   APISuspendCount;   // 210 Count of SuspendThread's minus ResumeThread's
	//DWORD   un4[5];            // 214
    DWORD   un4;               // 214
    PTHREADINFO Win32Thread;   // 218
} TDB98, *PTDB98;

typedef struct _TDBME {        // Size = 0x228 (from Kernel32)
    BYTE    Type;              // 00 K32 object type
	BYTE    Unknown_A;         // 01
    WORD    cReference;        // 02 Reference count
    DWORD   pSomeEvent;        // 04 K32 event object used when someone waits on the thread object
    TIB98   tib;               // 08 Thread information block (TIB)
    DWORD   Unknown;           // 40
    DWORD   Unknown2;          // 44
    WORD    TIBSelector;       // 46 Selector used in FS to point to TIB
    DWORD   TerminationStatus; // 48 Exit code
    DWORD   Flags;             // 4C Flags
    DWORD   cHandles;          // 50 Handle count
    DWORD   Ring0Thread;       // 54 R0 thread control block (TCB)
    DWORD   Unknown3;          // 58 Selector for ???
    DWORD   un1[8];            // 5C
	DWORD   LastError;         // 7C GetLastError code value
	DWORD   un2[2];            // 80
    TDBX98  *pTDBX;            // 88 R0 thread database extension (TDBX)
    DWORD   Unknown4;          // 8C
    DWORD   TlsSlots[80];      // 90 Thread Local Storage
	DWORD   un3[16];           // 1D0
    DWORD   APISuspendCount;   // 210 Count of SuspendThread's minus ResumeThread's
	DWORD   un4[5];            // 214
} TDBME, *PTDBME;

// Thread database extension
typedef struct _TDBX98 {
    DWORD  un0;                // 00
    TDB98  *ptdb;              // 04 R3 thread database
    PDB98  *ppdb;              // 08 R3 process database
    DWORD  ContextHandle;      // 0C R0 memory context
    DWORD  Ring0Thread;        // 10 R0 thread control block [TCB *]
    DWORD  WaitNodeList;       // 14 Anchor of things we're waiting on  [WAITNODE *]
    DWORD  WaitFlags;          // 18 Blocking flags
    DWORD  un1;                // 1C
    DWORD  TimeOutHandle;      // 20
    DWORD  WakeParam;          // 24
    DWORD  BlockHandle;        // 28 R0 semaphore on which thread will wait inside VWIN32
    DWORD  BlockState;         // 2C
    DWORD  SuspendCount;       // 30
    DWORD  SuspendHandle;      // 34
    DWORD  MustCompleteCount;  // 38 Count of EnterMustComplete's minus LeaveMustComplete's
    DWORD  WaitExFlags;        // 3C Flags
    DWORD  SyncWaitCount;      // 40
    DWORD  QueuedSyncFuncs;    // 44
    DWORD  UserAPCList;        // 48
    DWORD  KernAPCList;        // 4C
    DWORD  pPMPSPSelector;     // 50
    DWORD  BlockedOnID;        // 54
} TDBX98, *PTDBX98;

// File mapping object
typedef struct _FILEMAPPING {  // Size = 0x28 (from Kernel32)
    WORD type;                 // 00 WIN98_K32OBJ_MEM_MAPPED_FILE
    WORD refCount;             // 02 object reference count
    PVOID kernObj;             // 04 some kernel heap object
    DWORD Unknown1;            // 08
    PVOID mapaddr;             // 0C current mapped address
	DWORD Unknown2[6];         // 10
} FILEMAPPING, *PFILEMAPPING;

#pragma pack(pop)

#pragma warning (disable:4035)		// turn off no return code warning

static __inline
PDB98* get_pdb(void)
{
	__asm mov eax, fs:30h
}

static __inline
TIB98* get_tib(void)
{
	__asm mov eax, fs:18h
}

static __inline
TDB98* get_tdb(void)
{
	get_tib();
	__asm sub eax, 8h
}

#pragma warning (default:4035)		// turn on no return code warning

#endif /* __KSTRUCTS_H */
