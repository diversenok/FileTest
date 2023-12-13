/*****************************************************************************/
/* WinSDK.h                               Copyright (c) Ladislav Zezula 2016 */
/*---------------------------------------------------------------------------*/
/* Definitions for constants missing in SDK vor Visual Studio 2005           */
/*---------------------------------------------------------------------------*/
/*   Date    Ver   Who  Comment                                              */
/* --------  ----  ---  -------                                              */
/* 08.01.16  1.00  Lad  The first version of WinSDK.h                        */
/*****************************************************************************/

#ifndef __WINSDK_H__
#define __WINSDK_H__

//-----------------------------------------------------------------------------
// Win32k stuff (not included in VS 2005 SDK)

#ifndef WM_MOUSEWHEEL
#define WM_MOUSEWHEEL           0x020A
#endif

#ifndef PBS_MARQUEE
#define PBS_MARQUEE             0x08
#define PBM_SETMARQUEE          (WM_USER+10)
#endif

#ifndef BS_COMMANDLINK
#define BS_COMMANDLINK          0x0000000EL
#define BS_DEFCOMMANDLINK       0x0000000FL
#endif

#ifndef SS_REALSIZECONTROL
#define SS_REALSIZECONTROL      0x00000040L
#endif

#ifndef IDI_SHIELD
#define IDI_SHIELD              MAKEINTRESOURCE(32518)
#endif

#ifndef ERROR_INVALID_ACE_CONDITION
#define ERROR_INVALID_ACE_CONDITION      805L
#endif

//-----------------------------------------------------------------------------
// Kernel32 definitions (not included in VS 2005 SDK)

#ifndef FILE_FLAG_SESSION_AWARE
#define FILE_FLAG_SESSION_AWARE             0x00800000
#endif

#ifndef FILE_SESSION_AWARE
#define FILE_SESSION_AWARE                  0x00040000
#endif

#ifndef FILE_ATTRIBUTE_INTEGRITY_STREAM
#define FILE_ATTRIBUTE_INTEGRITY_STREAM     0x00008000
#endif

#ifndef FILE_ATTRIBUTE_VIRTUAL
#define FILE_ATTRIBUTE_VIRTUAL              0x00010000      // FILE_ATTRIBUTE_VIRTUAL is synthesized by LuaFV and not persisted on disk by NTFS
#endif

#ifndef FILE_ATTRIBUTE_NO_SCRUB_DATA
#define FILE_ATTRIBUTE_NO_SCRUB_DATA        0x00020000
#endif

#ifndef FILE_ATTRIBUTE_RECALL_ON_OPEN
#define FILE_ATTRIBUTE_RECALL_ON_OPEN       0x00040000
#endif

#ifndef FILE_ATTRIBUTE_PINNED
#define FILE_ATTRIBUTE_PINNED               0x00080000
#define FILE_ATTRIBUTE_UNPINNED             0x00100000
#endif

#ifndef FILE_ATTRIBUTE_RECALL_ON_DATA_ACCESS
#define FILE_ATTRIBUTE_RECALL_ON_DATA_ACCESS 0x00400000
#endif

#ifndef FILE_ATTRIBUTE_STRICTLY_SEQUENTIAL
#define FILE_ATTRIBUTE_STRICTLY_SEQUENTIAL  0x20000000  
#endif

#ifndef MEM_ROTATE
#define MEM_ROTATE                  0x800000
#endif

#ifndef MEM_RESET_UNDO
#define MEM_RESET_UNDO              0x01000000
#endif

#ifndef SEC_HUGE_PAGES
#define SEC_HUGE_PAGES              0x00020000  
#endif

#ifndef SEC_PARTITION_OWNER_HANDLE
#define SEC_PARTITION_OWNER_HANDLE  0x00040000
#endif

#ifndef SEC_64K_PAGES
#define SEC_64K_PAGES               0x00080000
#endif

#ifndef SEC_PROTECTED_IMAGE
#define SEC_PROTECTED_IMAGE         0x2000000
#endif

#ifndef SEC_WRITECOMBINE
#define SEC_WRITECOMBINE            0x40000000
#endif

#ifndef SECURITY_VALUE_MASK
#define SECURITY_VALUE_MASK                (SECURITY_ANONYMOUS | SECURITY_IDENTIFICATION | SECURITY_IMPERSONATION | SECURITY_DELEGATION)
#endif

#ifndef COPY_FILE_FAIL_IF_EXISTS
#define COPY_FILE_FAIL_IF_EXISTS              0x00000001
#define COPY_FILE_RESTARTABLE                 0x00000002
#define COPY_FILE_OPEN_SOURCE_FOR_WRITE       0x00000004
#define COPY_FILE_ALLOW_DECRYPTED_DESTINATION 0x00000008
#endif

