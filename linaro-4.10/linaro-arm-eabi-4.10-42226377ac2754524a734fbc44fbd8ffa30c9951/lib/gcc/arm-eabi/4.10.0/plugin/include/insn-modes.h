/* Generated automatically from machmode.def and config/arm/arm-modes.def
   by genmodes.  */

#ifndef GCC_INSN_MODES_H
#define GCC_INSN_MODES_H

enum machine_mode
{
  VOIDmode,                /* machmode.def:172 */
  BLKmode,                 /* machmode.def:176 */
  CCmode,                  /* machmode.def:207 */
  CC_NOOVmode,             /* config/arm/arm-modes.def:46 */
  CC_Zmode,                /* config/arm/arm-modes.def:47 */
  CC_CZmode,               /* config/arm/arm-modes.def:48 */
  CC_NCVmode,              /* config/arm/arm-modes.def:49 */
  CC_SWPmode,              /* config/arm/arm-modes.def:50 */
  CCFPmode,                /* config/arm/arm-modes.def:51 */
  CCFPEmode,               /* config/arm/arm-modes.def:52 */
  CC_DNEmode,              /* config/arm/arm-modes.def:53 */
  CC_DEQmode,              /* config/arm/arm-modes.def:54 */
  CC_DLEmode,              /* config/arm/arm-modes.def:55 */
  CC_DLTmode,              /* config/arm/arm-modes.def:56 */
  CC_DGEmode,              /* config/arm/arm-modes.def:57 */
  CC_DGTmode,              /* config/arm/arm-modes.def:58 */
  CC_DLEUmode,             /* config/arm/arm-modes.def:59 */
  CC_DLTUmode,             /* config/arm/arm-modes.def:60 */
  CC_DGEUmode,             /* config/arm/arm-modes.def:61 */
  CC_DGTUmode,             /* config/arm/arm-modes.def:62 */
  CC_Cmode,                /* config/arm/arm-modes.def:63 */
  CC_Nmode,                /* config/arm/arm-modes.def:64 */
  BImode,                  /* machmode.def:179 */
  QImode,                  /* machmode.def:187 */
  HImode,                  /* machmode.def:188 */
  SImode,                  /* machmode.def:189 */
  DImode,                  /* machmode.def:190 */
  TImode,                  /* machmode.def:191 */
  EImode,                  /* config/arm/arm-modes.def:81 */
  OImode,                  /* config/arm/arm-modes.def:82 */
  CImode,                  /* config/arm/arm-modes.def:83 */
  XImode,                  /* config/arm/arm-modes.def:84 */
  QQmode,                  /* machmode.def:210 */
  HQmode,                  /* machmode.def:211 */
  SQmode,                  /* machmode.def:212 */
  DQmode,                  /* machmode.def:213 */
  TQmode,                  /* machmode.def:214 */
  UQQmode,                 /* machmode.def:216 */
  UHQmode,                 /* machmode.def:217 */
  USQmode,                 /* machmode.def:218 */
  UDQmode,                 /* machmode.def:219 */
  UTQmode,                 /* machmode.def:220 */
  HAmode,                  /* machmode.def:222 */
  SAmode,                  /* machmode.def:223 */
  DAmode,                  /* machmode.def:224 */
  TAmode,                  /* machmode.def:225 */
  UHAmode,                 /* machmode.def:227 */
  USAmode,                 /* machmode.def:228 */
  UDAmode,                 /* machmode.def:229 */
  UTAmode,                 /* machmode.def:230 */
  HFmode,                  /* config/arm/arm-modes.def:29 */
  SFmode,                  /* machmode.def:202 */
  DFmode,                  /* machmode.def:203 */
  XFmode,                  /* config/arm/arm-modes.def:26 */
  SDmode,                  /* machmode.def:242 */
  DDmode,                  /* machmode.def:243 */
  TDmode,                  /* machmode.def:244 */
  CQImode,                 /* machmode.def:238 */
  CHImode,                 /* machmode.def:238 */
  CSImode,                 /* machmode.def:238 */
  CDImode,                 /* machmode.def:238 */
  CTImode,                 /* machmode.def:238 */
  CEImode,                 /* machmode.def:238 */
  COImode,                 /* machmode.def:238 */
  CCImode,                 /* machmode.def:238 */
  CXImode,                 /* machmode.def:238 */
  HCmode,                  /* machmode.def:239 */
  SCmode,                  /* machmode.def:239 */
  DCmode,                  /* machmode.def:239 */
  XCmode,                  /* machmode.def:239 */
  V4QImode,                /* config/arm/arm-modes.def:67 */
  V2HImode,                /* config/arm/arm-modes.def:67 */
  V8QImode,                /* config/arm/arm-modes.def:68 */
  V4HImode,                /* config/arm/arm-modes.def:68 */
  V2SImode,                /* config/arm/arm-modes.def:68 */
  V16QImode,               /* config/arm/arm-modes.def:69 */
  V8HImode,                /* config/arm/arm-modes.def:69 */
  V4SImode,                /* config/arm/arm-modes.def:69 */
  V2DImode,                /* config/arm/arm-modes.def:69 */
  V4QQmode,                /* config/arm/arm-modes.def:74 */
  V2HQmode,                /* config/arm/arm-modes.def:74 */
  V4UQQmode,               /* config/arm/arm-modes.def:75 */
  V2UHQmode,               /* config/arm/arm-modes.def:75 */
  V2HAmode,                /* config/arm/arm-modes.def:76 */
  V2UHAmode,               /* config/arm/arm-modes.def:77 */
  V4HFmode,                /* config/arm/arm-modes.def:70 */
  V2SFmode,                /* config/arm/arm-modes.def:70 */
  V8HFmode,                /* config/arm/arm-modes.def:71 */
  V4SFmode,                /* config/arm/arm-modes.def:71 */
  V2DFmode,                /* config/arm/arm-modes.def:71 */
  MAX_MACHINE_MODE,

