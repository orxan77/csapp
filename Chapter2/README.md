# Table of contents

- PP 2.5 is in `show_bytes.c`.
- PP 2.10, 2.11 in `inplace_swap.c`.
- PP 2.12 in `bit_masking.c`.
- PP 2.15 in `eq.c`.

# Useful notes

| Value | Word size (w) | 8-bit | 16-bit | 32-bit | 64-bit |
|----------------|--------|--------|---------|---------|---------|
| **UMax<sub>w</sub>** | Hex | `0xFF` | `0xFFFF` | `0xFFFFFFFF` | `0xFFFFFFFFFFFFFFFF` |
|  | Decimal | 255 | 65,535 | 4,294,967,295 | 18,446,744,073,709,551,615 |
| **TMin<sub>w</sub>** | Hex | `0x80` | `0x8000` | `0x80000000` | `0x8000000000000000` |
|  | Decimal | −128 | −32,768 | −2,147,483,648 | −9,223,372,036,854,775,808 |
| **TMax<sub>w</sub>** | Hex | `0x7F` | `0x7FFF` | `0x7FFFFFFF` | `0x7FFFFFFFFFFFFFFF` |
|  | Decimal | 127 | 32,767 | 2,147,483,647 | 9,223,372,036,854,775,807 |
| **−1** | Hex | `0xFF` | `0xFFFF` | `0xFFFFFFFF` | `0xFFFFFFFFFFFFFFFF` |
| **0** | Hex | `0x00` | `0x0000` | `0x00000000` | `0x0000000000000000` |