#ifndef MOVEFILE_CREATE_HARDLINK
#define MOVEFILE_CREATE_HARDLINK        0x00000010
#define MOVEFILE_FAIL_IF_NOT_TRACKABLE  0x00000020
#endif

#ifndef TokenElevationType
#define TokenElevationType         (TOKEN_INFORMATION_CLASS)0x12
#define TokenElevation             (TOKEN_INFORMATION_CLASS)0x14
#define TokenVirtualizationEnabled (TOKEN_INFORMATION_CLASS)0x18
#define TokenIntegrityLevel        (TOKEN_INFORMATION_CLASS)0x19
#endif	// TokenElevationType

#ifndef ADS_RIGHT_DELETE
#define ADS_RIGHT_DS_CREATE_CHILD           0x1
#define ADS_RIGHT_DS_DELETE_CHILD           0x2
#define ADS_RIGHT_ACTRL_DS_LIST     	    0x4
#define ADS_RIGHT_DS_SELF           	    0x8
#define ADS_RIGHT_DS_READ_PROP      	    0x10
#define ADS_RIGHT_DS_WRITE_PROP     	    0x20
#define ADS_RIGHT_DS_DELETE_TREE            0x40
#define ADS_RIGHT_DS_LIST_OBJECT            0x80
#define ADS_RIGHT_DS_CONTROL_ACCESS         0x100
#define ADS_RIGHT_DELETE            	    0x10000
#define ADS_RIGHT_READ_CONTROL       	    0x20000
#define ADS_RIGHT_WRITE_DAC         	    0x40000
#define ADS_RIGHT_WRITE_OWNER               0x80000
#define ADS_RIGHT_SYNCHRONIZE               0x100000
#define ADS_RIGHT_ACCESS_SYSTEM_SECURITY    0x1000000
#define ADS_RIGHT_GENERIC_READ              0x80000000
#define ADS_RIGHT_GENERIC_WRITE             0x40000000
#define ADS_RIGHT_GENERIC_EXECUTE           0x20000000
#define ADS_RIGHT_GENERIC_ALL               0x10000000
#endif

//-----------------------------------------------------------------------------
// Flags for FILE_FS_ATTRIBUTE_INFORMATION::FileSystemAttributes

#ifndef FILE_RETURNS_CLEANUP_RESULT_INFO
#define FILE_RETURNS_CLEANUP_RESULT_INFO    0x00000200
#endif

#ifndef FILE_SUPPORTS_POSIX_UNLINK_RENAME
#define FILE_SUPPORTS_POSIX_UNLINK_RENAME   0x00000400
#endif

#ifndef FILE_SUPPORTS_BYPASS_IO
#define FILE_SUPPORTS_BYPASS_IO             0x00000800
#endif

#ifndef FILE_SUPPORTS_STREAM_SNAPSHOTS
#define FILE_SUPPORTS_STREAM_SNAPSHOTS      0x00001000
#endif

#ifndef FILE_SUPPORTS_CASE_SENSITIVE_DIRS
#define FILE_SUPPORTS_CASE_SENSITIVE_DIRS   0x00002000
#endif

#ifndef FILE_SUPPORTS_HARD_LINKS
#define FILE_SUPPORTS_HARD_LINKS            0x00400000
#endif

#ifndef FILE_SUPPORTS_EXTENDED_ATTRIBUTES
#define FILE_SUPPORTS_EXTENDED_ATTRIBUTES   0x00800000
#endif

#ifndef FILE_SUPPORTS_OPEN_BY_FILE_ID
#define FILE_SUPPORTS_OPEN_BY_FILE_ID       0x01000000
#endif

#ifndef FILE_SUPPORTS_USN_JOURNAL
#define FILE_SUPPORTS_USN_JOURNAL           0x02000000
#endif

#ifndef FILE_SUPPORTS_INTEGRITY_STREAMS
#define FILE_SUPPORTS_INTEGRITY_STREAMS     0x04000000
#endif

#ifndef FILE_SUPPORTS_BLOCK_REFCOUNTING
#define FILE_SUPPORTS_BLOCK_REFCOUNTING     0x08000000
#endif

#ifndef FILE_SUPPORTS_SPARSE_VDL
#define FILE_SUPPORTS_SPARSE_VDL            0x10000000
#endif

#ifndef FILE_DAX_VOLUME
#define FILE_DAX_VOLUME                     0x20000000
#endif

#ifndef FILE_SUPPORTS_GHOSTING
#define FILE_SUPPORTS_GHOSTING              0x40000000
#endif