  MIN_MODE_RANDOM = VOIDmode,
  MAX_MODE_RANDOM = BLKmode,

  MIN_MODE_CC = CCmode,
  MAX_MODE_CC = CC_Nmode,

  MIN_MODE_INT = QImode,
  MAX_MODE_INT = XImode,

  MIN_MODE_PARTIAL_INT = VOIDmode,
  MAX_MODE_PARTIAL_INT = VOIDmode,

  MIN_MODE_FRACT = QQmode,
  MAX_MODE_FRACT = TQmode,

  MIN_MODE_UFRACT = UQQmode,
  MAX_MODE_UFRACT = UTQmode,

  MIN_MODE_ACCUM = HAmode,
  MAX_MODE_ACCUM = TAmode,

  MIN_MODE_UACCUM = UHAmode,
  MAX_MODE_UACCUM = UTAmode,

  MIN_MODE_FLOAT = HFmode,
  MAX_MODE_FLOAT = XFmode,

  MIN_MODE_DECIMAL_FLOAT = SDmode,
  MAX_MODE_DECIMAL_FLOAT = TDmode,

  MIN_MODE_COMPLEX_INT = CQImode,
  MAX_MODE_COMPLEX_INT = CXImode,

  MIN_MODE_COMPLEX_FLOAT = HCmode,
  MAX_MODE_COMPLEX_FLOAT = XCmode,

  MIN_MODE_VECTOR_INT = V4QImode,
  MAX_MODE_VECTOR_INT = V2DImode,

  MIN_MODE_VECTOR_FRACT = V4QQmode,
  MAX_MODE_VECTOR_FRACT = V2HQmode,

  MIN_MODE_VECTOR_UFRACT = V4UQQmode,
  MAX_MODE_VECTOR_UFRACT = V2UHQmode,

  MIN_MODE_VECTOR_ACCUM = V2HAmode,
  MAX_MODE_VECTOR_ACCUM = V2HAmode,

