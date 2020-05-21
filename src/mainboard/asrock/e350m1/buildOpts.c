/* SPDX-License-Identifier: GPL-2.0-only */

/**
 * @file
 *
 * AMD User options selection for a Brazos platform solution system
 *
 * This file is placed in the user's platform directory and contains the
 * build option selections desired for that platform.
 *
 * For Information about this file, see @ref platforminstall.
 */

#include <AGESA.h>

/* Select the CPU family. */
#define INSTALL_FAMILY_14_SUPPORT TRUE

/* Select the CPU socket type. */
#define INSTALL_FT1_SOCKET_SUPPORT  TRUE

/*
 * Agesa optional capabilities selection.
 * Uncomment and mark FALSE those features you wish to include in the build.
 * Comment out or mark TRUE those features you want to REMOVE from the build.
 */

#define BLDOPT_REMOVE_UDIMMS_SUPPORT          FALSE
#define BLDOPT_REMOVE_RDIMMS_SUPPORT        TRUE
#define BLDOPT_REMOVE_LRDIMMS_SUPPORT         FALSE
#define BLDOPT_REMOVE_ECC_SUPPORT             FALSE
//#define BLDOPT_REMOVE_DCT_INTERLEAVE        TRUE
#define BLDOPT_REMOVE_BANK_INTERLEAVE         FALSE
#define BLDOPT_REMOVE_NODE_INTERLEAVE       TRUE
#define BLDOPT_REMOVE_PARALLEL_TRAINING       FALSE
#define BLDOPT_REMOVE_DQS_TRAINING            FALSE
#define BLDOPT_REMOVE_ONLINE_SPARE_SUPPORT    TRUE
#define BLDOPT_REMOVE_MULTISOCKET_SUPPORT     TRUE
#define BLDOPT_REMOVE_ACPI_PSTATES          FALSE
  #define BLDCFG_REMOVE_ACPI_PSTATES_PPC        FALSE
  #define BLDCFG_REMOVE_ACPI_PSTATES_PCT        FALSE
  #define BLDCFG_REMOVE_ACPI_PSTATES_PSD        FALSE
  #define BLDCFG_REMOVE_ACPI_PSTATES_PSS        FALSE
  #define BLDCFG_REMOVE_ACPI_PSTATES_XPSS       FALSE
  #define BLDCFG_FORCE_INDEPENDENT_PSD_OBJECT     FALSE
#define BLDOPT_REMOVE_SRAT            TRUE
#define BLDOPT_REMOVE_SLIT            TRUE
#define BLDOPT_REMOVE_WHEA            TRUE
#define BLDOPT_REMOVE_DMI             TRUE
#define BLDOPT_REMOVE_HT_ASSIST         TRUE
#define BLDOPT_REMOVE_ATM_MODE          TRUE
//#define BLDOPT_REMOVE_MSG_BASED_C1E       TRUE
//#define BLDOPT_REMOVE_LOW_POWER_STATE_FOR_PROCHOT TRUE
#define BLDOPT_REMOVE_MEM_RESTORE_SUPPORT     FALSE
//#define BLDOPT_REMOVE_C6_STATE          TRUE
#define BLDOPT_REMOVE_GFX_RECOVERY        TRUE
#define BLDOPT_REMOVE_EARLY_SAMPLES            TRUE

/*
 * Agesa configuration values selection.
 * Uncomment and specify the value for the configuration options
 * needed by the system.
 */

#define BLDCFG_VRM_CURRENT_LIMIT                24000
//#define BLDCFG_VRM_NB_CURRENT_LIMIT             0
#define BLDCFG_VRM_LOW_POWER_THRESHOLD          24000
#define BLDCFG_VRM_NB_LOW_POWER_THRESHOLD       1
#define BLDCFG_VRM_SLEW_RATE                    5000
//#define BLDCFG_VRM_NB_SLEW_RATE                 5000
//#define BLDCFG_VRM_ADDITIONAL_DELAY             0
//#define BLDCFG_VRM_NB_ADDITIONAL_DELAY          0
#define BLDCFG_VRM_HIGH_SPEED_ENABLE            TRUE
//#define BLDCFG_VRM_NB_HIGH_SPEED_ENABLE         FALSE
#define BLDCFG_VRM_INRUSH_CURRENT_LIMIT         6000
//#define BLDCFG_VRM_NB_INRUSH_CURRENT_LIMIT      0