//-----------------------------------------------------------------------------
// Security information types (not included in VS 2005 SDK)

#ifndef LABEL_SECURITY_INFORMATION
#define LABEL_SECURITY_INFORMATION              (0x00000010L)
#endif

#ifndef ATTRIBUTE_SECURITY_INFORMATION
#define ATTRIBUTE_SECURITY_INFORMATION          (0x00000020L)
#define SCOPE_SECURITY_INFORMATION              (0x00000040L)
#define PROCESS_TRUST_LABEL_SECURITY_INFORMATION (0x00000080L) 
#define ACCESS_FILTER_SECURITY_INFORMATION      (0x00000100L)
#define BACKUP_SECURITY_INFORMATION             (0x00010000L)
#define PROTECTED_DACL_SECURITY_INFORMATION     (0x80000000L)
#define PROTECTED_SACL_SECURITY_INFORMATION     (0x40000000L)
#define UNPROTECTED_DACL_SECURITY_INFORMATION   (0x20000000L)
#define UNPROTECTED_SACL_SECURITY_INFORMATION   (0x10000000L)
#endif

#ifndef SE_GROUP_INTEGRITY
#define SE_GROUP_INTEGRITY                      (0x00000020L)
#define SE_GROUP_INTEGRITY_ENABLED              (0x00000040L)
#endif // SE_GROUP_INTEGRITY

//-----------------------------------------------------------------------------
// ACEs version 3 (not included in older SDKs)

#ifndef ACCESS_MAX_MS_V3_ACE_TYPE
#define ACCESS_MAX_MS_V3_ACE_TYPE               (0x4)
#define ACCESS_ALLOWED_COMPOUND_ACE_TYPE        (0x4)
#endif

#ifndef COMPOUND_ACE_IMPERSONATION
#define COMPOUND_ACE_IMPERSONATION 1

typedef struct _COMPOUND_ACCESS_ALLOWED_ACE
{
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    USHORT CompoundAceType;     // Always COMPOUND_ACE_IMPERSONATION
    USHORT Reserved;
    ULONG SidStart;             // Server SID
    //                              // Client SID
} COMPOUND_ACCESS_ALLOWED_ACE, * PCOMPOUND_ACCESS_ALLOWED_ACE;
#endif

//-----------------------------------------------------------------------------
// ACEs version 4 (not included in older SDKs)

#ifndef ACCESS_MAX_MS_V4_ACE_TYPE
#define ACCESS_ALLOWED_OBJECT_ACE_TYPE          (0x5)
#define ACCESS_DENIED_OBJECT_ACE_TYPE           (0x6)
#define SYSTEM_AUDIT_OBJECT_ACE_TYPE            (0x7)
#define SYSTEM_ALARM_OBJECT_ACE_TYPE            (0x8)
#define ACCESS_MAX_MS_OBJECT_ACE_TYPE           (0x8)
#define ACCESS_MAX_MS_V4_ACE_TYPE               (0x8)
#endif

//-----------------------------------------------------------------------------
// ACEs version 5 (not included in older SDKs)

#ifndef ACCESS_MAX_MS_V5_ACE_TYPE
#define ACCESS_MAX_MS_V5_ACE_TYPE               (0x15)

#define ACCESS_ALLOWED_CALLBACK_ACE_TYPE        (0x9)
#define ACCESS_DENIED_CALLBACK_ACE_TYPE         (0xA)
#define ACCESS_ALLOWED_CALLBACK_OBJECT_ACE_TYPE (0xB)
#define ACCESS_DENIED_CALLBACK_OBJECT_ACE_TYPE  (0xC)
#define SYSTEM_AUDIT_CALLBACK_ACE_TYPE          (0xD)
#define SYSTEM_ALARM_CALLBACK_ACE_TYPE          (0xE)
#define SYSTEM_AUDIT_CALLBACK_OBJECT_ACE_TYPE   (0xF)
#define SYSTEM_ALARM_CALLBACK_OBJECT_ACE_TYPE   (0x10)

typedef struct _ACCESS_ALLOWED_CALLBACK_ACE
{
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
    // Opaque resouce manager specific data
} ACCESS_ALLOWED_CALLBACK_ACE, * PACCESS_ALLOWED_CALLBACK_ACE;

typedef struct _ACCESS_DENIED_CALLBACK_ACE
{
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
    // Opaque resouce manager specific data
} ACCESS_DENIED_CALLBACK_ACE, * PACCESS_DENIED_CALLBACK_ACE;