  MIN_MODE_VECTOR_UACCUM = V2UHAmode,
  MAX_MODE_VECTOR_UACCUM = V2UHAmode,

  MIN_MODE_VECTOR_FLOAT = V4HFmode,
  MAX_MODE_VECTOR_FLOAT = V2DFmode,

  NUM_MACHINE_MODES = MAX_MACHINE_MODE
};

#define CONST_MODE_SIZE const
#define CONST_MODE_BASE_ALIGN const
#define CONST_MODE_IBIT const
#define CONST_MODE_FBIT const

#define BITS_PER_UNIT (8)
#define MAX_BITSIZE_MODE_ANY_INT (64*BITS_PER_UNIT)
#define MAX_BITSIZE_MODE_ANY_MODE (128*BITS_PER_UNIT)

#if GCC_VERSION >= 4001

#ifdef __cplusplus
inline __attribute__((__always_inline__))
#else
extern __inline__ __attribute__((__always_inline__, __gnu_inline__))
#endif
unsigned char
mode_size_inline (enum machine_mode mode)
{
  extern const unsigned char mode_size[NUM_MACHINE_MODES];
  switch (mode)
    {
    case VOIDmode: return 0;
    case BLKmode: return 0;
    case CCmode: return 4;
    case CC_NOOVmode: return 4;
    case CC_Zmode: return 4;
    case CC_CZmode: return 4;
    case CC_NCVmode: return 4;
    case CC_SWPmode: return 4;
    case CCFPmode: return 4;
    case CCFPEmode: return 4;
    case CC_DNEmode: return 4;
    case CC_DEQmode: return 4;
    case CC_DLEmode: return 4;
    case CC_DLTmode: return 4;
    case CC_DGEmode: return 4;
    case CC_DGTmode: return 4;
    case CC_DLEUmode: return 4;
    case CC_DLTUmode: return 4;
    case CC_DGEUmode: return 4;
    case CC_DGTUmode: return 4;
    case CC_Cmode: return 4;
    case CC_Nmode: return 4;
    case BImode: return 1;
    case QImode: return 1;
    case HImode: return 2;
    case SImode: return 4;
    case DImode: return 8;
    case TImode: return 16;
    case EImode: return 24;
    case OImode: return 32;
    case CImode: return 48;
    case XImode: return 64;
    case QQmode: return 1;
    case HQmode: return 2;
    case SQmode: return 4;
    case DQmode: return 8;
    case TQmode: return 16;
    case UQQmode: return 1;
    case UHQmode: return 2;
    case USQmode: return 4;
    case UDQmode: return 8;
    case UTQmode: return 16;
    case HAmode: return 2;
    case SAmode: return 4;
    case DAmode: return 8;
    case TAmode: return 16;
    case UHAmode: return 2;
    case USAmode: return 4;
    case UDAmode: return 8;
    case UTAmode: return 16;
    case HFmode: return 2;
    case SFmode: return 4;
    case DFmode: return 8;
    case XFmode: return 12;
    case SDmode: return 4;
    case DDmode: return 8;
    case TDmode: return 16;
    case CQImode: return 2;
    case CHImode: return 4;
    case CSImode: return 8;
    case CDImode: return 16;
    case CTImode: return 32;
    case CEImode: return 48;
    case COImode: return 64;
    case CCImode: return 96;
    case CXImode: return 128;
    case HCmode: return 4;
    case SCmode: return 8;
    case DCmode: return 16;
    case XCmode: return 24;
    case V4QImode: return 4;
    case V2HImode: return 4;
    case V8QImode: return 8;
    case V4HImode: return 8;
    case V2SImode: return 8;
    case V16QImode: return 16;
    case V8HImode: return 16;
    case V4SImode: return 16;
    case V2DImode: return 16;
    case V4QQmode: return 4;
    case V2HQmode: return 4;
    case V4UQQmode: return 4;
    case V2UHQmode: return 4;
    case V2HAmode: return 4;
    case V2UHAmode: return 4;
    case V4HFmode: return 8;
    case V2SFmode: return 8;
    case V8HFmode: return 16;
    case V4SFmode: return 16;
    case V2DFmode: return 16;
    default: return mode_size[mode];
    }
}

