#pragma once
#pragma pack(1)

struct ClientPacketInfo // 12 bytes
{
	int Id;
	int Unk;
	unsigned short Length;
	short Unk0000;
};

const unsigned short StaticPacketTable[] =
{
	0x0068, // 0x00
	0x0005, // 0x01
	0x0007, // 0x02
	0x8000, // 0x03
	0x0002, // 0x04
	0x0005, // 0x05
	0x0005, // 0x06
	0x0007, // 0x07
	0x000E, // 0x08
	0x0005, // 0x09
	0x000B, // 0x0A
	0x010A, // 0x0B
	0x8000, // 0x0C
	0x0003, // 0x0D
	0x8000, // 0x0E
	0x003D, // 0x0F
	0x00D7, // 0x10
	0x8000, // 0x11
	0x8000, // 0x12
	0x000A, // 0x13
	0x0006, // 0x14
	0x0009, // 0x15
	0x0001, // 0x16
	0x8000, // 0x17
	0x8000, // 0x18
	0x8000, // 0x19
	0x8000, // 0x1A
	0x0025, // 0x1B
	0x8000, // 0x1C
	0x0005, // 0x1D
	0x0004, // 0x1E
	0x0008, // 0x1F
	0x0013, // 0x20
	0x0008, // 0x21
	0x0003, // 0x22
	0x001A, // 0x23
	0x0007, // 0x24
	0x0014, // 0x25
	0x0005, // 0x26
	0x0002, // 0x27
	0x0005, // 0x28
	0x0001, // 0x29
	0x0005, // 0x2A
	0x0002, // 0x2B
	0x0002, // 0x2C
	0x0011, // 0x2D
	0x000F, // 0x2E
	0x000A, // 0x2F
	0x0005, // 0x30
	0x0001, // 0x31
	0x0002, // 0x32
	0x0002, // 0x33
	0x000A, // 0x34
	0x028D, // 0x35
	0x8000, // 0x36
	0x0008, // 0x37
	0x0007, // 0x38
	0x0009, // 0x39
	0x8000, // 0x3A
	0x8000, // 0x3B
	0x8000, // 0x3C
	0x0002, // 0x3D
	0x0025, // 0x3E
	0x8000, // 0x3F
	0x00C9, // 0x40
	0x8000, // 0x41
	0x8000, // 0x42
	0x0229, // 0x43
	0x02C9, // 0x44
	0x0005, // 0x45
	0x8000, // 0x46
	0x000B, // 0x47
	0x0049, // 0x48
	0x005D, // 0x49
	0x0005, // 0x4A
	0x0009, // 0x4B
	0x8000, // 0x4C
	0x8000, // 0x4D
	0x0006, // 0x4E
	0x0002, // 0x4F
	0x8000, // 0x50
	0x8000, // 0x51
	0x8000, // 0x52
	0x0002, // 0x53
	0x000C, // 0x54
	0x0001, // 0x55
	0x000B, // 0x56
	0x006E, // 0x57
	0x006A, // 0x58
	0x8000, // 0x59
	0x8000, // 0x5A
	0x0004, // 0x5B
	0x0002, // 0x5C
	0x0049, // 0x5D
	0x8000, // 0x5E
	0x0031, // 0x5F
	0x0005, // 0x60
	0x0009, // 0x61
	0x000F, // 0x62
	0x000D, // 0x63
	0x0001, // 0x64
	0x0004, // 0x65
	0x8000, // 0x66
	0x0015, // 0x67
	0x8000, // 0x68
	0x8000, // 0x69
	0x0003, // 0x6A
	0x0009, // 0x6B
	0x0013, // 0x6C
	0x0003, // 0x6D
	0x000E, // 0x6E
	0x8000, // 0x6F
	0x001C, // 0x70
	0x8000, // 0x71
	0x0005, // 0x72
	0x0002, // 0x73
	0x8000, // 0x74
	0x0023, // 0x75
	0x0010, // 0x76
	0x0011, // 0x77
	0x8000, // 0x78
	0x0009, // 0x79
	0x8000, // 0x7A
	0x0002, // 0x7B
	0x8000, // 0x7C
	0x000D, // 0x7D
	0x0002, // 0x7E
	0x8000, // 0x7F
	0x003E, // 0x80
	0x8000, // 0x81
	0x0002, // 0x82
	0x0027, // 0x83
	0x0045, // 0x84
	0x0002, // 0x85
	0x8000, // 0x86
	0x8000, // 0x87
	0x0042, // 0x88
	0x8000, // 0x89
	0x8000, // 0x8A
	0x8000, // 0x8B
	0x000B, // 0x8C
	0x8000, // 0x8D
	0x8000, // 0x8E
	0x8000, // 0x8F
	0x0013, // 0x90
	0x0041, // 0x91
	0x8000, // 0x92
	0x0063, // 0x93
	0x8000, // 0x94
	0x0009, // 0x95
	0x8000, // 0x96
	0x0002, // 0x97
	0x8000, // 0x98
	0x001A, // 0x99
	0x8000, // 0x9A
	0x0102, // 0x9B
	0x0135, // 0x9C
	0x0033, // 0x9D
	0x8000, // 0x9E
	0x8000, // 0x9F
	0x0003, // 0xA0
	0x0009, // 0xA1
	0x0009, // 0xA2
	0x0009, // 0xA3
	0x0095, // 0xA4
	0x8000, // 0xA5
	0x8000, // 0xA6
	0x0004, // 0xA7
	0x8000, // 0xA8
	0x8000, // 0xA9
	0x0005, // 0xAA
	0x8000, // 0xAB
	0x8000, // 0xAC
	0x8000, // 0xAD
	0x8000, // 0xAE
	0x000D, // 0xAF
	0x8000, // 0xB0
	0x8000, // 0xB1
	0x8000, // 0xB2
	0x8000, // 0xB3
	0x8000, // 0xB4
	0x0040, // 0xB5
	0x0009, // 0xB6
	0x8000, // 0xB7
	0x8000, // 0xB8
	0x0003, // 0xB9
	0x0006, // 0xBA
	0x0009, // 0xBB
	0x0003, // 0xBC
	0x8000, // 0xBD
	0x8000, // 0xBE
	0x8000, // 0xBF
	0x0024, // 0xC0
	0x8000, // 0xC1
	0x8000, // 0xC2
	0x8000, // 0xC3
	0x0006, // 0xC4
	0x00CB, // 0xC5
	0x0001, // 0xC6
	0x0031, // 0xC7
	0x0002, // 0xC8
	0x0006, // 0xC9
	0x0006, // 0xCA
	0x0007, // 0xCB
	0x8000, // 0xCC
	0x0001, // 0xCD
	0x8000, // 0xCE
	0x004E, // 0xCF
	0x8000, // 0xD0
	0x0002, // 0xD1
	0x0019, // 0xD2
	0x8000, // 0xD3
	0x8000, // 0xD4
	0x8000, // 0xD5
	0x8000, // 0xD6
	0x8000, // 0xD7
	0x8000, // 0xD8
	0x010C, // 0xD9
	0x8000, // 0xDA
	0x8000, // 0xDB
	0x8000, // dc
	0x8000, // dd
	0x8000, // de
	0x8000, // df
	0x8000, // e0 
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000, // ef
	0x8000, // f0
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000,
	0x8000, // ff
};