typedef struct _ACCESS_ALLOWED_CALLBACK_OBJECT_ACE
{
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD Flags;
    GUID ObjectType;
    GUID InheritedObjectType;
    DWORD SidStart;
    // Opaque resouce manager specific data
} ACCESS_ALLOWED_CALLBACK_OBJECT_ACE, * PACCESS_ALLOWED_CALLBACK_OBJECT_ACE;

typedef struct _ACCESS_DENIED_CALLBACK_OBJECT_ACE
{
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD Flags;
    GUID ObjectType;
    GUID InheritedObjectType;
    DWORD SidStart;
    // Opaque resouce manager specific data
} ACCESS_DENIED_CALLBACK_OBJECT_ACE, * PACCESS_DENIED_CALLBACK_OBJECT_ACE;

typedef struct _SYSTEM_AUDIT_CALLBACK_ACE
{
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
    // Opaque resouce manager specific data
} SYSTEM_AUDIT_CALLBACK_ACE, * PSYSTEM_AUDIT_CALLBACK_ACE;

typedef struct _SYSTEM_ALARM_CALLBACK_ACE
{
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
    // Opaque resouce manager specific data
} SYSTEM_ALARM_CALLBACK_ACE, * PSYSTEM_ALARM_CALLBACK_ACE;

typedef struct _SYSTEM_AUDIT_CALLBACK_OBJECT_ACE
{
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD Flags;
    GUID ObjectType;
    GUID InheritedObjectType;
    DWORD SidStart;
    // Opaque resouce manager specific data
} SYSTEM_AUDIT_CALLBACK_OBJECT_ACE, * PSYSTEM_AUDIT_CALLBACK_OBJECT_ACE;

typedef struct _SYSTEM_ALARM_CALLBACK_OBJECT_ACE
{
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD Flags;
    GUID ObjectType;
    GUID InheritedObjectType;
    DWORD SidStart;
    // Opaque resouce manager specific data
} SYSTEM_ALARM_CALLBACK_OBJECT_ACE, * PSYSTEM_ALARM_CALLBACK_OBJECT_ACE;

#endif

//-----------------------------------------------------------------------------
// SYSTEM_MANDATORY_LABEL_ACE (not included in older SDKs)
// Can be found on %USERPROFILE%\AppData\LocalLow

// Access mask for the mandatory label ACE
#ifndef SYSTEM_MANDATORY_LABEL_NO_WRITE_UP
#define SYSTEM_MANDATORY_LABEL_NO_WRITE_UP         0x1
#define SYSTEM_MANDATORY_LABEL_NO_READ_UP          0x2
#define SYSTEM_MANDATORY_LABEL_NO_EXECUTE_UP       0x4

#define SYSTEM_MANDATORY_LABEL_VALID_MASK (SYSTEM_MANDATORY_LABEL_NO_WRITE_UP   | \
                                           SYSTEM_MANDATORY_LABEL_NO_READ_UP    | \
                                           SYSTEM_MANDATORY_LABEL_NO_EXECUTE_UP)
#endif  // SYSTEM_MANDATORY_LABEL_NO_WRITE_UP

#ifndef SECURITY_MANDATORY_LABEL_AUTHORITY
#define SECURITY_MANDATORY_LABEL_AUTHORITY          {0,0,0,0,0,16}
#define SECURITY_MANDATORY_UNTRUSTED_RID            (0x00000000L)
#define SECURITY_MANDATORY_LOW_RID                  (0x00001000L)
#define SECURITY_MANDATORY_MEDIUM_RID               (0x00002000L)
#define SECURITY_MANDATORY_HIGH_RID                 (0x00003000L)
#define SECURITY_MANDATORY_SYSTEM_RID               (0x00004000L)
#define SECURITY_MANDATORY_PROTECTED_PROCESS_RID    (0x00005000L)
#endif  // SECURITY_MANDATORY_LABEL_AUTHORITY

#ifndef SECURITY_MANDATORY_MEDIUM_PLUS_RID
#define SECURITY_MANDATORY_MEDIUM_PLUS_RID          (SECURITY_MANDATORY_MEDIUM_RID + 0x100)
#endif

#ifndef SYSTEM_MANDATORY_LABEL_ACE_TYPE
#define SYSTEM_MANDATORY_LABEL_ACE_TYPE         (0x11)

typedef struct _SYSTEM_MANDATORY_LABEL_ACE
{
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
} SYSTEM_MANDATORY_LABEL_ACE, *PSYSTEM_MANDATORY_LABEL_ACE;

#endif  // SYSTEM_MANDATORY_LABEL_ACE_TYPE

//-----------------------------------------------------------------------------
// SYSTEM_RESOURCE_ATTRIBUTE_ACE (not included in older SDKs)
// Can be found on %USERPROFILE%\Downloads