//#define BLDCFG_PROCESSOR_SCOPE_NAME0            'C'
//#define BLDCFG_PROCESSOR_SCOPE_NAME1            '0'
//#define BLDCFG_PROCESSOR_SCOPE_IN_SB            FALSE
#define BLDCFG_PLAT_NUM_IO_APICS                3
//#define BLDCFG_PLATFORM_C1E_MODE                C1eModeDisabled
//#define BLDCFG_PLATFORM_C1E_OPDATA              0
//#define BLDCFG_PLATFORM_C1E_MODE_OPDATA1        0
//#define BLDCFG_PLATFORM_C1E_MODE_OPDATA2        0
#define BLDCFG_PLATFORM_CSTATE_MODE             CStateModeC6
#define BLDCFG_PLATFORM_CSTATE_OPDATA           0x840
#define BLDCFG_PLATFORM_CSTATE_IO_BASE_ADDRESS  0x840
//#define BLDCFG_PLATFORM_CPB_MODE                CpbModeAuto
#define BLDCFG_CORE_LEVELING_MODE               CORE_LEVEL_LOWEST
#define BLDCFG_AMD_PLATFORM_TYPE                AMD_PLATFORM_MOBILE
//#define BLDCFG_STARTING_BUSNUM                  0
//#define BLDCFG_MAXIMUM_BUSNUM                   0xf8
//#define BLDCFG_ALLOCATED_BUSNUMS                0x20
//#define BLDCFG_PLATFORM_DEEMPHASIS_LIST         0
//#define BLDCFG_BUID_SWAP_LIST                   0
//#define BLDCFG_HTDEVICE_CAPABILITIES_OVERRIDE_LIST  0
//#define BLDCFG_HTFABRIC_LIMITS_LIST             0
//#define BLDCFG_HTCHAIN_LIMITS_LIST              0
//#define BLDCFG_BUS_NUMBERS_LIST                 0
//#define BLDCFG_IGNORE_LINK_LIST                 0
//#define BLDCFG_LINK_SKIP_REGANG_LIST            0
//#define BLDCFG_ADDITIONAL_TOPOLOGIES_LIST       0
//#define BLDCFG_USE_HT_ASSIST                    TRUE
//#define BLDCFG_USE_ATM_MODE                     TRUE
//#define BLDCFG_PLATFORM_CONTROL_FLOW_MODE       Nfcm
#define BLDCFG_S3_LATE_RESTORE                    TRUE
//#define BLDCFG_USE_32_BYTE_REFRESH              FALSE
//#define BLDCFG_USE_VARIABLE_MCT_ISOC_PRIORITY   FALSE
//#define BLDCFG_PLATFORM_POWER_POLICY_MODE       Performance
//#define BLDCFG_SET_HTCRC_SYNC_FLOOD             FALSE
//#define BLDCFG_USE_UNIT_ID_CLUMPING             FALSE
//#define BLDCFG_SYSTEM_PHYSICAL_SOCKET_MAP       0
//#define BLDCFG_CFG_GNB_HD_AUDIO                 TRUE
//#define BLDCFG_CFG_ABM_SUPPORT                  FALSE
//#define BLDCFG_CFG_DYNAMIC_REFRESH_RATE         0
//#define BLDCFG_CFG_LCD_BACK_LIGHT_CONTROL       0
//#define BLDCFG_MEM_INIT_PSTATE                  0
//#define BLDCFG_AMD_PSTATE_CAP_VALUE             0
#define BLDCFG_MEMORY_BUS_FREQUENCY_LIMIT       DDR1333_FREQUENCY
#define BLDCFG_MEMORY_MODE_UNGANGED             TRUE
//#define BLDCFG_MEMORY_QUAD_RANK_CAPABLE         TRUE
//#define BLDCFG_MEMORY_QUADRANK_TYPE             QUADRANK_UNBUFFERED
#define BLDCFG_MEMORY_SODIMM_CAPABLE            TRUE
#define BLDCFG_MEMORY_LRDIMM_CAPABLE            FALSE
#define BLDCFG_MEMORY_ENABLE_BANK_INTERLEAVING  TRUE
#define BLDCFG_MEMORY_ENABLE_NODE_INTERLEAVING  FALSE
#define BLDCFG_MEMORY_CHANNEL_INTERLEAVING      FALSE
#define BLDCFG_MEMORY_POWER_DOWN                TRUE
#define BLDCFG_POWER_DOWN_MODE                  POWER_DOWN_BY_CHIP_SELECT
//#define BLDCFG_ONLINE_SPARE                     FALSE
//#define BLDCFG_MEMORY_PARITY_ENABLE             FALSE
#define BLDCFG_BANK_SWIZZLE                     TRUE
#define BLDCFG_TIMING_MODE_SELECT               TIMING_MODE_AUTO
#define BLDCFG_MEMORY_CLOCK_SELECT              DDR1333_FREQUENCY
#define BLDCFG_DQS_TRAINING_CONTROL             TRUE
#define BLDCFG_IGNORE_SPD_CHECKSUM              FALSE
#define BLDCFG_USE_BURST_MODE                   FALSE
#define BLDCFG_MEMORY_ALL_CLOCKS_ON             FALSE
//#define BLDCFG_ENABLE_ECC_FEATURE               TRUE
//#define BLDCFG_ECC_REDIRECTION                  FALSE
//#define BLDCFG_SCRUB_DRAM_RATE                  0
//#define BLDCFG_SCRUB_L2_RATE                    0
//#define BLDCFG_SCRUB_L3_RATE                    0
//#define BLDCFG_SCRUB_IC_RATE                    0
//#define BLDCFG_SCRUB_DC_RATE                    0
//#define BLDCFG_ECC_SYNC_FLOOD                   0
//#define BLDCFG_ECC_SYMBOL_SIZE                  0
//#define BLDCFG_1GB_ALIGN                        FALSE
#define BLDCFG_UMA_ALLOCATION_MODE              UMA_AUTO
#define BLDCFG_UMA_ALLOCATION_SIZE              0
#define BLDCFG_UMA_ABOVE4G_SUPPORT              FALSE
#define BLDCFG_UMA_ALIGNMENT                    NO_UMA_ALIGNED
#define BLDCFG_HEAP_DRAM_ADDRESS                0xB0000
#define BLDCFG_CFG_TEMP_PCIE_MMIO_BASE_ADDRESS  0xD0000000

