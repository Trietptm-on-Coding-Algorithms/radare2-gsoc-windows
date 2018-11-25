
/* Alerted[2] */
#define	KernelStackResident	0x00000001
#define	ReadyTransition	0x00000002
#define	ProcessReadyQueue	0x00000004
#define	WaitNext	0x00000008
#define	SystemAffinityActive	0x00000010
#define	Alertable	0x00000020
#define	GdiFlushActive	0x00000040
#define	UserStackWalkActive	0x00000080
#define	ApcInterruptRequest	0x00000100
#define	ForceDeferSchedule	0x00000200
#define	QuantumEndMigrate	0x00000400
#define	UmsDirectedSwitchEnable	0x00000800
#define	TimerActive	0x00001000
#define	SystemThread	0x00002000
#define	Reserved	0xFFFFC000

/* Timer */
#define	AutoAlignment	0x00000001
#define	DisableBoost	0x00000002
#define	EtwStackTraceApc1Inserted	0x00000004
#define	EtwStackTraceApc2Inserted	0x00000008
#define	CalloutActive	0x00000010
#define	ApcQueueable	0x00000020
#define	EnableStackSwap	0x00000040
#define	GuiThread	0x00000080
#define	UmsPerformingSyscall	0x00000100
#define	VdmSafe	0x00000200
#define	UmsDispatched	0x00000400
#define	ReservedFlags	0xFFFFF800

/* PriorityDecrement */
#define	ForegroundBoost	0x0000000F
#define	UnusualBoost	0x000000F0

struct _KTHREAD {
	struct _DISPATCHER_HEADER	Header;
	uint64_t	CycleTime;
	uint32_t	HighCycleTime;
	uint64_t	QuantumTarget;
	voidstruct Ptr32	InitialStack;
	voidstruct Ptr32	StackLimit;
	voidstruct Ptr32	KernelStack;
	uint32_t	ThreadLock;
	struct _KWAIT_STATUS_REGISTER	WaitRegister;
	uint8_t	Running;
	uint8_t	Alerted[2];
	int32_t	MiscFlags;
	union {
		struct _KAPC_STATE	ApcState;
		uint8_t	ApcStateFill[23];
	};
	struct Char	Priority;
	uint32_t	NextProcessor;
	uint32_t	DeferredProcessor;
	uint32_t	ApcQueueLock;
	uint32_t	ContextSwitches;
	uint8_t	State;
	struct Char	NpxState;
	uint8_t	WaitIrql;
	struct Char	WaitMode;
	int32_t	WaitStatus;
	struct _KWAIT_BLOCKstruct Ptr32	WaitBlockList;
	union {
		struct _LIST_ENTRY	WaitListEntry;
		struct _SINGLE_LIST_ENTRY	SwapListEntry;
	};
	struct _KQUEUEstruct Ptr32	Queue;
	uint32_t	WaitTime;
	int16_t	KernelApcDisable;
	int16_t	SpecialApcDisable;
	uint32_t	CombinedApcDisable;
	voidstruct Ptr32	Teb;
	struct _KTIMER	Timer;
	int32_t	ThreadFlags;
	voidstruct Ptr32	ServiceTable;
	struct _KWAIT_BLOCK	WaitBlock[4];
	struct _LIST_ENTRY	QueueListEntry;
	struct _KTRAP_FRAMEstruct Ptr32	TrapFrame;
	voidstruct Ptr32	FirstArgument;
	union {
		voidstruct Ptr32	CallbackStack;
		uint32_t	CallbackDepth;
	};
	uint8_t	ApcStateIndex;
	struct Char	BasePriority;
	struct Char	PriorityDecrement;
	uint8_t	Preempted;
	uint8_t	AdjustReason;
	struct Char	AdjustIncrement;
	struct Char	PreviousMode;
	struct Char	Saturation;
	uint32_t	SystemCallNumber;
	uint32_t	FreezeCount;
	struct _GROUP_AFFINITY	UserAffinity;
	struct _KPROCESSstruct Ptr32	Process;
	struct _GROUP_AFFINITY	Affinity;
	uint32_t	IdealProcessor;
	uint32_t	UserIdealProcessor;
	struct _KAPC_STATEstruct Ptr32	ApcStatePointer[2];
	union {
		struct _KAPC_STATE	SavedApcState;
		uint8_t	SavedApcStateFill[23];
	};
	uint8_t	WaitReason;
	struct Char	SuspendCount;
	struct Char	Spare1;
	uint8_t	OtherPlatformFill;
	voidstruct Ptr32	Win32Thread;
	voidstruct Ptr32	StackBase;
	union {
		struct _KAPC	SuspendApc;
		uint8_t	SuspendApcFill0[1];
	};
	uint8_t	ResourceIndex;
	uint8_t	SuspendApcFill1[3];
	uint8_t	QuantumReset;
	uint8_t	SuspendApcFill2[4];
	uint32_t	KernelTime;
	uint8_t	SuspendApcFill3[36];
	struct _KPRCBstruct Ptr32	WaitPrcb;
	uint8_t	SuspendApcFill4[40];
	voidstruct Ptr32	LegoData;
	uint8_t	SuspendApcFill5[47];
	uint8_t	LargeStack;
	uint32_t	UserTime;
	union {
		struct _KSEMAPHORE	SuspendSemaphore;
		uint8_t	SuspendSemaphorefill[20];
	};
	uint32_t	SListFaultCount;
	struct _LIST_ENTRY	ThreadListEntry;
	struct _LIST_ENTRY	MutantListHead;
	voidstruct Ptr32	SListFaultAddress;
	struct _KTHREAD_COUNTERSstruct Ptr32	ThreadCounters;
	struct _XSTATE_SAVEstruct Ptr32	XStateSave;
}__attribute__((packed));