#ifndef SYSTEM_RESOURCE_ATTRIBUTE_ACE_TYPE
#define SYSTEM_RESOURCE_ATTRIBUTE_ACE_TYPE      (0x12)

typedef struct _SYSTEM_RESOURCE_ATTRIBUTE_ACE
{
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;             // Sid followed by CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1 structure

} SYSTEM_RESOURCE_ATTRIBUTE_ACE, *PSYSTEM_RESOURCE_ATTRIBUTE_ACE;
#endif

//-----------------------------------------------------------------------------
// SYSTEM_SCOPED_POLICY_ID_ACE (not included in older SDKs)

#ifndef SYSTEM_SCOPED_POLICY_ID_ACE_TYPE
#define SYSTEM_SCOPED_POLICY_ID_ACE_TYPE        (0x13)
#define SECURITY_SCOPED_POLICY_ID_AUTHORITY     {0,0,0,0,0,17}

typedef struct _SYSTEM_SCOPED_POLICY_ID_ACE
{
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
} SYSTEM_SCOPED_POLICY_ID_ACE, *PSYSTEM_SCOPED_POLICY_ID_ACE;

#endif  // SYSTEM_SCOPED_POLICY_ID_ACE_TYPE

//-----------------------------------------------------------------------------
// SYSTEM_PROCESS_TRUST_LABEL_ACE (not included in older SDKs)
// Can be found on C:\Program Files\WindowsApps\<any subfolder>
// SYSTEM_PROCESS_TRUST_LABEL_ACE::Mask must have upper 8 bits zeroed
// Setting the trust label can only be done if
// * The thread token contains trust level SID and dominates the process token's SID 
// contains 

#ifndef SYSTEM_PROCESS_TRUST_LABEL_ACE_TYPE
#define SYSTEM_PROCESS_TRUST_LABEL_ACE_TYPE     (0x14)
#define SECURITY_PROCESS_TRUST_AUTHORITY        {0,0,0,0,0,19}

typedef struct _SYSTEM_PROCESS_TRUST_LABEL_ACE
{
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
} SYSTEM_PROCESS_TRUST_LABEL_ACE, *PSYSTEM_PROCESS_TRUST_LABEL_ACE;
#endif  // SYSTEM_PROCESS_TRUST_LABEL_ACE_TYPE

//-----------------------------------------------------------------------------
// SYSTEM_ACCESS_FILTER_ACE (not included in older SDKs)

#ifndef SYSTEM_ACCESS_FILTER_ACE_TYPE
#define SYSTEM_ACCESS_FILTER_ACE_TYPE           (0x15)

typedef struct _SYSTEM_ACCESS_FILTER_ACE
{
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    DWORD SidStart;
    // Filter Condition follows the SID
} SYSTEM_ACCESS_FILTER_ACE, *PSYSTEM_ACCESS_FILTER_ACE;
#endif  // SYSTEM_ACCESS_FILTER_ACE_TYPE

//-----------------------------------------------------------------------------
// Definitions for token mandatory label

#ifndef TOKEN_MANDATORY_POLICY_OFF
typedef struct _TOKEN_MANDATORY_LABEL
{
    SID_AND_ATTRIBUTES Label;

} TOKEN_MANDATORY_LABEL, *PTOKEN_MANDATORY_LABEL;

typedef enum _TOKEN_ELEVATION_TYPE
{
    TokenElevationTypeDefault = 1,
    TokenElevationTypeFull,
    TokenElevationTypeLimited,
} TOKEN_ELEVATION_TYPE, *PTOKEN_ELEVATION_TYPE;

typedef struct _TOKEN_ELEVATION
{
    DWORD TokenIsElevated;
} TOKEN_ELEVATION, *PTOKEN_ELEVATION;
#endif  // TOKEN_ELEVATION_TYPE

//-----------------------------------------------------------------------------
// Object ID definitions (not included in VS 2005 SDK)

typedef BOOL (WINAPI * ADDMANDATORYACE)(PACL pAcl,
                                        DWORD dwAceRevision,
                                        DWORD AceFlags,
                                        DWORD MandatoryPolicy,
                                        PSID pLabelSid);

//-----------------------------------------------------------------------------
// Object ID definitions (not included in VS 2005 SDK)

#ifndef FSCTL_GET_OBJECT_ID

#define FSCTL_SET_OBJECT_ID             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 38, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) // FILE_OBJECTID_BUFFER
#define FSCTL_GET_OBJECT_ID             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 39, METHOD_BUFFERED, FILE_ANY_ACCESS) // FILE_OBJECTID_BUFFER
#define FSCTL_DELETE_OBJECT_ID          CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 40, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_CREATE_OR_GET_OBJECT_ID   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 48, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SET_SPARSE                CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 49, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