#ifdef __cplusplus
inline __attribute__((__always_inline__))
#else
extern __inline__ __attribute__((__always_inline__, __gnu_inline__))
#endif
unsigned char
mode_nunits_inline (enum machine_mode mode)
{
  extern const unsigned char mode_nunits[NUM_MACHINE_MODES];
  switch (mode)
    {
    case VOIDmode: return 0;
    case BLKmode: return 0;
    case CCmode: return 1;
    case CC_NOOVmode: return 1;
    case CC_Zmode: return 1;
    case CC_CZmode: return 1;
    case CC_NCVmode: return 1;
    case CC_SWPmode: return 1;
    case CCFPmode: return 1;
    case CCFPEmode: return 1;
    case CC_DNEmode: return 1;
    case CC_DEQmode: return 1;
    case CC_DLEmode: return 1;
    case CC_DLTmode: return 1;
    case CC_DGEmode: return 1;
    case CC_DGTmode: return 1;
    case CC_DLEUmode: return 1;
    case CC_DLTUmode: return 1;
    case CC_DGEUmode: return 1;
    case CC_DGTUmode: return 1;
    case CC_Cmode: return 1;
    case CC_Nmode: return 1;
    case BImode: return 1;
    case QImode: return 1;
    case HImode: return 1;
    case SImode: return 1;
    case DImode: return 1;
    case TImode: return 1;
    case EImode: return 1;
    case OImode: return 1;
    case CImode: return 1;
    case XImode: return 1;
    case QQmode: return 1;
    case HQmode: return 1;
    case SQmode: return 1;
    case DQmode: return 1;
    case TQmode: return 1;
    case UQQmode: return 1;
    case UHQmode: return 1;
    case USQmode: return 1;
    case UDQmode: return 1;
    case UTQmode: return 1;
    case HAmode: return 1;
    case SAmode: return 1;
    case DAmode: return 1;
    case TAmode: return 1;
    case UHAmode: return 1;
    case USAmode: return 1;
    case UDAmode: return 1;
    case UTAmode: return 1;
    case HFmode: return 1;
    case SFmode: return 1;
    case DFmode: return 1;
    case XFmode: return 1;
    case SDmode: return 1;
    case DDmode: return 1;
    case TDmode: return 1;
    case CQImode: return 2;
    case CHImode: return 2;
    case CSImode: return 2;
    case CDImode: return 2;
    case CTImode: return 2;
    case CEImode: return 2;
    case COImode: return 2;
    case CCImode: return 2;
    case CXImode: return 2;
    case HCmode: return 2;
    case SCmode: return 2;
    case DCmode: return 2;
    case XCmode: return 2;
    case V4QImode: return 4;
    case V2HImode: return 2;
    case V8QImode: return 8;
    case V4HImode: return 4;
    case V2SImode: return 2;
    case V16QImode: return 16;
    case V8HImode: return 8;
    case V4SImode: return 4;
    case V2DImode: return 2;
    case V4QQmode: return 4;
    case V2HQmode: return 2;
    case V4UQQmode: return 4;
    case V2UHQmode: return 2;
    case V2HAmode: return 2;
    case V2UHAmode: return 2;
    case V4HFmode: return 4;
    case V2SFmode: return 2;
    case V8HFmode: return 8;
    case V4SFmode: return 4;
    case V2DFmode: return 2;
    default: return mode_nunits[mode];
    }
}

