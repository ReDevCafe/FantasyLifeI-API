
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

#pragma pack(push, 0x1)

/// Enum /Script/LocalFileNetworkReplayStreaming.ELocalFileReplayResult
/// Size: 0x01 (1 bytes)
enum class ELocalFileReplayResult : uint8_t
{
	ELocalFileReplayResult__Success                                                  = 0,
	ELocalFileReplayResult__InvalidReplayInfo                                        = 1,
	ELocalFileReplayResult__StreamChunkIndexMismatch                                 = 2,
	ELocalFileReplayResult__DecompressBuffer                                         = 3,
	ELocalFileReplayResult__CompressionNotSupported                                  = 4,
	ELocalFileReplayResult__DecryptBuffer                                            = 5,
	ELocalFileReplayResult__EncryptionNotSupported                                   = 6,
	ELocalFileReplayResult__EncryptBuffer                                            = 7,
	ELocalFileReplayResult__CompressBuffer                                           = 8,
	ELocalFileReplayResult__InvalidName                                              = 9,
	ELocalFileReplayResult__FileWriter                                               = 10,
	ELocalFileReplayResult__Unknown                                                  = 11
};

#pragma pack(pop)