typedef struct _FILE_OBJECTID_BUFFER {

    //
    //  This is the portion of the object id that is indexed.
    //

    BYTE  ObjectId[16];

    //
    //  This portion of the object id is not indexed, it's just
    //  some metadata for the user's benefit.
    //

    union {
        struct {
            BYTE  BirthVolumeId[16];
            BYTE  BirthObjectId[16];
            BYTE  DomainId[16];
        } ;
        BYTE  ExtendedInfo[48];
    };

} FILE_OBJECTID_BUFFER, *PFILE_OBJECTID_BUFFER;

#endif	// FSCTL_GET_OBJECT_ID

//-----------------------------------------------------------------------------
// OPLOCK definitions (not included in VS 2005 SDK)

#ifndef FSCTL_REQUEST_OPLOCK
#define FSCTL_REQUEST_OPLOCK                CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 144, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif

#ifndef FILE_OPLOCK_BROKEN_TO_LEVEL_2
#define FILE_OPLOCK_BROKEN_TO_LEVEL_2   0x00000007
#define FILE_OPLOCK_BROKEN_TO_NONE      0x00000008
#define FILE_OPBATCH_BREAK_UNDERWAY     0x00000009
#endif

#ifndef OPLOCK_LEVEL_CACHE_READ
#define OPLOCK_LEVEL_CACHE_READ         (0x00000001)
#define OPLOCK_LEVEL_CACHE_HANDLE       (0x00000002)
#define OPLOCK_LEVEL_CACHE_WRITE        (0x00000004)

#define REQUEST_OPLOCK_INPUT_FLAG_REQUEST               (0x00000001)
#define REQUEST_OPLOCK_INPUT_FLAG_ACK                   (0x00000002)
#define REQUEST_OPLOCK_INPUT_FLAG_COMPLETE_ACK_ON_CLOSE (0x00000004)

#define REQUEST_OPLOCK_CURRENT_VERSION          1

typedef struct _REQUEST_OPLOCK_INPUT_BUFFER {

    //
    //  This should be set to REQUEST_OPLOCK_CURRENT_VERSION.
    //

    WORD   StructureVersion;

    WORD   StructureLength;

    //
    //  One or more OPLOCK_LEVEL_CACHE_* values to indicate the desired level of the oplock.
    //

    DWORD RequestedOplockLevel;

    //
    //  REQUEST_OPLOCK_INPUT_FLAG_* flags.
    //

    DWORD Flags;

} REQUEST_OPLOCK_INPUT_BUFFER, *PREQUEST_OPLOCK_INPUT_BUFFER;

#define REQUEST_OPLOCK_OUTPUT_FLAG_ACK_REQUIRED     (0x00000001)
#define REQUEST_OPLOCK_OUTPUT_FLAG_MODES_PROVIDED   (0x00000002)

typedef struct _REQUEST_OPLOCK_OUTPUT_BUFFER {

    //
    //  This should be set to REQUEST_OPLOCK_CURRENT_VERSION.
    //

    WORD   StructureVersion;

    WORD   StructureLength;

    //
    //  One or more OPLOCK_LEVEL_CACHE_* values indicating the level of the oplock that
    //  was just broken.
    //

    DWORD OriginalOplockLevel;

    //
    //  One or more OPLOCK_LEVEL_CACHE_* values indicating the level to which an oplock
    //  is being broken, or an oplock level that may be available for granting, depending
    //  on the operation returning this buffer.
    //

    DWORD NewOplockLevel;

    //
    //  REQUEST_OPLOCK_OUTPUT_FLAG_* flags.
    //

    DWORD Flags;

    //
    //  When REQUEST_OPLOCK_OUTPUT_FLAG_MODES_PROVIDED is set, and when the
    //  OPLOCK_LEVEL_CACHE_HANDLE level is being lost in an oplock break, these fields
    //  contain the access mode and share mode of the request that is causing the break.
    //

    ACCESS_MASK AccessMode;

    WORD   ShareMode;

} REQUEST_OPLOCK_OUTPUT_BUFFER, *PREQUEST_OPLOCK_OUTPUT_BUFFER;
#endif	// OPLOCK_LEVEL_CACHE_READ

#ifndef PROGRESS_CONTINUE
#define PROGRESS_CONTINUE   0
#define PROGRESS_CANCEL     1
#define PROGRESS_STOP       2
#define PROGRESS_QUIET      3