/* Include the files that instantiate the configuration definitions. */
#include "cpuRegisters.h"
#include "cpuFamRegisters.h"
#include "cpuFamilyTranslation.h"
#include "AdvancedApi.h"
#include "heapManager.h"
#include "CreateStruct.h"
#include "cpuFeatures.h"
#include "Table.h"
#include "cpuEarlyInit.h"
#include "cpuLateInit.h"
#include "GnbInterface.h"

/* FIXME: This is most likely wrong */
#undef AGESA_VERSION_STRING
                  // This is the release version number of the AGESA component
                  // This string MUST be exactly 12 characters long
#define AGESA_VERSION_STRING  {'V', '0', '.', '0', '.', '0', '.', '1', ' ', ' ', ' ', ' '}

/* MEMORY_BUS_SPEED */
#define DDR400_FREQUENCY				200 ///< DDR 400
#define DDR533_FREQUENCY				266 ///< DDR 533
#define DDR667_FREQUENCY				333 ///< DDR 667
#define DDR800_FREQUENCY				400 ///< DDR 800
#define DDR1066_FREQUENCY				533 ///< DDR 1066
#define DDR1333_FREQUENCY				667 ///< DDR 1333
#define DDR1600_FREQUENCY				800 ///< DDR 1600
#define DDR1866_FREQUENCY				933 ///< DDR 1866
#define UNSUPPORTED_DDR_FREQUENCY			934 ///< Highest limit of DDR frequency

/* QUANDRANK_TYPE */
#define QUADRANK_REGISTERED				0 ///< Quadrank registered DIMM
#define QUADRANK_UNBUFFERED				1 ///< Quadrank unbuffered DIMM

/* USER_MEMORY_TIMING_MODE */
#define TIMING_MODE_AUTO				0 ///< Use best rate possible
#define TIMING_MODE_LIMITED				1 ///< Set user top limit
#define TIMING_MODE_SPECIFIC				2 ///< Set user specified speed

/* POWER_DOWN_MODE */
#define POWER_DOWN_BY_CHANNEL				0 ///< Channel power down mode
#define POWER_DOWN_BY_CHIP_SELECT			1 ///< Chip select power down mode

// Instantiate all solution relevant data.
#include <PlatformInstall.h>
