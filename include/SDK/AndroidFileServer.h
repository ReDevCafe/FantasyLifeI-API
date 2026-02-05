
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/AndroidFileServer.EAFSActiveType
/// Size: 0x01 (1 bytes)
enum class EAFSActiveType : uint8_t
{
	EAFSActiveType__None                                                             = 0,
	EAFSActiveType__USBOnly                                                          = 1,
	EAFSActiveType__NetworkOnly                                                      = 2,
	EAFSActiveType__Combined                                                         = 3
};

/// Class /Script/AndroidFileServer.AndroidFileServerBPLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAndroidFileServerBPLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AndroidFileServer.AndroidFileServerBPLibrary.StopFileServer
	// bool StopFileServer(bool bUSB, bool bNetwork);                                                                           // [0x8ba1c00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AndroidFileServer.AndroidFileServerBPLibrary.StartFileServer
	// bool StartFileServer(bool bUSB, bool bNetwork, int32_t Port);                                                            // [0x8ba1b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AndroidFileServer.AndroidFileServerBPLibrary.IsFileServerRunning
	// TEnumAsByte<EAFSActiveType> IsFileServerRunning();                                                                       // [0x5a8bec0] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