typedef
DWORD
(WINAPI *LPPROGRESS_ROUTINE)(
    IN LARGE_INTEGER TotalFileSize,
    IN LARGE_INTEGER TotalBytesTransferred,
    IN LARGE_INTEGER StreamSize,
    IN LARGE_INTEGER StreamBytesTransferred,
    IN DWORD dwStreamNumber,
    IN DWORD dwCallbackReason,
    IN HANDLE hSourceFile,
    IN HANDLE hDestinationFile,
    IN LPVOID lpData OPTIONAL
    );
#endif	// PROGRESS_CONTINUE

//-----------------------------------------------------------------------------
// Defines for the reparse point

#define IO_REPARSE_TAG_MOUNT_POINT              (0xA0000003L)       // winnt
#define IO_REPARSE_TAG_HSM                      (0xC0000004L)       // winnt
#define IO_REPARSE_TAG_DRIVE_EXTENDER           (0x80000005L)
#define IO_REPARSE_TAG_HSM2                     (0x80000006L)       // winnt
#define IO_REPARSE_TAG_SIS                      (0x80000007L)       // winnt
#define IO_REPARSE_TAG_WIM                      (0x80000008L)       // winnt
#define IO_REPARSE_TAG_CSV                      (0x80000009L)       // winnt
#define IO_REPARSE_TAG_DFS                      (0x8000000AL)       // winnt
#define IO_REPARSE_TAG_FILTER_MANAGER           (0x8000000BL)
#define IO_REPARSE_TAG_SYMLINK                  (0xA000000CL)       // winnt
#define IO_REPARSE_TAG_IIS_CACHE                (0xA0000010L)
#define IO_REPARSE_TAG_DFSR                     (0x80000012L)       // winnt
#define IO_REPARSE_TAG_DEDUP                    (0x80000013L)       // winnt
#define IO_REPARSE_TAG_APPXSTRM                 (0xC0000014L)
#define IO_REPARSE_TAG_NFS                      (0x80000014L)       // winnt
#define IO_REPARSE_TAG_FILE_PLACEHOLDER         (0x80000015L)       // winnt
#define IO_REPARSE_TAG_DFM                      (0x80000016L)
#define IO_REPARSE_TAG_WOF                      (0x80000017L)       // winnt
#define IO_REPARSE_TAG_WCI                      (0x80000018L)       // winnt
#define IO_REPARSE_TAG_WCI_1                    (0x90001018L)       // winnt
#define IO_REPARSE_TAG_GLOBAL_REPARSE           (0xA0000019L)       // winnt
#define IO_REPARSE_TAG_CLOUD                    (0x9000001AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_1                  (0x9000101AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_2                  (0x9000201AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_3                  (0x9000301AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_4                  (0x9000401AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_5                  (0x9000501AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_6                  (0x9000601AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_7                  (0x9000701AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_8                  (0x9000801AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_9                  (0x9000901AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_A                  (0x9000A01AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_B                  (0x9000B01AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_C                  (0x9000C01AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_D                  (0x9000D01AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_E                  (0x9000E01AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_F                  (0x9000F01AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_MASK               (0x0000F000L)       // winnt
#define IO_REPARSE_TAG_APPEXECLINK              (0x8000001BL)       // winnt
#define IO_REPARSE_TAG_PROJFS                   (0x9000001CL)       // winnt
#define IO_REPARSE_TAG_LX_SYMLINK               (0xA000001DL)
#define IO_REPARSE_TAG_STORAGE_SYNC             (0x8000001EL)       // winnt
#define IO_REPARSE_TAG_WCI_TOMBSTONE            (0xA000001FL)       // winnt
#define IO_REPARSE_TAG_UNHANDLED                (0x80000020L)       // winnt
#define IO_REPARSE_TAG_ONEDRIVE                 (0x80000021L)       // winnt
#define IO_REPARSE_TAG_PROJFS_TOMBSTONE         (0xA0000022L)       // winnt
#define IO_REPARSE_TAG_AF_UNIX                  (0x80000023L)       // winnt
#define IO_REPARSE_TAG_LX_FIFO                  (0x80000024L)
#define IO_REPARSE_TAG_LX_CHR                   (0x80000025L)
#define IO_REPARSE_TAG_LX_BLK                   (0x80000026L)

#ifndef FSCTL_SET_REPARSE_POINT
#define FSCTL_SET_REPARSE_POINT         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 41, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) // REPARSE_DATA_BUFFER,
#define FSCTL_GET_REPARSE_POINT         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 42, METHOD_BUFFERED, FILE_ANY_ACCESS) // REPARSE_DATA_BUFFER
#define FSCTL_DELETE_REPARSE_POINT      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 43, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) // REPARSE_DATA_BUFFER,
#endif  // FSCTL_SET_REPARSE_POINT