#ifdef __cplusplus
inline __attribute__((__always_inline__))
#else
extern __inline__ __attribute__((__always_inline__, __gnu_inline__))
#endif
unsigned char
mode_inner_inline (enum machine_mode mode)
{
  extern const unsigned char mode_inner[NUM_MACHINE_MODES];
  switch (mode)
    {
    case VOIDmode: return VOIDmode;
    case BLKmode: return VOIDmode;
    case CCmode: return VOIDmode;
    case CC_NOOVmode: return VOIDmode;
    case CC_Zmode: return VOIDmode;
    case CC_CZmode: return VOIDmode;
    case CC_NCVmode: return VOIDmode;
    case CC_SWPmode: return VOIDmode;
    case CCFPmode: return VOIDmode;
    case CCFPEmode: return VOIDmode;
    case CC_DNEmode: return VOIDmode;
    case CC_DEQmode: return VOIDmode;
    case CC_DLEmode: return VOIDmode;
    case CC_DLTmode: return VOIDmode;
    case CC_DGEmode: return VOIDmode;
    case CC_DGTmode: return VOIDmode;
    case CC_DLEUmode: return VOIDmode;
    case CC_DLTUmode: return VOIDmode;
    case CC_DGEUmode: return VOIDmode;
    case CC_DGTUmode: return VOIDmode;
    case CC_Cmode: return VOIDmode;
    case CC_Nmode: return VOIDmode;
    case BImode: return VOIDmode;
    case QImode: return VOIDmode;
    case HImode: return VOIDmode;
    case SImode: return VOIDmode;
    case DImode: return VOIDmode;
    case TImode: return VOIDmode;
    case EImode: return VOIDmode;
    case OImode: return VOIDmode;
    case CImode: return VOIDmode;
    case XImode: return VOIDmode;
    case QQmode: return VOIDmode;
    case HQmode: return VOIDmode;
    case SQmode: return VOIDmode;
    case DQmode: return VOIDmode;
    case TQmode: return VOIDmode;
    case UQQmode: return VOIDmode;
    case UHQmode: return VOIDmode;
    case USQmode: return VOIDmode;
    case UDQmode: return VOIDmode;
    case UTQmode: return VOIDmode;
    case HAmode: return VOIDmode;
    case SAmode: return VOIDmode;
    case DAmode: return VOIDmode;
    case TAmode: return VOIDmode;
    case UHAmode: return VOIDmode;
    case USAmode: return VOIDmode;
    case UDAmode: return VOIDmode;
    case UTAmode: return VOIDmode;
    case HFmode: return VOIDmode;
    case SFmode: return VOIDmode;
    case DFmode: return VOIDmode;
    case XFmode: return VOIDmode;
    case SDmode: return VOIDmode;
    case DDmode: return VOIDmode;
    case TDmode: return VOIDmode;
    case CQImode: return QImode;
    case CHImode: return HImode;
    case CSImode: return SImode;
    case CDImode: return DImode;
    case CTImode: return TImode;
    case CEImode: return EImode;
    case COImode: return OImode;
    case CCImode: return CImode;
    case CXImode: return XImode;
    case HCmode: return HFmode;
    case SCmode: return SFmode;
    case DCmode: return DFmode;
    case XCmode: return XFmode;
    case V4QImode: return QImode;
    case V2HImode: return HImode;
    case V8QImode: return QImode;
    case V4HImode: return HImode;
    case V2SImode: return SImode;
    case V16QImode: return QImode;
    case V8HImode: return HImode;
    case V4SImode: return SImode;
    case V2DImode: return DImode;
    case V4QQmode: return QQmode;
    case V2HQmode: return HQmode;
    case V4UQQmode: return UQQmode;
    case V2UHQmode: return UHQmode;
    case V2HAmode: return HAmode;
    case V2UHAmode: return UHAmode;
    case V4HFmode: return HFmode;
    case V2SFmode: return SFmode;
    case V8HFmode: return HFmode;
    case V4SFmode: return SFmode;
    case V2DFmode: return DFmode;
    default: return mode_inner[mode];
    }
}

#endif /* GCC_VERSION >= 4001 */

#endif /* insn-modes.h */
