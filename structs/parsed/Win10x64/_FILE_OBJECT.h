
struct _FILE_OBJECT {
	int16_t	Type;
	int16_t	Size;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _DEVICE_OBJECT	*DeviceObject;
	struct _VPB	*Vpb;
	void	*FsContext;
	void	*FsContext2;
	struct _SECTION_OBJECT_POINTERS	*SectionObjectPointer;
	void	*PrivateCacheMap;
	int32_t	FinalStatus;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _FILE_OBJECT	*RelatedFileObject;
	uint8_t	LockOperation;
	uint8_t	DeletePending;
	uint8_t	ReadAccess;
	uint8_t	WriteAccess;
	uint8_t	DeleteAccess;
	uint8_t	SharedRead;
	uint8_t	SharedWrite;
	uint8_t	SharedDelete;
	uint32_t	Flags;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _UNICODE_STRING	FileName;
	struct _LARGE_INTEGER	CurrentByteOffset;
	uint32_t	Waiters;
	uint32_t	Busy;
	void	*LastLock;
	struct _KEVENT	Lock;
	struct _KEVENT	Event;
	struct _IO_COMPLETION_CONTEXT	*CompletionContext;
	uint64_t	IrpListLock;
	struct _LIST_ENTRY	IrpList;
	void	*FileObjectExtension;
}__attribute__((packed));