typedef struct _REPARSE_DATA_BUFFER
{
    ULONG  ReparseTag;                          // Reparse tag type
    USHORT ReparseDataLength;                   // Length of the reparse data
    USHORT Reserved;                            // Used internally by NTFS to store remaining length

    union
    {
        // Structure for IO_REPARSE_TAG_SYMLINK
        // Handled by nt!IoCompleteRequest
        struct
        {
            USHORT SubstituteNameOffset;
            USHORT SubstituteNameLength;
            USHORT PrintNameOffset;
            USHORT PrintNameLength;
            ULONG Flags;
            WCHAR PathBuffer[1];
        } SymbolicLinkReparseBuffer;

        // Structure for IO_REPARSE_TAG_MOUNT_POINT
        // Handled by nt!IoCompleteRequest
        struct
        {
            USHORT SubstituteNameOffset;
            USHORT SubstituteNameLength;
            USHORT PrintNameOffset;
            USHORT PrintNameLength;
            WCHAR PathBuffer[1];
        } MountPointReparseBuffer;

        // Structure for IO_REPARSE_TAG_WIM
        // Handled by wimmount!FPOpenReparseTarget->wimserv.dll (wimsrv!ImageExtract)
        struct
        {
            GUID ImageGuid;                     // GUID of the mounted VIM image
            BYTE ImagePathHash[0x14];           // Hash of the path to the file within the image
        } WimImageReparseBuffer;

        // Structure for IO_REPARSE_TAG_WOF
        // Handled by FSCTL_GET_EXTERNAL_BACKING, FSCTL_SET_EXTERNAL_BACKING in NTFS (Windows 10+)
        struct
        {
            //-- WOF_EXTERNAL_INFO --------------------
            ULONG Wof_Version;                  // Should be 1 (WOF_CURRENT_VERSION)
            ULONG Wof_Provider;                 // Should be 2 (WOF_PROVIDER_FILE)

            //-- FILE_PROVIDER_EXTERNAL_INFO_V1 --------------------
            ULONG FileInfo_Version;             // Should be 1 (FILE_PROVIDER_CURRENT_VERSION)
            ULONG FileInfo_Algorithm;           // Usually 0 (FILE_PROVIDER_COMPRESSION_XPRESS4K)
        } WofReparseBuffer;

        // Structure for IO_REPARSE_TAG_APPEXECLINK
        struct
        {
            ULONG StringCount;                  // Number of the strings in the StringList, separated by '\0'
            WCHAR StringList[1];                // Multistring (strings separated by '\0', terminated by '\0\0')
        } AppExecLinkReparseBuffer;

        // Structure for IO_REPARSE_TAG_WCI (0x80000018)
        struct
        {
            ULONG Version;                      // Expected to be 1 by wcifs.sys
            ULONG Reserved;
            GUID  LookupGuid;                   // GUID used for lookup in wcifs!WcLookupLayer
            USHORT WciNameLength;               // Length of the WCI subname, in bytes
            WCHAR WciName[1];                   // The WCI subname (not zero terminated)
        } WcifsReparseBuffer;

        // Handled by cldflt.sys!HsmpRpReadBuffer
        struct
        {
            USHORT Flags;                       // Flags (0x8000 = not compressed)
            USHORT Length;                      // Length of the data (uncompressed)
            BYTE RawData[1];                    // To be RtlDecompressBuffer-ed
        } HsmReparseBufferRaw;

        // Dummy structure
        struct
        {
            UCHAR  DataBuffer[1];
        } GenericReparseBuffer;
    } DUMMYUNIONNAME;
} REPARSE_DATA_BUFFER, *PREPARSE_DATA_BUFFER;

#define REPARSE_DATA_BUFFER_HEADER_SIZE   FIELD_OFFSET(REPARSE_DATA_BUFFER, GenericReparseBuffer)

//-----------------------------------------------------------------------------
// Other definitions

#ifndef QUERY_STORAGE_CLASSES_FLAGS_MEASURE_WRITE
#define QUERY_STORAGE_CLASSES_FLAGS_MEASURE_WRITE   0x80000000
#define QUERY_STORAGE_CLASSES_FLAGS_MEASURE_READ    0x40000000
#endif

#ifndef SECURITY_MAX_SID_STRING_CHARACTERS
#define SECURITY_MAX_SID_STRING_CHARACTERS (2 + 4 + 15 + (11 * SID_MAX_SUB_AUTHORITIES) + 1)
#endif

#endif // __WINSDK_H__
