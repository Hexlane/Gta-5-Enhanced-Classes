#pragma once
#include <cstdint>
namespace rage
{
	class CPedFactory;
	class CPlayerInfo
	{
	public:
		char pad_0000[0x34];      // 0x0000
		std::uint32_t m_PlayerId; // 0x0034
		char pad_0038[0x28];      // 0x0038
		CPedFactory* m_Ped;       // 0x0060
		char pad_0068[0x18];        // 0x0068
		std::uint32_t m_FrameFlags; // 0x0080
		char pad_0084[0x14];        // 0x0084
		float m_SwimSpeed; // 0x0098
		float m_RunSpeed;  // 0x009C
		char pad_00A0[0x20];         // 0x00A0
		std::uint32_t m_WantedLevel; // 0x00C0
		char pad_00C4[0x1C];         // 0x00C4
		std::uint64_t m_MoneyBalance;  // 0x00E0
		std::uint64_t m_TotalEarnings; // 0x00E8
		char pad_00F0[0x10];  // 0x00F0
		std::uint32_t m_Rank; // 0x0100
		char pad_0104[0x4];   // 0x0104
		float m_KD;          // 0x0108
		char pad_010C[0x14]; // 0x010C
		bool m_IsSpectating; // 0x0120
		bool m_IsInvincible; // 0x0121
		char pad_0122[0x6];  // 0x0122
		char pad_0128[0x100]; // 0x0128
	};
	static_assert(sizeof(CPlayerInfo) >= 0x228);
}
